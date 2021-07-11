#define NN_analysis_cxx
#include "NN_analysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void NN_analysis::Loop()
{
//   In a ROOT session, you can do:
//      root> .L NN_analysis.C
//      root> NN_analysis t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

  // TFile outf("sig_output.root","RECREATE");  // create a root file
   TFile outf("tt_output.root","RECREATE");  // create a root file
  // TFile outf("tjets_output.root","RECREATE");  // create a root file
  // TFile outf("zz_output.root","RECREATE");  // create a root file
  // TFile outf("wz_output.root","RECREATE");  // create a root file
  // TFile outf("ww_output.root","RECREATE");  // create a root file
  // TFile outf("zjets_output.root","RECREATE");  // create a root file
  // TFile outf("wjets_output.root","RECREATE");  // create a root file
   

   std::cout << "creating output.root" <<std::endl;
   TH1D* h_NN= new TH1D("NN_out","NN Output",12,0.,1.0);
   TH1D* h_HT= new TH1D("HT","HT",100,100.,2000.);

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      // Begin the code here

      h_NN->Fill(NNout);
      h_HT->Fill(HT);

      // End the code here
   }

   outf.Write();
}

NN_analysis::NN_analysis(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      
      TChain* tchain = new TChain("delphes");
         // tchain->Add("NNout_mc16a.412063.FS.nominal_Loose.root");  // charge higgs signal
          tchain->Add("NNout_mc16a.363361.FS.nominal_Loose.root");  // ttbar 
         // tchain->Add("NNout_mc16a.363355.FS.nominal_Loose.root");  // tjets
         // tchain->Add("NNout_mc16a.363356.FS.nominal_Loose.root");  // zz jets
         // tchain->Add("NNout_mc16a.363357.FS.nominal_Loose.root");   // wz jets
         // tchain->Add("NNout_mc16a.363358.FS.nominal_Loose.root");   // ww jets
         // tchain->Add("NNout_mc16a.363359.FS.nominal_Loose.root");   // zjets
         // tchain->Add("NNout_mc16a.363360.FS.nominal_Loose.root");   // wjets
          tree = tchain;
      
      }

    Init(tree);
   Loop();

   }
   

