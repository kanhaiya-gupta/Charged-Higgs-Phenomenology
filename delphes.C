#define delphes_cxx
#include "delphes.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include "TLorentzVector.h"
#include "TChain.h"
#include <vector>
using std::vector;


void delphes::Loop()
{
//   In a ROOT session, you can do:
//      root> .L delphes.C
//      root> delphes t
//
//
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

   //   nentries = 10000;                         // Number of events to test the code

   Int_t count_init = 0;
   Int_t count_lep = 0;
   Int_t count_met = 0;
   Int_t count_trig = 0;
   Int_t count_bjet = 0;
   Int_t count_mll = 0;
   Int_t count_mbb = 0;
   Int_t count_mllbb = 0;

  
// creating the root file as output

  TFile outf("sig_tbh.root","RECREATE");
  std::cout << "creating output ..." <<std::endl;

// creating a tree named delphes
 
  TTree Delphes("Delphes","a simple tree for analysis");

//  Int_t elec_n,  muon_n, jet_n;
 // Float_t elec_pt;

  Delphes.Branch("elec_n", &elec_n , "elec_n/I");
  Delphes.Branch("muon_n", &muon_n , "muon_n/I");
  Delphes.Branch("jet_n", &jet_n , "jet_n/I");
//  Delphes.Branch("elec_pt", &elec_pt, "elec_pt/F");


   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

     // Begin the code here

     
    for(Int_t i=0; i<elec_n; i++)
    {
       

       // temporary
        TLorentzVector leptemp;
        leptemp.SetPtEtaPhiE(elec_pt->at(i)/1000., elec_eta->at(i), elec_phi->at(i), elec_E->at(i)/1000.);  
  }
 
    
    // End the code here

   Delphes.Fill();

   }

   // Print the total number of countd events here
   //  cout << "Analyzed a total of               : " << nEvent << " events" << endl;
    Delphes.Write("",TObject::kWriteDelete);

}


delphes::delphes(TTree *tree) : fChain(0) 
 {
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  if (tree == 0) {
 
      TChain* tchain = new TChain("delphes");
          tchain->Add("/home/kanhaiya/Charged_higgs_analysis/signal.root");
          tree = tchain;
   }
   Init(tree);
   Loop();
}


