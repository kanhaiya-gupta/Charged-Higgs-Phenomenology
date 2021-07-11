//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Jul  7 11:06:44 2021 by ROOT version 6.16/00
// from TTree delphes/
// found on file: NNout_mc16a.412063.FS.nominal_Loose.root
//////////////////////////////////////////////////////////

#ifndef NN_analysis_h
#define NN_analysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class NN_analysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         NNout;
   Double_t        MC_weight;
   Float_t         HT;
   Float_t         bjet1_E;
   Float_t         bjet1_eta;
   Float_t         bjet1_pt;
   Float_t         bjet2_E;
   Float_t         bjet2_eta;
   Float_t         bjet2_pt;
   Float_t         bjet3_E;
   Float_t         bjet3_eta;
   Float_t         bjet3_pt;
   Float_t         elec_E;
   Float_t         elec_eta;
   Float_t         elec_pt;
   Float_t         eta_bjj;
   Float_t         eta_jj;
   Float_t         jet1_E;
   Float_t         jet1_eta;
   Float_t         jet1_pt;
   Float_t         jet2_E;
   Float_t         jet2_eta;
   Float_t         jet2_pt;
   Float_t         jet3_E;
   Float_t         jet3_eta;
   Float_t         jet3_pt;
   Float_t         jet4_E;
   Float_t         jet4_eta;
   Float_t         jet4_pt;
   Float_t         jet_n;
   Float_t         m_bjj;
   Float_t         m_jj;
   Float_t         met;
   Float_t         muon_E;
   Float_t         muon_eta;
   Float_t         muon_pt;
   Float_t         pt_bjj;
   Float_t         pt_jj;
   Float_t         weight;

   // List of branches
   TBranch        *b_NNout;   //!
   TBranch        *b_MC_weight;   //!
   TBranch        *b_HT;   //!
   TBranch        *b_bjet1_E;   //!
   TBranch        *b_bjet1_eta;   //!
   TBranch        *b_bjet1_pt;   //!
   TBranch        *b_bjet2_E;   //!
   TBranch        *b_bjet2_eta;   //!
   TBranch        *b_bjet2_pt;   //!
   TBranch        *b_bjet3_E;   //!
   TBranch        *b_bjet3_eta;   //!
   TBranch        *b_bjet3_pt;   //!
   TBranch        *b_elec_E;   //!
   TBranch        *b_elec_eta;   //!
   TBranch        *b_elec_pt;   //!
   TBranch        *b_eta_bjj;   //!
   TBranch        *b_eta_jj;   //!
   TBranch        *b_jet1_E;   //!
   TBranch        *b_jet1_eta;   //!
   TBranch        *b_jet1_pt;   //!
   TBranch        *b_jet2_E;   //!
   TBranch        *b_jet2_eta;   //!
   TBranch        *b_jet2_pt;   //!
   TBranch        *b_jet3_E;   //!
   TBranch        *b_jet3_eta;   //!
   TBranch        *b_jet3_pt;   //!
   TBranch        *b_jet4_E;   //!
   TBranch        *b_jet4_eta;   //!
   TBranch        *b_jet4_pt;   //!
   TBranch        *b_jet_n;   //!
   TBranch        *b_m_bjj;   //!
   TBranch        *b_m_jj;   //!
   TBranch        *b_met;   //!
   TBranch        *b_muon_E;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_pt_bjj;   //!
   TBranch        *b_pt_jj;   //!
   TBranch        *b_weight;   //!

   NN_analysis(TTree *tree=0);
   virtual ~NN_analysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NN_analysis_cxx


NN_analysis::~NN_analysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NN_analysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NN_analysis::LoadTree(Long64_t entry)
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

void NN_analysis::Init(TTree *tree)
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

   fChain->SetBranchAddress("NNout", &NNout, &b_NNout);
   fChain->SetBranchAddress("MC_weight", &MC_weight, &b_MC_weight);
   fChain->SetBranchAddress("HT", &HT, &b_HT);
   fChain->SetBranchAddress("bjet1_E", &bjet1_E, &b_bjet1_E);
   fChain->SetBranchAddress("bjet1_eta", &bjet1_eta, &b_bjet1_eta);
   fChain->SetBranchAddress("bjet1_pt", &bjet1_pt, &b_bjet1_pt);
   fChain->SetBranchAddress("bjet2_E", &bjet2_E, &b_bjet2_E);
   fChain->SetBranchAddress("bjet2_eta", &bjet2_eta, &b_bjet2_eta);
   fChain->SetBranchAddress("bjet2_pt", &bjet2_pt, &b_bjet2_pt);
   fChain->SetBranchAddress("bjet3_E", &bjet3_E, &b_bjet3_E);
   fChain->SetBranchAddress("bjet3_eta", &bjet3_eta, &b_bjet3_eta);
   fChain->SetBranchAddress("bjet3_pt", &bjet3_pt, &b_bjet3_pt);
   fChain->SetBranchAddress("elec_E", &elec_E, &b_elec_E);
   fChain->SetBranchAddress("elec_eta", &elec_eta, &b_elec_eta);
   fChain->SetBranchAddress("elec_pt", &elec_pt, &b_elec_pt);
   fChain->SetBranchAddress("eta_bjj", &eta_bjj, &b_eta_bjj);
   fChain->SetBranchAddress("eta_jj", &eta_jj, &b_eta_jj);
   fChain->SetBranchAddress("jet1_E", &jet1_E, &b_jet1_E);
   fChain->SetBranchAddress("jet1_eta", &jet1_eta, &b_jet1_eta);
   fChain->SetBranchAddress("jet1_pt", &jet1_pt, &b_jet1_pt);
   fChain->SetBranchAddress("jet2_E", &jet2_E, &b_jet2_E);
   fChain->SetBranchAddress("jet2_eta", &jet2_eta, &b_jet2_eta);
   fChain->SetBranchAddress("jet2_pt", &jet2_pt, &b_jet2_pt);
   fChain->SetBranchAddress("jet3_E", &jet3_E, &b_jet3_E);
   fChain->SetBranchAddress("jet3_eta", &jet3_eta, &b_jet3_eta);
   fChain->SetBranchAddress("jet3_pt", &jet3_pt, &b_jet3_pt);
   fChain->SetBranchAddress("jet4_E", &jet4_E, &b_jet4_E);
   fChain->SetBranchAddress("jet4_eta", &jet4_eta, &b_jet4_eta);
   fChain->SetBranchAddress("jet4_pt", &jet4_pt, &b_jet4_pt);
   fChain->SetBranchAddress("jet_n", &jet_n, &b_jet_n);
   fChain->SetBranchAddress("m_bjj", &m_bjj, &b_m_bjj);
   fChain->SetBranchAddress("m_jj", &m_jj, &b_m_jj);
   fChain->SetBranchAddress("met", &met, &b_met);
   fChain->SetBranchAddress("muon_E", &muon_E, &b_muon_E);
   fChain->SetBranchAddress("muon_eta", &muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_pt", &muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("pt_bjj", &pt_bjj, &b_pt_bjj);
   fChain->SetBranchAddress("pt_jj", &pt_jj, &b_pt_jj);
   fChain->SetBranchAddress("weight", &weight, &b_weight);
   Notify();
}

Bool_t NN_analysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NN_analysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t NN_analysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef NN_analysis_cxx
