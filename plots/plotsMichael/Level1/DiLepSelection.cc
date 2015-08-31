#include <cmath> 
#include <math.h>
#include <vector>
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <string>

#include <TTree.h>
#include <TChain.h>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH2.h>
#include <TH1F.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TVector2.h>
#include <TVector3.h>
#include <TAxis.h>
#include <TLorentzVector.h>
#include "TRegexp.h"

#define pi 3.141592653589793
#include "DiLepSelection.h"


#include "mt2_bisect.cpp"
#include "mt2w_bisect.cpp"


using namespace std;
using std::vector;
using std::cout; using std::endl;



vector<TLorentzVector> CombineJets_R_no_seed(vector<TLorentzVector> ,TLorentzVector, TLorentzVector);
double CalcMTR(TLorentzVector , TLorentzVector , TVector3 );
double CalcGammaMRstar(TLorentzVector , TLorentzVector);



//===== constructor  ====
DiLepSelection::DiLepSelection(TTree *tree): DiLepTree_V1(tree) { 
  //=======================
  cout << "Building DiLepSelection..." << endl;

}


//================================================
void DiLepSelection::SetFilename(const char* outname) {
  //================================================

  sprintf(file,"%s",outname);

}


double smallest(double w, double x, double y, double z) {

  double smallest = 99999.;

  if (w < smallest)
    smallest=w;
  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}


 double deltaPhi(double a, double b){

    double deltaphi = fabs(a - b);
    if (deltaphi > TMath::Pi())
      deltaphi = TMath::TwoPi() - deltaphi;
    return deltaphi;
}


double deltaR(double eta1, double phi1, double eta2, double phi2){
  double deltaeta = fabs(eta1 - eta2);
  double deltaphi = fabs(phi1 - phi2);
  if (deltaphi > TMath::Pi())
    deltaphi = TMath::TwoPi() - deltaphi;
  double deltaR = sqrt(pow(deltaeta,2) + pow(deltaphi,2));
  return deltaR;
  
}


double deltaR(TLorentzVector a, TLorentzVector b) {

  return deltaR(a.Eta(), a.Phi(), b.Eta(), b.Phi());
  
}
 
bool comp_pair (double i,double j) { return (i>j); }
bool comp_pair2(const TLorentzVector &a, const TLorentzVector &b){ return a.Pt() > b.Pt(); }







