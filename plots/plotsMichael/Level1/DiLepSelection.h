

//
//  last commit by $Id: DiLepSelection.h,v 1.1 2015/25/08 12:56:26 sigamani Exp $
//
#ifndef DiLepSelection_h
#define DiLepSelection_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TH1F.h"
#include "TH2F.h"
#include <vector>
#include <string>
#include <map>
#include <iostream>

#include "DiLepTree_V1.h" 



class DiLepSelection: public DiLepTree_V1 {
public :

   DiLepSelection(TTree *tree=0);
   virtual ~DiLepSelection() { };

   virtual void     Loop(int nmaxevents, const char* outname);
   void SetFilename(const char* outname);
   bool HLTFilter();

private:

    char file[100];
    unsigned int originalEvents_;
    unsigned int selectedEvents_;

    std::vector<double> PhotEn;
    std::vector<double> ptPhot;
    std::vector<double> ptPhotUp;
    std::vector<double> ptPhotDown;
    std::vector<double> etaPhot;
    std::vector<double> phiPhot;
    std::vector<double> sMinPhot;
    std::vector<double> sMajPhot;
    std::vector<double> sigmaIetaPhot;
    std::vector<double> aveTimePhot;
    std::vector<double> ptJet;
    std::vector<double> ptBJet;
    std::vector<double> ptLep;
    std::vector<double> etaLep;
    std::vector<double> ptJetUp;
    std::vector<double> ptJetDown;
    std::vector<double> phiJet;
    std::vector<double> dxyConv;
    std::vector<double> dzConv;
    std::vector<double> conversionR;
    std::vector<double> etaConv;
    std::vector<double> phiConv;
    std::vector<double> deltaRward;
    std::vector<double> ConvChi2;
    std::vector<double> convMatched;
    std::vector<double> phoMatched;
    std::vector<double> phohovere;
    std::vector<double> chadiso;
    std::vector<double> nhadiso;
    std::vector<double> photiso;
    std::vector<double> rnine;
    std::vector<double> EoverP;
    std::vector<double> EoverP2;
    std::vector<double> EThreeByThree;
    std::vector<double> PDGID;
    std::vector<double> deltaRgen;

    std::vector<double> masseplusemin;
    std::vector<double> deltarelectrons;
};


#endif

