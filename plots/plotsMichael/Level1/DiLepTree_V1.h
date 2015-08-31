//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Aug 25 14:29:30 2015 by ROOT version 5.34/18
// from TTree Events/treeProducerSusySingleLepton
// found on file: root://eoscms//store/cmst3/group/susy/schoef/postProcessed_Spring15/dilep/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1_0.root
//////////////////////////////////////////////////////////

#ifndef DiLepTree_V1_h
#define DiLepTree_V1_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class DiLepTree_V1 {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   ULong64_t       evt;
   Int_t           isData;
   Float_t         xsec;
   Float_t         puWeight;
   Int_t           nTrueInt;
   Float_t         genWeight;
   Float_t         rho;
   Int_t           nVert;
   Float_t         met_genPt;
   Float_t         met_genPhi;
   Float_t         met_rawPt;
   Float_t         met_rawPhi;
   Float_t         met_rawSumEt;
   Float_t         metNoHF_rawPt;
   Float_t         metNoHF_rawPhi;
   Float_t         metNoHF_rawSumetNoHF;
   Float_t         met_caloPt;
   Float_t         met_caloPhi;
   Float_t         met_caloSumEt;
   Float_t         Flag_HBHENoiseFilterMinZeroPatched;
   Float_t         HLT_mumuNoniso_50ns;
   Float_t         HLT_HT900;
   Float_t         HLT_MuHT400B;
   Float_t         HLT_ElHT400B;
   Float_t         HLT_mumuSS;
   Float_t         HLT_Had;
   Float_t         HLT_DiPFJet260;
   Float_t         HLT_SingleMu;
   Float_t         HLT_DiPFJet200;
   Float_t         HLT_PhysRates;
   Float_t         HLT_EleHT400MET70;
   Float_t         HLT_MET120;
   Float_t         HLT_ElHad;
   Float_t         HLT_DiPFJet140;
   Float_t         HLT_MuHT350MET70;
   Float_t         HLT_ElNoIso;
   Float_t         HLT_MET90nc;
   Float_t         HLT_mumuIso;
   Float_t         HLT_EleHT200;
   Float_t         HLT_Mu50NoIso;
   Float_t         HLT_DiPFJet500;
   Float_t         HLT_MuHad;
   Float_t         HLT_mumuHT;
   Float_t         HLT_MuMET120;
   Float_t         HLT_Mu45NoIso;
   Float_t         HLT_ee_DZ;
   Float_t         HLT_HT350;
   Float_t         HLT_DiPFJet400;
   Float_t         HLT_HT600;
   Float_t         HLT_MET120nc;
   Float_t         HLT_mumuNoiso;
   Float_t         HLT_DiPFJet320;
   Float_t         HLT_HTMET;
   Float_t         HLT_MuHT400MET70;
   Float_t         HLT_SingleEl;
   Float_t         HLT_MET170;
   Float_t         HLT_MET170_pres;
   Float_t         HLT_EleHT350MET70;
   Float_t         HLT_EleHT600;
   Float_t         HLT_MET90;
   Float_t         HLT_MuHT600;
   Float_t         HLT_MET250;
   Float_t         Flag_EcalDeadCellTriggerPrimitiveFilter;
   Float_t         Flag_trkPOG_manystripclus53X;
   Float_t         Flag_ecalLaserCorrFilter;
   Float_t         Flag_trkPOG_toomanystripclus53X;
   Float_t         Flag_hcalLaserEventFilter;
   Float_t         Flag_trkPOG_logErrorTooManyClusters;
   Float_t         Flag_trkPOGFilters;
   Float_t         Flag_trackingFailureFilter;
   Float_t         Flag_CSCTightHaloFilter;
   Float_t         Flag_HBHENoiseFilter;
   Float_t         Flag_goodVertices;
   Float_t         Flag_METFilters;
   Float_t         Flag_eeBadScFilter;
   Float_t         met_pt;
   Float_t         met_eta;
   Float_t         met_phi;
   Float_t         met_mass;
   Float_t         met_sumEt;
   Float_t         metNoHF_pt;
   Float_t         metNoHF_eta;
   Float_t         metNoHF_phi;
   Float_t         metNoHF_mass;
   Float_t         metNoHF_sumEt;
   Int_t           ngenPartAll;
   Int_t           genPartAll_motherId[154];   //[ngenPartAll]
   Int_t           genPartAll_grandmotherId[154];   //[ngenPartAll]
   Float_t         genPartAll_charge[154];   //[ngenPartAll]
   Int_t           genPartAll_status[154];   //[ngenPartAll]
   Int_t           genPartAll_pdgId[154];   //[ngenPartAll]
   Float_t         genPartAll_pt[154];   //[ngenPartAll]
   Float_t         genPartAll_eta[154];   //[ngenPartAll]
   Float_t         genPartAll_phi[154];   //[ngenPartAll]
   Float_t         genPartAll_mass[154];   //[ngenPartAll]
   Int_t           genPartAll_nDaughters[154];   //[ngenPartAll]
   Int_t           genPartAll_nMothers[154];   //[ngenPartAll]
   Int_t           genPartAll_motherIndex1[154];   //[ngenPartAll]
   Int_t           genPartAll_daughterIndex1[154];   //[ngenPartAll]
   Int_t           genPartAll_motherIndex2[154];   //[ngenPartAll]
   Int_t           genPartAll_daughterIndex2[154];   //[ngenPartAll]
   Int_t           nJet;
   Float_t         Jet_area[10];   //[nJet]
   Float_t         Jet_qgl[10];   //[nJet]
   Float_t         Jet_ptd[10];   //[nJet]
   Float_t         Jet_axis2[10];   //[nJet]
   Int_t           Jet_mult[10];   //[nJet]
   Int_t           Jet_partonId[10];   //[nJet]
   Int_t           Jet_partonMotherId[10];   //[nJet]
   Float_t         Jet_nLeptons[10];   //[nJet]
   Int_t           Jet_id[10];   //[nJet]
   Int_t           Jet_puId[10];   //[nJet]
   Float_t         Jet_btagCSV[10];   //[nJet]
   Float_t         Jet_btagCMVA[10];   //[nJet]
   Float_t         Jet_rawPt[10];   //[nJet]
   Float_t         Jet_mcPt[10];   //[nJet]
   Int_t           Jet_mcFlavour[10];   //[nJet]
   Int_t           Jet_mcMatchId[10];   //[nJet]
   Float_t         Jet_corr_JECUp[10];   //[nJet]
   Float_t         Jet_corr_JECDown[10];   //[nJet]
   Float_t         Jet_corr[10];   //[nJet]
   Float_t         Jet_pt[10];   //[nJet]
   Float_t         Jet_eta[10];   //[nJet]
   Float_t         Jet_phi[10];   //[nJet]
   Float_t         Jet_mass[10];   //[nJet]
   Int_t           Jet_mcMatchFlav[10];   //[nJet]
   Float_t         Jet_chHEF[10];   //[nJet]
   Float_t         Jet_neHEF[10];   //[nJet]
   Float_t         Jet_phEF[10];   //[nJet]
   Float_t         Jet_eEF[10];   //[nJet]
   Float_t         Jet_muEF[10];   //[nJet]
   Float_t         Jet_HFHEF[10];   //[nJet]
   Float_t         Jet_HFEMEF[10];   //[nJet]
   Int_t           Jet_chHMult[10];   //[nJet]
   Int_t           Jet_neHMult[10];   //[nJet]
   Int_t           Jet_phMult[10];   //[nJet]
   Int_t           Jet_eMult[10];   //[nJet]
   Int_t           Jet_muMult[10];   //[nJet]
   Int_t           Jet_HFHMult[10];   //[nJet]
   Int_t           Jet_HFEMMult[10];   //[nJet]
   Int_t           nLepGood;
   Int_t           LepGood_charge[5];   //[nLepGood]
   Int_t           LepGood_tightId[5];   //[nLepGood]
   Int_t           LepGood_eleCutIdCSA14_25ns_v1[5];   //[nLepGood]
   Int_t           LepGood_eleCutIdCSA14_50ns_v1[5];   //[nLepGood]
   Float_t         LepGood_dxy[5];   //[nLepGood]
   Float_t         LepGood_dz[5];   //[nLepGood]
   Float_t         LepGood_edxy[5];   //[nLepGood]
   Float_t         LepGood_edz[5];   //[nLepGood]
   Float_t         LepGood_ip3d[5];   //[nLepGood]
   Float_t         LepGood_sip3d[5];   //[nLepGood]
   Int_t           LepGood_convVeto[5];   //[nLepGood]
   Int_t           LepGood_lostHits[5];   //[nLepGood]
   Float_t         LepGood_relIso03[5];   //[nLepGood]
   Float_t         LepGood_relIso04[5];   //[nLepGood]
   Float_t         LepGood_miniRelIso[5];   //[nLepGood]
   Int_t           LepGood_tightCharge[5];   //[nLepGood]
   Int_t           LepGood_mcMatchId[5];   //[nLepGood]
   Int_t           LepGood_mcMatchAny[5];   //[nLepGood]
   Int_t           LepGood_mcMatchTau[5];   //[nLepGood]
   Float_t         LepGood_mcPt[5];   //[nLepGood]
   Int_t           LepGood_mediumMuonId[5];   //[nLepGood]
   Int_t           LepGood_pdgId[5];   //[nLepGood]
   Float_t         LepGood_pt[5];   //[nLepGood]
   Float_t         LepGood_eta[5];   //[nLepGood]
   Float_t         LepGood_phi[5];   //[nLepGood]
   Float_t         LepGood_mass[5];   //[nLepGood]
   Float_t         LepGood_mvaIdPhys14[5];   //[nLepGood]
   Float_t         LepGood_mvaTTH[5];   //[nLepGood]
   Float_t         LepGood_mvaSusy[5];   //[nLepGood]
   Float_t         LepGood_jetPtRatio[5];   //[nLepGood]
   Float_t         LepGood_jetPtRel[5];   //[nLepGood]
   Float_t         LepGood_jetBTagCSV[5];   //[nLepGood]
   Float_t         LepGood_jetBTagCMVA[5];   //[nLepGood]
   Float_t         LepGood_jetDR[5];   //[nLepGood]
   Int_t           nTauGood;
   Int_t           TauGood_charge[3];   //[nTauGood]
   Int_t           TauGood_decayMode[3];   //[nTauGood]
   Int_t           TauGood_idDecayMode[3];   //[nTauGood]
   Int_t           TauGood_idDecayModeNewDMs[3];   //[nTauGood]
   Float_t         TauGood_dxy[3];   //[nTauGood]
   Float_t         TauGood_dz[3];   //[nTauGood]
   Int_t           TauGood_idMVA[3];   //[nTauGood]
   Int_t           TauGood_idMVANewDM[3];   //[nTauGood]
   Int_t           TauGood_idCI3hit[3];   //[nTauGood]
   Int_t           TauGood_idAntiMu[3];   //[nTauGood]
   Int_t           TauGood_idAntiE[3];   //[nTauGood]
   Float_t         TauGood_isoCI3hit[3];   //[nTauGood]
   Int_t           TauGood_mcMatchId[3];   //[nTauGood]
   Int_t           TauGood_pdgId[3];   //[nTauGood]
   Float_t         TauGood_pt[3];   //[nTauGood]
   Float_t         TauGood_eta[3];   //[nTauGood]
   Float_t         TauGood_phi[3];   //[nTauGood]
   Float_t         TauGood_mass[3];   //[nTauGood]
   Float_t         weight;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_evt;   //!
   TBranch        *b_isData;   //!
   TBranch        *b_xsec;   //!
   TBranch        *b_puWeight;   //!
   TBranch        *b_nTrueInt;   //!
   TBranch        *b_genWeight;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_nVert;   //!
   TBranch        *b_met_genPt;   //!
   TBranch        *b_met_genPhi;   //!
   TBranch        *b_met_rawPt;   //!
   TBranch        *b_met_rawPhi;   //!
   TBranch        *b_met_rawSumEt;   //!
   TBranch        *b_metNoHF_rawPt;   //!
   TBranch        *b_metNoHF_rawPhi;   //!
   TBranch        *b_metNoHF_rawSumetNoHF;   //!
   TBranch        *b_met_caloPt;   //!
   TBranch        *b_met_caloPhi;   //!
   TBranch        *b_met_caloSumEt;   //!
   TBranch        *b_Flag_HBHENoiseFilterMinZeroPatched;   //!
   TBranch        *b_HLT_HT900;   //!
   TBranch        *b_HLT_MuHT400B;   //!
   TBranch        *b_HLT_mumuNoniso_50ns;   //!
   TBranch        *b_HLT_ElHT400B;   //!
   TBranch        *b_HLT_mumuSS;   //!
   TBranch        *b_HLT_Had;   //!
   TBranch        *b_HLT_DiPFJet260;   //!
   TBranch        *b_HLT_SingleMu;   //!
   TBranch        *b_HLT_DiPFJet200;   //!
   TBranch        *b_HLT_PhysRates;   //!
   TBranch        *b_HLT_EleHT400MET70;   //!
   TBranch        *b_HLT_MET120;   //!
   TBranch        *b_HLT_ElHad;   //!
   TBranch        *b_HLT_DiPFJet140;   //!
   TBranch        *b_HLT_MuHT350MET70;   //!
   TBranch        *b_HLT_ElNoIso;   //!
   TBranch        *b_HLT_MET90nc;   //!
   TBranch        *b_HLT_mumuIso;   //!
   TBranch        *b_HLT_EleHT200;   //!
   TBranch        *b_HLT_Mu50NoIso;   //!
   TBranch        *b_HLT_DiPFJet500;   //!
   TBranch        *b_HLT_MuHad;   //!
   TBranch        *b_HLT_mumuHT;   //!
   TBranch        *b_HLT_MuMET120;   //!
   TBranch        *b_HLT_Mu45NoIso;   //!
   TBranch        *b_HLT_ee_DZ;   //!
   TBranch        *b_HLT_HT350;   //!
   TBranch        *b_HLT_DiPFJet400;   //!
   TBranch        *b_HLT_HT600;   //!
   TBranch        *b_HLT_MET120nc;   //!
   TBranch        *b_HLT_mumuNoiso;   //!
   TBranch        *b_HLT_DiPFJet320;   //!
   TBranch        *b_HLT_HTMET;   //!
   TBranch        *b_HLT_MuHT400MET70;   //!
   TBranch        *b_HLT_SingleEl;   //!
   TBranch        *b_HLT_MET170;   //!
   TBranch        *b_HLT_MET170_pres;   //!
   TBranch        *b_HLT_EleHT350MET70;   //!
   TBranch        *b_HLT_EleHT600;   //!
   TBranch        *b_HLT_MET90;   //!
   TBranch        *b_HLT_MuHT600;   //!
   TBranch        *b_HLT_MET250;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_trackingFailureFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_met_pt;   //!
   TBranch        *b_met_eta;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_met_mass;   //!
   TBranch        *b_met_sumEt;   //!
   TBranch        *b_metNoHF_pt;   //!
   TBranch        *b_metNoHF_eta;   //!
   TBranch        *b_metNoHF_phi;   //!
   TBranch        *b_metNoHF_mass;   //!
   TBranch        *b_metNoHF_sumEt;   //!
   TBranch        *b_ngenPartAll;   //!
   TBranch        *b_genPartAll_motherId;   //!
   TBranch        *b_genPartAll_grandmotherId;   //!
   TBranch        *b_genPartAll_charge;   //!
   TBranch        *b_genPartAll_status;   //!
   TBranch        *b_genPartAll_pdgId;   //!
   TBranch        *b_genPartAll_pt;   //!
   TBranch        *b_genPartAll_eta;   //!
   TBranch        *b_genPartAll_phi;   //!
   TBranch        *b_genPartAll_mass;   //!
   TBranch        *b_genPartAll_nDaughters;   //!
   TBranch        *b_genPartAll_nMothers;   //!
   TBranch        *b_genPartAll_motherIndex1;   //!
   TBranch        *b_genPartAll_daughterIndex1;   //!
   TBranch        *b_genPartAll_motherIndex2;   //!
   TBranch        *b_genPartAll_daughterIndex2;   //!
   TBranch        *b_nJet;   //!
   TBranch        *b_Jet_area;   //!
   TBranch        *b_Jet_qgl;   //!
   TBranch        *b_Jet_ptd;   //!
   TBranch        *b_Jet_axis2;   //!
   TBranch        *b_Jet_mult;   //!
   TBranch        *b_Jet_partonId;   //!
   TBranch        *b_Jet_partonMotherId;   //!
   TBranch        *b_Jet_nLeptons;   //!
   TBranch        *b_Jet_id;   //!
   TBranch        *b_Jet_puId;   //!
   TBranch        *b_Jet_btagCSV;   //!
   TBranch        *b_Jet_btagCMVA;   //!
   TBranch        *b_Jet_rawPt;   //!
   TBranch        *b_Jet_mcPt;   //!
   TBranch        *b_Jet_mcFlavour;   //!
   TBranch        *b_Jet_mcMatchId;   //!
   TBranch        *b_Jet_corr_JECUp;   //!
   TBranch        *b_Jet_corr_JECDown;   //!
   TBranch        *b_Jet_corr;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_mcMatchFlav;   //!
   TBranch        *b_Jet_chHEF;   //!
   TBranch        *b_Jet_neHEF;   //!
   TBranch        *b_Jet_phEF;   //!
   TBranch        *b_Jet_eEF;   //!
   TBranch        *b_Jet_muEF;   //!
   TBranch        *b_Jet_HFHEF;   //!
   TBranch        *b_Jet_HFEMEF;   //!
   TBranch        *b_Jet_chHMult;   //!
   TBranch        *b_Jet_neHMult;   //!
   TBranch        *b_Jet_phMult;   //!
   TBranch        *b_Jet_eMult;   //!
   TBranch        *b_Jet_muMult;   //!
   TBranch        *b_Jet_HFHMult;   //!
   TBranch        *b_Jet_HFEMMult;   //!
   TBranch        *b_nLepGood;   //!
   TBranch        *b_LepGood_charge;   //!
   TBranch        *b_LepGood_tightId;   //!
   TBranch        *b_LepGood_eleCutIdCSA14_25ns_v1;   //!
   TBranch        *b_LepGood_eleCutIdCSA14_50ns_v1;   //!
   TBranch        *b_LepGood_dxy;   //!
   TBranch        *b_LepGood_dz;   //!
   TBranch        *b_LepGood_edxy;   //!
   TBranch        *b_LepGood_edz;   //!
   TBranch        *b_LepGood_ip3d;   //!
   TBranch        *b_LepGood_sip3d;   //!
   TBranch        *b_LepGood_convVeto;   //!
   TBranch        *b_LepGood_lostHits;   //!
   TBranch        *b_LepGood_relIso03;   //!
   TBranch        *b_LepGood_relIso04;   //!
   TBranch        *b_LepGood_miniRelIso;   //!
   TBranch        *b_LepGood_tightCharge;   //!
   TBranch        *b_LepGood_mcMatchId;   //!
   TBranch        *b_LepGood_mcMatchAny;   //!
   TBranch        *b_LepGood_mcMatchTau;   //!
   TBranch        *b_LepGood_mcPt;   //!
   TBranch        *b_LepGood_mediumMuonId;   //!
   TBranch        *b_LepGood_pdgId;   //!
   TBranch        *b_LepGood_pt;   //!
   TBranch        *b_LepGood_eta;   //!
   TBranch        *b_LepGood_phi;   //!
   TBranch        *b_LepGood_mass;   //!
   TBranch        *b_LepGood_mvaIdPhys14;   //!
   TBranch        *b_LepGood_mvaTTH;   //!
   TBranch        *b_LepGood_mvaSusy;   //!
   TBranch        *b_LepGood_jetPtRatio;   //!
   TBranch        *b_LepGood_jetPtRel;   //!
   TBranch        *b_LepGood_jetBTagCSV;   //!
   TBranch        *b_LepGood_jetBTagCMVA;   //!
   TBranch        *b_LepGood_jetDR;   //!
   TBranch        *b_nTauGood;   //!
   TBranch        *b_TauGood_charge;   //!
   TBranch        *b_TauGood_decayMode;   //!
   TBranch        *b_TauGood_idDecayMode;   //!
   TBranch        *b_TauGood_idDecayModeNewDMs;   //!
   TBranch        *b_TauGood_dxy;   //!
   TBranch        *b_TauGood_dz;   //!
   TBranch        *b_TauGood_idMVA;   //!
   TBranch        *b_TauGood_idMVANewDM;   //!
   TBranch        *b_TauGood_idCI3hit;   //!
   TBranch        *b_TauGood_idAntiMu;   //!
   TBranch        *b_TauGood_idAntiE;   //!
   TBranch        *b_TauGood_isoCI3hit;   //!
   TBranch        *b_TauGood_mcMatchId;   //!
   TBranch        *b_TauGood_pdgId;   //!
   TBranch        *b_TauGood_pt;   //!
   TBranch        *b_TauGood_eta;   //!
   TBranch        *b_TauGood_phi;   //!
   TBranch        *b_TauGood_mass;   //!
   TBranch        *b_weight;   //!

   DiLepTree_V1(TTree *tree=0);
   virtual ~DiLepTree_V1();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef DiLepTree_V1_cxx