//----------------------------
void DiLepSelection::Loop(int nMaxEvents, const char* outname)
//----------------------------
{
  if (fChain == 0) return;

  char line[300];
  sprintf(line,"%s.root",file);
   
  TFile *fout = new TFile(line,"RECREATE");
  
/* 
  TH1D* h000 = new TH1D("Entries","",9,0,9);
  h000->GetXaxis()->SetBinLabel(1,"All");
  h000->GetXaxis()->SetBinLabel(2,"Preselection");
  h000->GetXaxis()->SetBinLabel(3,"OneGoodVtx");
  h000->GetXaxis()->SetBinLabel(4,"MET>60");
  h000->GetXaxis()->SetBinLabel(5,"nJet2");
  h000->GetXaxis()->SetBinLabel(6,"nPhot2");
  
  
  h000->Fill(0.,entries);
  */



  //Float_t MET;
  
  //TTree *anaTree     = new TTree("anaTree","Tree of variables"); 
  //anaTree->Branch("MET", &MET, "MET/F");

  Long64_t nentries = fChain->GetEntries();
  Float_t N_events_w = (Float_t) fChain->GetEntries();

  Long64_t nbytes = 0, nb = 0;
  selectedEvents_ = 0;
  
  Long64_t jentry;
  


   TH1D* h1_met = new TH1D("h1_met","",25,0,500) ;
   TH1D* h1_lepton_pT = new TH1D("h1_lepton_pT","",40,0,800) ;
   TH1D* h1_lepton_eta = new TH1D("h1_lepton_eta","",40,-2.5,2.5) ;
   TH1D* h1_mlb_hemi = new TH1D("h1_mlb_hemi","",40,0,800) ;
   TH1D* h1_m3b = new TH1D("h1_m3b","",75,0,1500) ;
   TH1D* h1_mT2W = new TH1D("h1_mT2W","",50,0,500) ;
   TH1D* h1_mT = new TH1D("h1_mT","",50,0,500) ;
   TH1D* h1_b1_pt = new TH1D("h1_b1_pt","",40,0,800) ;
   TH1D* h1_dPhi_JetMet = new TH1D("h1_dPhi_JetMet","",50,0,5.) ;
   TH1D* h1_dR_LepB = new TH1D("h1_dR_LepB","",50,0,7.) ;
   TH1D* h1_jet1_pT = new TH1D("h1_jet1_pT","",75,0,1500) ;
   TH1D* h1_HT = new TH1D("h1_HT","",50,0,1.) ;
   TH1D* h1_HTfrac = new TH1D("h1_HTfrac","",50,0,1.) ;
   TH1D* h1_njets = new TH1D("h1_njets","",11,0.5,11.5) ;
   TH1D* h1_nlept = new TH1D("h1_nlept","",11,0.5,11.5) ;
   TH1D* h1_nbjets = new TH1D("h1_nbjets","",11,0.5,11.5) ;
   TH1D* h1_Chi2SNT = new TH1D("h1_Chi2SNT","",50,0,10.) ;
   TH1D* h1_METoverSqrtHT = new TH1D("h1_METoverSqrtHT","", 75,0,15) ;
   TH1D* h1_nVtx = new TH1D("h1_nvTX","",50,0,50) ;


  for (jentry=0; jentry<nentries && jentry<nMaxEvents;jentry++) {

    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    if( (jentry+1)%10000==0) cout << "Processing event " << jentry+1 << endl;

     
    /***********************************************************************/
    //                   LOOP OVER EVENTS AND PERFORM CUTS
    /***********************************************************************/

      if (TString(outname) == "DoubleElec-PromptReco-v1" && HLT_ee_DZ==0) continue; 
      if (TString(outname) == "DoubleMuon-PromptReco-v1" && HLT_mumuIso==0) continue; 


      if (met_pt<40) continue;

      ptJet.clear();
      ptBJet.clear();
      ptLep.clear();
      etaLep.clear();

 
      for ( int j=0 ; j< nJet; j++ ) {
      
      if (Jet_id[j] && Jet_eta[j] < 2.4 && Jet_pt[j] > 30) { 

				if (Jet_btagCSV[j] > 0.814) ptBJet.push_back(Jet_pt[j]);
					else   ptJet.push_back(Jet_pt[j]);

      					   sort(ptJet.begin(),ptJet.end(),comp_pair);

	       }
      }


      for ( int i=0 ; i< nLepGood; i++ ) {

		if (LepGood_pt[i] > 20 ) { 

			ptLep.push_back(LepGood_pt[i]);
			etaLep.push_back(LepGood_eta[i]);

      					   sort(ptLep.begin(),ptLep.end(),comp_pair);
      					   sort(etaLep.begin(),etaLep.end(),comp_pair);
		}

      }



		if (ptJet.size() < 2) continue;
		if (ptLep.size() < 2) continue;
		if (ptBJet.size() < 0) continue;

//		cout << ptJet.size()<< endl;
//		cout << ptLep.size()<< endl;
//		cout << ptBJet.size()<< endl;

      //double lumi = 42./4000.; 
      double lumi = 1.; 


/*
      for ( int j=0 ; j< ptJet.size(); j++ ) {
 
       if (isData==0)  h1_jet1_pT->Fill(ptJet[0], lumi*weight);
           else h1_jet1_pT->Fill(ptJet[0]);
      }

      for ( int j=0 ; j< ptLep.size(); j++ ) {

        if (isData==0){
        h1_lepton_pT->Fill(ptLep[0], lumi*weight);
        h1_lepton_eta->Fill(etaLep[0], lumi* weight);
        }
		 
        else 
        h1_lepton_pT->Fill(ptLep[0]);
        h1_lepton_eta->Fill(etaLep[0]);
        }
*/
        if (isData==0){
        h1_met->Fill(met_pt, lumi*weight);
        h1_njets->Fill(ptJet.size(), lumi*weight);
        h1_nbjets->Fill(ptBJet.size(), lumi*weight);
        h1_nlept->Fill(ptLep.size(), lumi*weight);
        h1_jet1_pT->Fill(ptJet[0], lumi*weight);
        h1_lepton_pT->Fill(ptLep[0], lumi*weight);
        h1_lepton_eta->Fill(etaLep[0], lumi*weight);
        h1_nVtx->Fill(nVert, lumi*weight);
        }

        else 
        h1_met->Fill(met_pt);
        h1_njets->Fill(ptJet.size());
        h1_nbjets->Fill(ptBJet.size());
        h1_nlept->Fill(ptLep.size());
        h1_jet1_pT->Fill(ptJet[0]);
        h1_lepton_pT->Fill(ptLep[0]);
        h1_lepton_eta->Fill(etaLep[0]);
        h1_nVtx->Fill(nVert);


//     mt2_bisect::mt2 mt2_event;
//     mt2_event.set_momenta( pa, pb, met_pt );
//     mt2_event.set_mass( mn );     

//      anaTree->Fill();

  }

   
  fout->cd();
//  anaTree->Write();
  fout->Write();
  fout->Close();

}

