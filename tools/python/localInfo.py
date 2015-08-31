import os
if os.environ['USER'] in ['sigamani']:
  plotDir = "~/www/php-plots/2LeptonStops13TeV/"
  dataDir = "~/eos/cms//store/cmst3/group/susy/schoef/postProcessed_Spring15/" #needs EOS mount on lxplus at ~/eos
#if os.environ['USER'] in ['didar']:
#  plotDir = "."
#  dataDir = "~/eos/cms/store/cmst3/group/susy/schoef/postProcessed_Phys14V3_diLep" #needs EOS mount on lxplus at ~/eos 
#if os.environ['USER'] in ['schoef', 'rschoefbeck', 'schoefbeck']:
#  plotDir = "/afs/hephy.at/user/r/rschoefbeck/www/png2L/"
#  dataDir = "/data/rschoefbeck/cmgTuples/postProcessed_Phys14V3_diLep/diLep/" 