DiLepTree_V1::DiLepTree_V1(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root://eoscms//store/cmst3/group/susy/schoef/postProcessed_Spring15/dilep/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1_0.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("root://eoscms//store/cmst3/group/susy/schoef/postProcessed_Spring15/dilep/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1/TTJets_TuneCUETP8M1_13TeV-amcatnloFXFX-pythia8_RunIISpring15DR74-Asympt25ns_MCRUN2_74_V9-v1_0.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

DiLepTree_V1::~DiLepTree_V1()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t DiLepTree_V1::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t DiLepTree_V1::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void DiLepTree_V1::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("evt", &evt, &b_evt);
   fChain->SetBranchAddress("isData", &isData, &b_isData);
   fChain->SetBranchAddress("xsec", &xsec, &b_xsec);
   fChain->SetBranchAddress("puWeight", &puWeight, &b_puWeight);
   fChain->SetBranchAddress("nTrueInt", &nTrueInt, &b_nTrueInt);
   fChain->SetBranchAddress("genWeight", &genWeight, &b_genWeight);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("nVert", &nVert, &b_nVert);
   fChain->SetBranchAddress("met_genPt", &met_genPt, &b_met_genPt);
   fChain->SetBranchAddress("met_genPhi", &met_genPhi, &b_met_genPhi);
   fChain->SetBranchAddress("met_rawPt", &met_rawPt, &b_met_rawPt);
   fChain->SetBranchAddress("met_rawPhi", &met_rawPhi, &b_met_rawPhi);
   fChain->SetBranchAddress("met_rawSumEt", &met_rawSumEt, &b_met_rawSumEt);
   fChain->SetBranchAddress("metNoHF_rawPt", &metNoHF_rawPt, &b_metNoHF_rawPt);
   fChain->SetBranchAddress("metNoHF_rawPhi", &metNoHF_rawPhi, &b_metNoHF_rawPhi);
   fChain->SetBranchAddress("metNoHF_rawSumetNoHF", &metNoHF_rawSumetNoHF, &b_metNoHF_rawSumetNoHF);
   fChain->SetBranchAddress("met_caloPt", &met_caloPt, &b_met_caloPt);
   fChain->SetBranchAddress("met_caloPhi", &met_caloPhi, &b_met_caloPhi);
   fChain->SetBranchAddress("met_caloSumEt", &met_caloSumEt, &b_met_caloSumEt);
   fChain->SetBranchAddress("Flag_HBHENoiseFilterMinZeroPatched", &Flag_HBHENoiseFilterMinZeroPatched, &b_Flag_HBHENoiseFilterMinZeroPatched);
   fChain->SetBranchAddress("HLT_HT900", &HLT_HT900, &b_HLT_HT900);
   fChain->SetBranchAddress("HLT_MuHT400B", &HLT_MuHT400B, &b_HLT_MuHT400B);
   fChain->SetBranchAddress("HLT_mumuNoniso_50ns", &HLT_mumuNoniso_50ns, &b_HLT_mumuNoniso_50ns);
   fChain->SetBranchAddress("HLT_ElHT400B", &HLT_ElHT400B, &b_HLT_ElHT400B);
   fChain->SetBranchAddress("HLT_mumuSS", &HLT_mumuSS, &b_HLT_mumuSS);
   fChain->SetBranchAddress("HLT_Had", &HLT_Had, &b_HLT_Had);
   fChain->SetBranchAddress("HLT_DiPFJet260", &HLT_DiPFJet260, &b_HLT_DiPFJet260);
   fChain->SetBranchAddress("HLT_SingleMu", &HLT_SingleMu, &b_HLT_SingleMu);
   fChain->SetBranchAddress("HLT_DiPFJet200", &HLT_DiPFJet200, &b_HLT_DiPFJet200);
   fChain->SetBranchAddress("HLT_PhysRates", &HLT_PhysRates, &b_HLT_PhysRates);
   fChain->SetBranchAddress("HLT_EleHT400MET70", &HLT_EleHT400MET70, &b_HLT_EleHT400MET70);
   fChain->SetBranchAddress("HLT_MET120", &HLT_MET120, &b_HLT_MET120);
   fChain->SetBranchAddress("HLT_ElHad", &HLT_ElHad, &b_HLT_ElHad);
   fChain->SetBranchAddress("HLT_DiPFJet140", &HLT_DiPFJet140, &b_HLT_DiPFJet140);
   fChain->SetBranchAddress("HLT_MuHT350MET70", &HLT_MuHT350MET70, &b_HLT_MuHT350MET70);
   fChain->SetBranchAddress("HLT_ElNoIso", &HLT_ElNoIso, &b_HLT_ElNoIso);
   fChain->SetBranchAddress("HLT_MET90nc", &HLT_MET90nc, &b_HLT_MET90nc);
   fChain->SetBranchAddress("HLT_mumuIso", &HLT_mumuIso, &b_HLT_mumuIso);
   fChain->SetBranchAddress("HLT_EleHT200", &HLT_EleHT200, &b_HLT_EleHT200);
   fChain->SetBranchAddress("HLT_Mu50NoIso", &HLT_Mu50NoIso, &b_HLT_Mu50NoIso);
   fChain->SetBranchAddress("HLT_DiPFJet500", &HLT_DiPFJet500, &b_HLT_DiPFJet500);
   fChain->SetBranchAddress("HLT_MuHad", &HLT_MuHad, &b_HLT_MuHad);
   fChain->SetBranchAddress("HLT_mumuHT", &HLT_mumuHT, &b_HLT_mumuHT);
   fChain->SetBranchAddress("HLT_MuMET120", &HLT_MuMET120, &b_HLT_MuMET120);
   fChain->SetBranchAddress("HLT_Mu45NoIso", &HLT_Mu45NoIso, &b_HLT_Mu45NoIso);
   fChain->SetBranchAddress("HLT_ee_DZ", &HLT_ee_DZ, &b_HLT_ee_DZ);
   fChain->SetBranchAddress("HLT_HT350", &HLT_HT350, &b_HLT_HT350);
   fChain->SetBranchAddress("HLT_DiPFJet400", &HLT_DiPFJet400, &b_HLT_DiPFJet400);
   fChain->SetBranchAddress("HLT_HT600", &HLT_HT600, &b_HLT_HT600);
   fChain->SetBranchAddress("HLT_MET120nc", &HLT_MET120nc, &b_HLT_MET120nc);
   fChain->SetBranchAddress("HLT_mumuNoiso", &HLT_mumuNoiso, &b_HLT_mumuNoiso);
   fChain->SetBranchAddress("HLT_DiPFJet320", &HLT_DiPFJet320, &b_HLT_DiPFJet320);
   fChain->SetBranchAddress("HLT_HTMET", &HLT_HTMET, &b_HLT_HTMET);
   fChain->SetBranchAddress("HLT_MuHT400MET70", &HLT_MuHT400MET70, &b_HLT_MuHT400MET70);
   fChain->SetBranchAddress("HLT_SingleEl", &HLT_SingleEl, &b_HLT_SingleEl);
   fChain->SetBranchAddress("HLT_MET170", &HLT_MET170, &b_HLT_MET170);
   fChain->SetBranchAddress("HLT_MET170_pres", &HLT_MET170_pres, &b_HLT_MET170_pres);
   fChain->SetBranchAddress("HLT_EleHT350MET70", &HLT_EleHT350MET70, &b_HLT_EleHT350MET70);
   fChain->SetBranchAddress("HLT_EleHT600", &HLT_EleHT600, &b_HLT_EleHT600);
   fChain->SetBranchAddress("HLT_MET90", &HLT_MET90, &b_HLT_MET90);
   fChain->SetBranchAddress("HLT_MuHT600", &HLT_MuHT600, &b_HLT_MuHT600);
   fChain->SetBranchAddress("HLT_MET250", &HLT_MET250, &b_HLT_MET250);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_trackingFailureFilter", &Flag_trackingFailureFilter, &b_Flag_trackingFailureFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("met_pt", &met_pt, &b_met_pt);
   fChain->SetBranchAddress("met_eta", &met_eta, &b_met_eta);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("met_mass", &met_mass, &b_met_mass);
   fChain->SetBranchAddress("met_sumEt", &met_sumEt, &b_met_sumEt);
   fChain->SetBranchAddress("metNoHF_pt", &metNoHF_pt, &b_metNoHF_pt);
   fChain->SetBranchAddress("metNoHF_eta", &metNoHF_eta, &b_metNoHF_eta);
   fChain->SetBranchAddress("metNoHF_phi", &metNoHF_phi, &b_metNoHF_phi);
   fChain->SetBranchAddress("metNoHF_mass", &metNoHF_mass, &b_metNoHF_mass);
   fChain->SetBranchAddress("metNoHF_sumEt", &metNoHF_sumEt, &b_metNoHF_sumEt);
   fChain->SetBranchAddress("ngenPartAll", &ngenPartAll, &b_ngenPartAll);
   fChain->SetBranchAddress("genPartAll_motherId", genPartAll_motherId, &b_genPartAll_motherId);
   fChain->SetBranchAddress("genPartAll_grandmotherId", genPartAll_grandmotherId, &b_genPartAll_grandmotherId);
   fChain->SetBranchAddress("genPartAll_charge", genPartAll_charge, &b_genPartAll_charge);
   fChain->SetBranchAddress("genPartAll_status", genPartAll_status, &b_genPartAll_status);
   fChain->SetBranchAddress("genPartAll_pdgId", genPartAll_pdgId, &b_genPartAll_pdgId);
   fChain->SetBranchAddress("genPartAll_pt", genPartAll_pt, &b_genPartAll_pt);
   fChain->SetBranchAddress("genPartAll_eta", genPartAll_eta, &b_genPartAll_eta);
   fChain->SetBranchAddress("genPartAll_phi", genPartAll_phi, &b_genPartAll_phi);
   fChain->SetBranchAddress("genPartAll_mass", genPartAll_mass, &b_genPartAll_mass);
   fChain->SetBranchAddress("genPartAll_nDaughters", genPartAll_nDaughters, &b_genPartAll_nDaughters);
   fChain->SetBranchAddress("genPartAll_nMothers", genPartAll_nMothers, &b_genPartAll_nMothers);
   fChain->SetBranchAddress("genPartAll_motherIndex1", genPartAll_motherIndex1, &b_genPartAll_motherIndex1);
   fChain->SetBranchAddress("genPartAll_daughterIndex1", genPartAll_daughterIndex1, &b_genPartAll_daughterIndex1);
   fChain->SetBranchAddress("genPartAll_motherIndex2", genPartAll_motherIndex2, &b_genPartAll_motherIndex2);
   fChain->SetBranchAddress("genPartAll_daughterIndex2", genPartAll_daughterIndex2, &b_genPartAll_daughterIndex2);
   fChain->SetBranchAddress("nJet", &nJet, &b_nJet);
   fChain->SetBranchAddress("Jet_area", Jet_area, &b_Jet_area);
   fChain->SetBranchAddress("Jet_qgl", Jet_qgl, &b_Jet_qgl);
   fChain->SetBranchAddress("Jet_ptd", Jet_ptd, &b_Jet_ptd);
   fChain->SetBranchAddress("Jet_axis2", Jet_axis2, &b_Jet_axis2);
   fChain->SetBranchAddress("Jet_mult", Jet_mult, &b_Jet_mult);
   fChain->SetBranchAddress("Jet_partonId", Jet_partonId, &b_Jet_partonId);
   fChain->SetBranchAddress("Jet_partonMotherId", Jet_partonMotherId, &b_Jet_partonMotherId);
   fChain->SetBranchAddress("Jet_nLeptons", Jet_nLeptons, &b_Jet_nLeptons);
   fChain->SetBranchAddress("Jet_id", Jet_id, &b_Jet_id);
   fChain->SetBranchAddress("Jet_puId", Jet_puId, &b_Jet_puId);
   fChain->SetBranchAddress("Jet_btagCSV", Jet_btagCSV, &b_Jet_btagCSV);
   fChain->SetBranchAddress("Jet_btagCMVA", Jet_btagCMVA, &b_Jet_btagCMVA);
   fChain->SetBranchAddress("Jet_rawPt", Jet_rawPt, &b_Jet_rawPt);
   fChain->SetBranchAddress("Jet_mcPt", Jet_mcPt, &b_Jet_mcPt);
   fChain->SetBranchAddress("Jet_mcFlavour", Jet_mcFlavour, &b_Jet_mcFlavour);
   fChain->SetBranchAddress("Jet_mcMatchId", Jet_mcMatchId, &b_Jet_mcMatchId);
   fChain->SetBranchAddress("Jet_corr_JECUp", Jet_corr_JECUp, &b_Jet_corr_JECUp);
   fChain->SetBranchAddress("Jet_corr_JECDown", Jet_corr_JECDown, &b_Jet_corr_JECDown);
   fChain->SetBranchAddress("Jet_corr", Jet_corr, &b_Jet_corr);
   fChain->SetBranchAddress("Jet_pt", Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_mass", Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_mcMatchFlav", Jet_mcMatchFlav, &b_Jet_mcMatchFlav);
   fChain->SetBranchAddress("Jet_chHEF", Jet_chHEF, &b_Jet_chHEF);
   fChain->SetBranchAddress("Jet_neHEF", Jet_neHEF, &b_Jet_neHEF);
   fChain->SetBranchAddress("Jet_phEF", Jet_phEF, &b_Jet_phEF);
   fChain->SetBranchAddress("Jet_eEF", Jet_eEF, &b_Jet_eEF);
   fChain->SetBranchAddress("Jet_muEF", Jet_muEF, &b_Jet_muEF);
   fChain->SetBranchAddress("Jet_HFHEF", Jet_HFHEF, &b_Jet_HFHEF);
   fChain->SetBranchAddress("Jet_HFEMEF", Jet_HFEMEF, &b_Jet_HFEMEF);
   fChain->SetBranchAddress("Jet_chHMult", Jet_chHMult, &b_Jet_chHMult);
   fChain->SetBranchAddress("Jet_neHMult", Jet_neHMult, &b_Jet_neHMult);
   fChain->SetBranchAddress("Jet_phMult", Jet_phMult, &b_Jet_phMult);
   fChain->SetBranchAddress("Jet_eMult", Jet_eMult, &b_Jet_eMult);
   fChain->SetBranchAddress("Jet_muMult", Jet_muMult, &b_Jet_muMult);
   fChain->SetBranchAddress("Jet_HFHMult", Jet_HFHMult, &b_Jet_HFHMult);
   fChain->SetBranchAddress("Jet_HFEMMult", Jet_HFEMMult, &b_Jet_HFEMMult);
   fChain->SetBranchAddress("nLepGood", &nLepGood, &b_nLepGood);
   fChain->SetBranchAddress("LepGood_charge", LepGood_charge, &b_LepGood_charge);
   fChain->SetBranchAddress("LepGood_tightId", LepGood_tightId, &b_LepGood_tightId);
   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_25ns_v1", LepGood_eleCutIdCSA14_25ns_v1, &b_LepGood_eleCutIdCSA14_25ns_v1);
   fChain->SetBranchAddress("LepGood_eleCutIdCSA14_50ns_v1", LepGood_eleCutIdCSA14_50ns_v1, &b_LepGood_eleCutIdCSA14_50ns_v1);
   fChain->SetBranchAddress("LepGood_dxy", LepGood_dxy, &b_LepGood_dxy);
   fChain->SetBranchAddress("LepGood_dz", LepGood_dz, &b_LepGood_dz);
   fChain->SetBranchAddress("LepGood_edxy", LepGood_edxy, &b_LepGood_edxy);
   fChain->SetBranchAddress("LepGood_edz", LepGood_edz, &b_LepGood_edz);
   fChain->SetBranchAddress("LepGood_ip3d", LepGood_ip3d, &b_LepGood_ip3d);
   fChain->SetBranchAddress("LepGood_sip3d", LepGood_sip3d, &b_LepGood_sip3d);
   fChain->SetBranchAddress("LepGood_convVeto", LepGood_convVeto, &b_LepGood_convVeto);
   fChain->SetBranchAddress("LepGood_lostHits", LepGood_lostHits, &b_LepGood_lostHits);
   fChain->SetBranchAddress("LepGood_relIso03", LepGood_relIso03, &b_LepGood_relIso03);
   fChain->SetBranchAddress("LepGood_relIso04", LepGood_relIso04, &b_LepGood_relIso04);
   fChain->SetBranchAddress("LepGood_miniRelIso", LepGood_miniRelIso, &b_LepGood_miniRelIso);
   fChain->SetBranchAddress("LepGood_tightCharge", LepGood_tightCharge, &b_LepGood_tightCharge);
   fChain->SetBranchAddress("LepGood_mcMatchId", LepGood_mcMatchId, &b_LepGood_mcMatchId);
   fChain->SetBranchAddress("LepGood_mcMatchAny", LepGood_mcMatchAny, &b_LepGood_mcMatchAny);
   fChain->SetBranchAddress("LepGood_mcMatchTau", LepGood_mcMatchTau, &b_LepGood_mcMatchTau);
   fChain->SetBranchAddress("LepGood_mcPt", LepGood_mcPt, &b_LepGood_mcPt);
   fChain->SetBranchAddress("LepGood_mediumMuonId", LepGood_mediumMuonId, &b_LepGood_mediumMuonId);
   fChain->SetBranchAddress("LepGood_pdgId", LepGood_pdgId, &b_LepGood_pdgId);
   fChain->SetBranchAddress("LepGood_pt", LepGood_pt, &b_LepGood_pt);
   fChain->SetBranchAddress("LepGood_eta", LepGood_eta, &b_LepGood_eta);
   fChain->SetBranchAddress("LepGood_phi", LepGood_phi, &b_LepGood_phi);
   fChain->SetBranchAddress("LepGood_mass", LepGood_mass, &b_LepGood_mass);
   fChain->SetBranchAddress("LepGood_mvaIdPhys14", LepGood_mvaIdPhys14, &b_LepGood_mvaIdPhys14);
   fChain->SetBranchAddress("LepGood_mvaTTH", LepGood_mvaTTH, &b_LepGood_mvaTTH);
   fChain->SetBranchAddress("LepGood_mvaSusy", LepGood_mvaSusy, &b_LepGood_mvaSusy);
   fChain->SetBranchAddress("LepGood_jetPtRatio", LepGood_jetPtRatio, &b_LepGood_jetPtRatio);
   fChain->SetBranchAddress("LepGood_jetPtRel", LepGood_jetPtRel, &b_LepGood_jetPtRel);
   fChain->SetBranchAddress("LepGood_jetBTagCSV", LepGood_jetBTagCSV, &b_LepGood_jetBTagCSV);
   fChain->SetBranchAddress("LepGood_jetBTagCMVA", LepGood_jetBTagCMVA, &b_LepGood_jetBTagCMVA);
   fChain->SetBranchAddress("LepGood_jetDR", LepGood_jetDR, &b_LepGood_jetDR);
   fChain->SetBranchAddress("nTauGood", &nTauGood, &b_nTauGood);
   fChain->SetBranchAddress("TauGood_charge", TauGood_charge, &b_TauGood_charge);
   fChain->SetBranchAddress("TauGood_decayMode", TauGood_decayMode, &b_TauGood_decayMode);
   fChain->SetBranchAddress("TauGood_idDecayMode", TauGood_idDecayMode, &b_TauGood_idDecayMode);
   fChain->SetBranchAddress("TauGood_idDecayModeNewDMs", TauGood_idDecayModeNewDMs, &b_TauGood_idDecayModeNewDMs);
   fChain->SetBranchAddress("TauGood_dxy", TauGood_dxy, &b_TauGood_dxy);
   fChain->SetBranchAddress("TauGood_dz", TauGood_dz, &b_TauGood_dz);
   fChain->SetBranchAddress("TauGood_idMVA", TauGood_idMVA, &b_TauGood_idMVA);
   fChain->SetBranchAddress("TauGood_idMVANewDM", TauGood_idMVANewDM, &b_TauGood_idMVANewDM);
   fChain->SetBranchAddress("TauGood_idCI3hit", TauGood_idCI3hit, &b_TauGood_idCI3hit);
   fChain->SetBranchAddress("TauGood_idAntiMu", TauGood_idAntiMu, &b_TauGood_idAntiMu);
   fChain->SetBranchAddress("TauGood_idAntiE", TauGood_idAntiE, &b_TauGood_idAntiE);
   fChain->SetBranchAddress("TauGood_isoCI3hit", TauGood_isoCI3hit, &b_TauGood_isoCI3hit);
   fChain->SetBranchAddress("TauGood_mcMatchId", TauGood_mcMatchId, &b_TauGood_mcMatchId);
   fChain->SetBranchAddress("TauGood_pdgId", TauGood_pdgId, &b_TauGood_pdgId);
   fChain->SetBranchAddress("TauGood_pt", TauGood_pt, &b_TauGood_pt);
   fChain->SetBranchAddress("TauGood_eta", TauGood_eta, &b_TauGood_eta);
   fChain->SetBranchAddress("TauGood_phi", TauGood_phi, &b_TauGood_phi);
   fChain->SetBranchAddress("TauGood_mass", TauGood_mass, &b_TauGood_mass);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   Notify();
}

Bool_t DiLepTree_V1::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void DiLepTree_V1::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t DiLepTree_V1::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef DiLepTree_V1_cxx
