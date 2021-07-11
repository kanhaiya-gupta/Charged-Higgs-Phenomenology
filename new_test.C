#ifdef __CLING__
R__LOAD_LIBRARY(libDelphes)
#include "/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/Delphes/classes/DelphesClasses.h"
#include "/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/Delphes/external/ExRootAnalysis/ExRootTreeReader.h"
#endif

#include <iostream>
#include <TClonesArray.h>
#include <TMath.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include "TLorentzVector.h"
#include <vector>
using std::vector;




//------------------------------------------------------------------------------

void new_test()
{
  gSystem->Load("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/Delphes/libDelphes");

   
  // Create chain of root trees
  TChain chain("Delphes");
 // chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/charged_higgs_signal/Events/run_01/tag_1_delphes_events.root");
  chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/ttbar_jets/Events/run_01/tag_1_delphes_events.root");
 // chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/tjets/Events/run_01/tag_1_delphes_events.root");
 // chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/zz_jets/Events/run_01/tag_1_delphes_events.root");
 // chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/wz_jets/Events/run_01/tag_1_delphes_events.root");
 // chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/ww_jets/Events/run_01/tag_1_delphes_events.root");
//  chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/zjets/Events/run_01/tag_1_delphes_events.root");
//  chain.Add("/home/kanhaiya/Madgraph/MG5_aMC_v2_5_5/wjets/Events/run_01/tag_1_delphes_events.root");

  // Create object of class ExRootTreeReader
  ExRootTreeReader *treeReader = new ExRootTreeReader(&chain);
  Long64_t nEntries = treeReader->GetEntries();

  // Get pointers to branches used in this analysis
  TClonesArray *branchEvent = treeReader->UseBranch("Event");
  TClonesArray *branchParticle = treeReader->UseBranch("Particle");
  TClonesArray *branchMissingET = treeReader->UseBranch("MissingET");
  TClonesArray *branchScalarHT = treeReader->UseBranch("ScalarHT");
  TClonesArray *branchPhoton = treeReader->UseBranch("Photon");
  TClonesArray *branchElectron = treeReader->UseBranch("Electron");
  TClonesArray *branchMuon = treeReader->UseBranch("Muon");
  TClonesArray *branchJet = treeReader->UseBranch("Jet");
  TClonesArray *branchTrack = treeReader->UseBranch("Track");
  TClonesArray *branchTower = treeReader->UseBranch("Tower");
//  TClonesArray *branchVertex = treeReader->UseBranch("Vertex");
//  TClonesArray *branchHectorHit = treeReader->UseBranch("HectorHit");
  

// creating the root file as output

 // TFile outf("new_charged_higgs.root","RECREATE");
  TFile outf("new_ttbar_jets.root","RECREATE");
 // TFile outf("tjets.root","RECREATE");
//  TFile outf("zz_jets.root","RECREATE");
//  TFile outf("wz_jets.root","RECREATE");
//  TFile outf("ww_jets.root","RECREATE");
//  TFile outf("zjets.root","RECREATE");
//  TFile outf("wjets.root","RECREATE");
  std::cout << "creating output ..." <<std::endl;

// creating a tree named delphes
 
  TTree delphes("delphes","a simple tree for analysis");
  


// Initialize the parameters for the branches
  Event *event;
  GenParticle *particle;
  Electron *electron;
  Muon *muon;
  Photon *photon;
  MissingET *MeT;
  ScalarHT *Scalar_HT;
  Jet *jet1, *jet2, *jet3, *jet4;
  TObject *object;


  Int_t events, event_number, elec_n,  muon_n, phot_n, jet_n, bjet_n;
  Float_t weight, met, met_eta, met_phi, HT;
  Double_t random;
  Float_t elec_pt, elec_eta, elec_phi, elec_E, elec_sumpt_charged;
  Float_t muon_pt, muon_eta, muon_phi, muon_E, muon_sumpt_charged;
  Float_t phot_pt, phot_eta, phot_phi, phot_E;
  Float_t jet1_pt, jet1_eta, jet1_phi, jet1_E;
  Float_t jet2_pt, jet2_eta, jet2_phi, jet2_E;
  Float_t jet3_pt, jet3_eta, jet3_phi, jet3_E;
  Float_t jet4_pt, jet4_eta, jet4_phi, jet4_E;
  Float_t bjet1_pt, bjet1_eta, bjet1_phi, bjet1_E;
  Float_t bjet2_pt, bjet2_eta, bjet2_phi, bjet2_E;
  Float_t bjet3_pt, bjet3_eta, bjet3_phi, bjet3_E;
  Float_t ptj1j2, etaj1j2, mj1j2;
  Float_t ptbj1j2, etabj1j2, mbj1j2;
  Float_t ptj1j3, etaj1j3, mj1j3;
  Float_t ptbj1j3, etabj1j3, mbj1j3;
  Float_t ptj2j3, etaj2j3, mj2j3;
  Float_t ptbj2j3, etabj2j3, mbj2j3;
  



// creating the branches

  delphes.Branch("weight", &weight , "weight/F");
  delphes.Branch("events", &events , "events/I");
  delphes.Branch("elec_n", &elec_n , "elec_n/I");
  delphes.Branch("elec_pt", &elec_pt);
  delphes.Branch("elec_eta", &elec_eta);
  delphes.Branch("elec_phi", &elec_phi);
  delphes.Branch("elec_E", &elec_E);
  delphes.Branch("elec_sumpt_charged", &elec_sumpt_charged);
  delphes.Branch("muon_n", &muon_n , "muon_n/I");
  delphes.Branch("muon_pt", &muon_pt);
  delphes.Branch("muon_eta", &muon_eta);
  delphes.Branch("muon_phi", &muon_phi);
  delphes.Branch("muon_E", &muon_E);
  delphes.Branch("muon_sumpt_charged", &muon_sumpt_charged);
  delphes.Branch("phot_n", &phot_n , "phot_n/I");
  delphes.Branch("phot_pt", &phot_pt);
  delphes.Branch("phot_eta", &phot_eta);
  delphes.Branch("phot_phi", &phot_phi);
  delphes.Branch("phot_E", &phot_E);
  delphes.Branch("met", &met , "met/F");
  delphes.Branch("met_phi", &met_phi , "met_phi/F");
  delphes.Branch("met_eta", &met_eta , "met_eta/F");
  delphes.Branch("HT", &HT , "HT/F");
  delphes.Branch("jet_n", &jet_n , "jet_n/I");
  delphes.Branch("jet1_pt", &jet1_pt);
  delphes.Branch("jet1_eta", &jet1_eta);
  delphes.Branch("jet1_phi", &jet1_phi);
  delphes.Branch("jet1_E", &jet1_E);
  delphes.Branch("jet2_pt", &jet2_pt);
  delphes.Branch("jet2_eta", &jet2_eta);
  delphes.Branch("jet2_phi", &jet2_phi);
  delphes.Branch("jet2_E", &jet2_E);
  delphes.Branch("jet3_pt", &jet3_pt);
  delphes.Branch("jet3_eta", &jet3_eta);
  delphes.Branch("jet3_phi", &jet3_phi);
  delphes.Branch("jet3_E", &jet3_E);
  delphes.Branch("jet4_pt", &jet4_pt);
  delphes.Branch("jet4_eta", &jet4_eta);
  delphes.Branch("jet4_phi", &jet4_phi);
  delphes.Branch("jet4_E", &jet4_E);
  delphes.Branch("bjet1_pt", &bjet1_pt);
  delphes.Branch("bjet1_eta", &bjet1_eta);
  delphes.Branch("bjet1_phi", &bjet1_phi);
  delphes.Branch("bjet1_E", &bjet1_E);
  delphes.Branch("bjet2_pt", &bjet2_pt);
  delphes.Branch("bjet2_eta", &bjet2_eta);
  delphes.Branch("bjet2_phi", &bjet2_phi);
  delphes.Branch("bjet2_E", &bjet2_E);
  delphes.Branch("bjet3_pt", &bjet3_pt);
  delphes.Branch("bjet3_eta", &bjet3_eta);
  delphes.Branch("bjet3_phi", &bjet3_phi);
  delphes.Branch("bjet3_E", &bjet3_E);
  delphes.Branch("bjet_n", &bjet_n , "bjet_n/I");
  delphes.Branch("pt_j1j2", &ptj1j2);
  delphes.Branch("eta_j1j2", &etaj1j2);
  delphes.Branch("m_j1j2", &mj1j2);
  delphes.Branch("pt_j1j3", &ptj1j3);
  delphes.Branch("eta_j1j3", &etaj1j3);
  delphes.Branch("m_j1j3", &mj1j3);
  delphes.Branch("pt_j2j3", &ptj2j3);
  delphes.Branch("eta_j2j3", &etaj2j3);
  delphes.Branch("m_j2j3", &mj2j3);
  delphes.Branch("pt_bj1j2", &ptbj1j2);
  delphes.Branch("eta_bj1j2", &etabj1j2);
  delphes.Branch("m_bj1j2", &mbj1j2);
  delphes.Branch("pt_bj1j3", &ptbj1j3);
  delphes.Branch("eta_bj1j3", &etabj1j3);
  delphes.Branch("m_bj1j3", &mbj1j3);
  delphes.Branch("pt_bj2j3", &ptbj2j3);
  delphes.Branch("eta_bj2j3", &etabj2j3);
  delphes.Branch("m_bj2j3", &mbj2j3);
  
  
  
  
  // Loop over all events
  for(Int_t entry = 0; entry < nEntries; ++entry)
  {
    // Load selected branches with data from specified event
    treeReader->ReadEntry(entry);


  events = 0;
   for(Int_t i = 0; i < branchEvent->GetEntries(); ++i)
    {
      
      event = (Event*) branchEvent->At(i);
  
      events++;
      event_number = event->Number;

      // weight generation
   
      weight = gRandom->Gaus(20,8);
      weight = 0.001*weight;
    
   }
    
  
    elec_n = 0;

  // Loop over all electrons in event
    for(Int_t i = 0; i < branchElectron->GetEntries(); ++i)
    {
      electron = (Electron*) branchElectron->At(i);
   
      elec_n++;
      elec_pt = electron->PT;
      elec_eta = electron->Eta;
      elec_phi = electron->Phi;
      elec_E = (electron->P4()).E();
      elec_sumpt_charged = electron->SumPtCharged;
   
   }
    
     muon_n = 0;
  
   for(Int_t i = 0; i < branchMuon->GetEntries(); ++i)
    {
      muon = (Muon*) branchMuon->At(i);
      muon_n++;
      muon_pt = muon->PT;
      muon_eta = muon->Eta;
      muon_phi = muon->Phi;
      muon_E = (muon->P4()).E();
      muon_sumpt_charged = muon->SumPtCharged;

          
    }

 
  
    phot_n = 0;
    
    for(Int_t i = 0; i < branchPhoton->GetEntries(); ++i)
    {
      photon = (Photon*) branchPhoton->At(i);
      phot_n++;
      phot_pt = photon->PT;
      phot_eta = photon->Eta;
      phot_phi = photon->Phi;
      phot_E = photon->E;
      

          
    }

  
 if(branchMissingET->GetEntries() > 0)
    {
      // Take MET
      MeT = (MissingET*) branchMissingET->At(0); 
      met = MeT->MET;
      met_phi = MeT->Phi;
      met_eta = MeT->Eta;
}
      
      for(Int_t i = 0; i < branchScalarHT->GetEntries(); ++i)
    {
      Scalar_HT = (ScalarHT*) branchScalarHT->At(i);
      HT = Scalar_HT->HT;
          
    }


  jet_n = 0;
  bjet_n = 0;

  for(Int_t i = 0; i < branchJet->GetEntriesFast(); ++i)
    {
      // Take the jet
     jet1 = (Jet*) branchJet->At(i); 
     jet2 = (Jet*) branchJet->At(i);
     jet3 = (Jet*) branchJet->At(i);
     jet4 = (Jet*) branchJet->At(i); 
 
      jet_n++;
    // count the b-jets
    if (jet1->BTag!=1){
        jet1_pt = jet1->PT;
        jet1_eta = jet1->Eta;
        jet1_phi = jet1->Phi;
        jet1_E = (jet1->P4()).E();
    }
      if(jet1->BTag==1){
        
        bjet_n++;
        bjet1_pt = jet1->PT;
        bjet1_eta = jet1->Eta;
        bjet1_phi = jet1->Phi;
        bjet1_E = (jet1->P4()).E();
        }

      if (jet2->BTag!=1){
        jet2_pt = jet2->PT;
        jet2_eta = jet2->Eta;
        jet2_phi = jet2->Phi;
        jet2_E = (jet2->P4()).E();
    }
      if(jet2->BTag==1){
        
        bjet_n++;
        bjet2_pt = jet2->PT;
        bjet2_eta = jet2->Eta;
        bjet2_phi = jet2->Phi;
        bjet2_E = (jet2->P4()).E();
        }

        if (jet3->BTag!=1){
        jet3_pt = jet3->PT;
        jet3_eta = jet3->Eta;
        jet3_phi = jet3->Phi;
        jet3_E = (jet3->P4()).E();
    }
      if(jet3->BTag==1){
        
        bjet_n++;
        bjet3_pt = jet3->PT;
        bjet3_eta = jet3->Eta;
        bjet3_phi = jet3->Phi;
        bjet3_E = (jet3->P4()).E();
        }
      
        jet4_pt = jet4->PT;
        jet4_eta = jet4->Eta;
        jet4_phi = jet4->Phi;
        jet4_E = (jet4->P4()).E();
    
  
       if (jet1->BTag!=1 && jet2->BTag!=1){
         ptj1j2 = (((jet1->P4()) + (jet2->P4()))).Pt();
         etaj1j2 = (((jet1->P4()) + (jet2->P4()))).Eta();
         mj1j2 = (((jet1->P4()) + (jet2->P4()))).M();
         
       }

        if (jet1->BTag==1 && jet2->BTag==1){
         ptbj1j2 = (((jet1->P4()) + (jet2->P4()))).Pt();
         etabj1j2 = (((jet1->P4()) + (jet2->P4()))).Eta();
         mbj1j2 = (((jet1->P4()) + (jet2->P4()))).M();
         
       }

        if (jet1->BTag!=1 && jet3->BTag!=1){
         ptj1j3 = (((jet1->P4()) + (jet3->P4()))).Pt();
         etaj1j3 = (((jet1->P4()) + (jet3->P4()))).Eta();
         mj1j3 = (((jet1->P4()) + (jet3->P4()))).M();
         
       }

        if (jet1->BTag==1 && jet3->BTag==1){
         ptbj1j3 = (((jet1->P4()) + (jet2->P4()))).Pt();
         etabj1j3 = (((jet1->P4()) + (jet2->P4()))).Eta();
         mbj1j3 = (((jet1->P4()) + (jet2->P4()))).M();
         
       }

        if (jet2->BTag!=1 && jet3->BTag!=1){
         ptj2j3 = (((jet1->P4()) + (jet3->P4()))).Pt();
         etaj2j3 = (((jet1->P4()) + (jet3->P4()))).Eta();
         mj2j3 = (((jet1->P4()) + (jet3->P4()))).M();
         
       }

        if (jet2->BTag==1 && jet3->BTag==1){
         ptbj2j3 = (((jet2->P4()) + (jet3->P4()))).Pt();
         etabj2j3 = (((jet2->P4()) + (jet3->P4()))).Eta();
         mbj2j3 = (((jet2->P4()) + (jet3->P4()))).M();
         
       }

  }

  


// Fill inside the tree to all the created branches

 delphes.Fill();   
  
  }

delphes.Write("",TObject::kWriteDelete);    // TObject::kWriteDelete   to remove the old snapshot and save the latest copy
//
// save the Tree ; the file will be automatically closed when going out oth function scope

 
}

