#! /usr/bin/env python
import os
import sys
import re
import time


pwd = os.environ['PWD']

dataset_name        = [ 
"DYJetsToLL_M-10to50", "DYJetsToLL_M-50_HT-100to200", "DYJetsToLL_M-50_HT-200to400", "DYJetsToLL_M-50_HT-400to600",  "DYJetsToLL_M-50_HT-600toInf",
#"DoubleElec-17Jul2015", "DoubleMuon-17Jul2015"
"DoubleMuon-PromptReco-v1","DoubleElec-PromptReco-v1",
"QCD_Pt-1000toInf","QCD_Pt-120to170","QCD_Pt-15to20","QCD_Pt-170to300","QCD_Pt-20to30","QCD_Pt-300to470","QCD_Pt-30to50","QCD_Pt-470to600","QCD_Pt-50to80","QCD_Pt-600to800","QCD_Pt-800to1000", "QCD_Pt-80to120",
"T2tt_S425N325","T2tt_S500N325","T2tt_S650N325","T2tt_S850N100",
"ST_t","ST_tW","TTJets","WJetsToLNu","WWTo2L2Nu","WZ","ZZ"
]

queue              	= "1nh" 
executable         	= "tmp/main" 

for z in range(len(dataset_name)):

    inputlist = "list/"+dataset_name[z]+".list"
    outputdir = pwd+"/ntuples/"+dataset_name[z] 

    os.system("rm -r "+outputdir)
    os.system("mkdir -p "+outputdir)
    os.system("mkdir -p "+outputdir+"/log/")
    os.system("mkdir -p "+outputdir+"/input/")
    os.system("mkdir -p "+outputdir+"/output/")
    os.system("mkdir -p "+outputdir+"/src/")

    outputname = outputdir+"/src/"+dataset_name[z]+".src"
    outputfile = open(outputname,'w')
    outputfile.write('#!/bin/bash\n')
    outputfile.write('export SCRAM_ARCH=slc6_amd64_gcc472\n')
    outputfile.write('cd '+pwd+'; eval `scramv1 runtime -sh`; \n')
    outputfile.write("./"+executable+" "+inputlist+" "+dataset_name[z]+";")
    outputfile.write("mv "+dataset_name[z]+".root "+outputdir+"/output/output.root")
    outputfile.close
    os.system("echo Submitting "+dataset_name[z]+" to batch queue")
    os.system("bsub -q "+queue+" -o "+outputdir+"/log/"+dataset_name[z]+".log source "+outputname)

