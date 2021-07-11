#define delphes_cxx
#include "delphes.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include<TRandom3.h>
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
   

  // nentries = 10000;                         // Number of events to test the code

   Int_t count_init = 0;
   Int_t count_lep = 0;
   Int_t count_met = 0;
   Int_t count_trig = 0;
   Int_t count_bjet = 0;
   Int_t count_mll = 0;
   Int_t count_mbb = 0;
   Int_t count_mllbb = 0;

   float m_H = 125.;

  
// creating the root file as output

  TFile outf("sig_charged_higgs.root","RECREATE");
  //TFile outf("bkg_ttbar_jets.root","RECREATE");
  //TFile outf("bkg_tjets.root","RECREATE");
  //TFile outf("bkg_zz_jets.root","RECREATE");
 //TFile outf("bkg_wz_jets.root","RECREATE");
  //TFile outf("bkg_ww_jets.root","RECREATE");
  //TFile outf("bkg_zjets.root","RECREATE");
  //TFile outf("bkg_wjets.root","RECREATE");
  std::cout << "creating output ..." <<std::endl;

// creating a tree named delphes
 
  TTree Delphes("Delphes","a simple tree for analysis");

//////////////////////// NOTE    ////////////////////// 
// Donot use the variables that are already there from the previous tree
// We can use incase them in branches if we can to make the same branch as the previous one

// New branches initialization

  Int_t lep_n,  bjets_n;
  Float_t weight, lep_pt, lep_eta, lead_jet_pt, lead_jet_eta, lep_E, lead_bjet_pt, lead_bjet_eta, MT_W, M_jj, pt_jj, eta_jj;
  Float_t jet1_pt, jet1_eta, jet1_E, jet2_pt, jet2_eta, jet2_E, bjet1_pt, bjet1_eta, bjet1_E, bjet2_pt, bjet2_eta, bjet2_E;
  Float_t bjet3_pt, bjet3_eta, bjet3_E; 
  Float_t M_higgs, pt_higgs, eta_higgs, M_tribjets, pt_tribjets, eta_tribjets, MT_bjet_lep, pt_tbjet, eta_tbjet;
  Float_t deltaR_lep_leadjet, deltaR_lep_leadbjet, deltaR_lead_bjet_jet;

// Defining the branches 
  Delphes.Branch("weight", &weight , "weight/F");
  Delphes.Branch("lep_n", &lep_n, "lep_n/I");
  Delphes.Branch("lep_pt", &lep_pt , "lep_pt/F");
  Delphes.Branch("lep_eta", &lep_eta, "lep_eta/F");
  Delphes.Branch("lep_E", &lep_E, "lep_E/F");
  Delphes.Branch("met", &met , "met/F");
  Delphes.Branch("met_phi", &met_phi , "met_phi/F");
  Delphes.Branch("HT", &HT , "HT/F");
  Delphes.Branch("jet1_pt", &jet1_pt, "jet1_pt/F");
  Delphes.Branch("jet1_eta", &jet1_eta, "jet1_eta/F");
  Delphes.Branch("jet1_E", &jet1_E, "jet1_E/F");
  Delphes.Branch("jet2_pt", &jet2_pt, "jet2_pt/F");
  Delphes.Branch("jet2_eta", &jet2_eta, "jet2_eta/F");
  Delphes.Branch("jet2_E", &jet2_E, "jet2_E/F");
  Delphes.Branch("lead_jet_pt", &lead_jet_pt, "lead_jet_pt/F");
  Delphes.Branch("lead_jet_eta", &lead_jet_eta, "lead_jet_eta/F");
  Delphes.Branch("bjets_n", &bjets_n, "bjets_n/I");
  Delphes.Branch("bjet1_pt", &bjet1_pt, "bjet1_pt/F");
  Delphes.Branch("bjet1_eta", &bjet1_eta, "bjet1_eta/F");
  Delphes.Branch("bjet1_E", &bjet1_E, "bjet1_E/F");
  Delphes.Branch("bjet2_pt", &bjet2_pt, "bjet2_pt/F");
  Delphes.Branch("bjet2_eta", &bjet2_eta, "bjet2_eta/F");
  Delphes.Branch("bjet2_E", &bjet2_E, "bjet2_E/F");
  Delphes.Branch("bjet3_pt", &bjet3_pt, "bjet3_pt/F");
  Delphes.Branch("bjet3_eta", &bjet3_eta, "bjet3_eta/F");
  Delphes.Branch("bjet3_E", &bjet3_E, "bjet3_E/F");
  Delphes.Branch("lead_bjet_pt", &lead_bjet_pt, "lead_bjet_pt/F");
  Delphes.Branch("lead_bjet_eta", &lead_bjet_eta, "lead_bjet_eta/F");
  Delphes.Branch("MT_W", &MT_W, "MT_W/F");
  Delphes.Branch("M_jj", &M_jj, "M_jj/F");
  Delphes.Branch("pt_jj", &pt_jj, "pt_jj/F");
  Delphes.Branch("eta_jj", &eta_jj, "eta_jj/F");
  Delphes.Branch("pt_tbjet", &pt_tbjet, "pt_tbjet/F");
  Delphes.Branch("eta_tbjet", &eta_tbjet, "eta_tbjet/F");
  Delphes.Branch("M_higgs", &M_higgs, "M_higgs/F");
  Delphes.Branch("pt_higgs" , &pt_higgs, "pt_higgs/F");
  Delphes.Branch("eta_higgs", &eta_higgs, "eta_higgs/F");
  Delphes.Branch("M_tribjets", &M_tribjets, "M_tribjets/F");
  Delphes.Branch("pt_tribjets", &pt_tribjets, "pt_tribjets/F");
  Delphes.Branch("eta_tribjets", &eta_tribjets, "eta_tribjets/F");
  Delphes.Branch("MT_bjet_lep", &MT_bjet_lep, "MT_bjet_lep/F");
  Delphes.Branch("deltaR_lep_leadjet", &deltaR_lep_leadjet, "deltaR_lep_leadjet/F");
  Delphes.Branch("deltaR_lep_leadbjet", &deltaR_lep_leadbjet, "deltaR_lep_leadbjet/F");
  Delphes.Branch("deltaR_lead_bjet_jet", &deltaR_lead_bjet_jet, "deltaR_lead_bjet/F");

  


  for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

     // Begin the code 
     
     // weight generation
   
      weight = gRandom->Gaus(20,8);
      weight = 0.001*weight;


     count_init = count_init + 1;

    // Merging the electron and muon to leptons (begin)

	  int goodlep_n = 0;
    int goodlep_index = 0;
	  int lep_index =0;
    lep_n = 0;
    bjets_n = 0;

    
    for(Int_t i=0; i<elec_n; i++)
    {
       
      //count_lep++;
       // temporary
        TLorentzVector eletemp;
        eletemp.SetPtEtaPhiE(elec_pt->at(i), elec_eta->at(i), elec_phi->at(i), elec_E->at(i));
		  
        
       

      // selecting hard pt leptons
      //  if(elec_pt->at(i) >25.)
      //  {
          count_lep++;
          goodlep_n = goodlep_n + 1;
          goodlep_index = i;
			    lep_index++;
          lep_n = goodlep_n;
      //  }
    
    }
    TLorentzVector Lepton_1  = TLorentzVector();
    if(goodlep_n==1)
		{
      
		  Lepton_1.SetPtEtaPhiE(elec_pt->at(goodlep_index), elec_eta->at(goodlep_index), elec_phi->at(goodlep_index),elec_E->at(goodlep_index));
    }
       // updating the lepton status
   
    goodlep_n = 0;
    for(Int_t i=0; i<muon_n; i++)
    {  
      //  count_lep++;
        TLorentzVector muotemp;
        muotemp.SetPtEtaPhiE(muon_pt->at(i), muon_eta->at(i), muon_phi->at(i), muon_E->at(i));
      //  if(muon_pt->at(i) > 25.)
      //  {
          count_lep++;
          goodlep_n = goodlep_n + 1;
          goodlep_index = i;
			    lep_index++;
          lep_n = goodlep_n;
      //  }
      

     if(goodlep_n==1)
	    { 
		  Lepton_1.SetPtEtaPhiE(muon_pt->at(goodlep_index), muon_eta->at(goodlep_index), muon_phi->at(goodlep_index),muon_E->at(goodlep_index));
      }
  
    }

    // Merged the electron and muon to form leptons (end)

 // cout << "Good lep             : " << goodlep_n << " events" << endl;
    lep_pt = Lepton_1.Pt();
    lep_eta = Lepton_1.Eta();
    lep_E = Lepton_1.Eta();

    // Transverse Mass
  //  mT_W=TMath::Sqrt(l_W.M2()+2*(l_W.Et()*m_met-l_W.Px()*m_met * cos(m_phi_met) -l_W.Py()* m_met * sin(m_phi_met)));
    MT_W = TMath::Sqrt(Lepton_1.M2()+2*(Lepton_1.Et()*met-Lepton_1.Px()*met*cos(met_phi) -Lepton_1.Py()*met*sin(met_phi)));
    
    //Exactly two good lepton
     if(goodlep_n==1)
         {
	     

      int test_jet1 = 0;
      int test_jet2 = 0;

      int jet1_index = -1;
      int jet2_index = -1;
      int bjet1_index = -1;
      int bjet2_index = -1;
      int bjet3_index = -1;
      int hbjet1_index = -1;
      int hbjet2_index = -1;
      int tbjet_index = -1;

      // TLorentzVector definitions
      TLorentzVector jet1  = TLorentzVector();
	    TLorentzVector jet2  = TLorentzVector();
	    TLorentzVector bjet_1  = TLorentzVector();
	    TLorentzVector bjet_2  = TLorentzVector();
      TLorentzVector bjet_3  = TLorentzVector();  
      TLorentzVector hbjet_1  = TLorentzVector();
	    TLorentzVector hbjet_2  = TLorentzVector();
      TLorentzVector tbjet  = TLorentzVector(); 
  
		    for(Int_t i=0; i<jet_n; i++)
        {
	        if((jet_pt->at(i)>=35) && abs(jet_eta->at(i))<=2.5 && jet_btag->at(i)==1)
		        {
              bjets_n++;
              if(test_jet1==0){
                bjet1_index = i;
                bjet_1.SetPtEtaPhiE(jet_pt->at(bjet1_index), jet_eta->at(bjet1_index), jet_phi->at(bjet1_index),jet_E->at(bjet1_index));
             
              }

              if(test_jet1==1){
                bjet2_index = i;
                bjet_2.SetPtEtaPhiE(jet_pt->at(bjet2_index), jet_eta->at(bjet2_index), jet_phi->at(bjet2_index),jet_E->at(bjet2_index));
             
              }

              if(test_jet1==2){
                bjet3_index = i;
                bjet_3.SetPtEtaPhiE(jet_pt->at(bjet3_index), jet_eta->at(bjet3_index), jet_phi->at(bjet3_index),jet_E->at(bjet3_index));
                break;
              }
              
              test_jet1++;
              
            }
        	}
        
        float m12 = TMath::Abs((bjet_1+bjet_2).M() - m_H);
        float m13 = TMath::Abs((bjet_1+bjet_3).M() - m_H);
        float m23 = TMath::Abs((bjet_2+bjet_3).M() - m_H);

        bjet1_pt = bjet_1.Pt();
        bjet1_eta = bjet_1.Eta();
        bjet1_E = bjet_1.E();
        bjet2_pt = bjet_2.Pt();
        bjet2_eta = bjet_2.Eta();
        bjet2_E = bjet_2.E();
        bjet3_pt = bjet_3.Pt();
        bjet3_eta = bjet_3.Eta();
        bjet3_E = bjet_3.E();


        if(m12<=60){
          hbjet1_index = bjet1_index;
          hbjet2_index = bjet2_index;
          tbjet_index = bjet3_index;
        }

        if(m13<=60){
          hbjet1_index = bjet1_index;
          hbjet2_index = bjet3_index;
          tbjet_index = bjet2_index;
        }

        if(m23<=60){
          hbjet1_index = bjet2_index;
          hbjet2_index = bjet3_index;
          tbjet_index = bjet1_index;
        }
        
       for(Int_t i=0; i<jet_n; i++)
        {
           if((jet_pt->at(i)>=35) && abs(jet_eta->at(i))<=2.5 && jet_btag->at(i)==1)
		         {
         if(hbjet1_index==i){hbjet_1.SetPtEtaPhiE(jet_pt->at(hbjet1_index), jet_eta->at(hbjet1_index), jet_phi->at(hbjet1_index),jet_E->at(hbjet1_index));}
         if(hbjet2_index==i){hbjet_2.SetPtEtaPhiE(jet_pt->at(hbjet2_index), jet_eta->at(hbjet2_index), jet_phi->at(hbjet2_index),jet_E->at(hbjet2_index));}
         if(tbjet_index==i){tbjet.SetPtEtaPhiE(jet_pt->at(tbjet_index), jet_eta->at(tbjet_index), jet_phi->at(tbjet_index),jet_E->at(tbjet_index));}

       }
        }


       for(Int_t i=0; i<jet_n; i++)
        {
           if((jet_pt->at(i)>=35) && abs(jet_eta->at(i))<=4.5)
		         {
         if(bjet1_index==i){continue;}
         if(bjet2_index==i){continue;}
         if(bjet3_index==i){continue;}

         if(test_jet2==0){
           jet1_index = i;
           jet1.SetPtEtaPhiE(jet_pt->at(jet1_index), jet_eta->at(jet1_index), jet_phi->at(jet1_index),jet_E->at(jet1_index));
                }
         if(test_jet2==1){
           jet2_index = i;
           jet2.SetPtEtaPhiE(jet_pt->at(jet2_index), jet_eta->at(jet2_index), jet_phi->at(jet2_index),jet_E->at(jet2_index));
           break;
                }
          test_jet2++;
          
          
          }
        }
  
        jet1_pt = jet1.Pt();
        jet1_eta = jet1.Eta();
        jet1_E = jet1.E();
        jet2_pt = jet2.Pt();
        jet2_eta = jet2.Eta();
        jet2_E = jet2.E();

       // Calculation of variables here
        M_jj = (jet1+jet2).M(); 
        pt_jj = (jet1+jet2).Pt();
        eta_jj = (jet1+jet2).Eta();

        M_higgs = (hbjet_1+hbjet_2).M();
        pt_higgs = (hbjet_1+hbjet_2).Pt();
        eta_higgs = (hbjet_1+hbjet_2).Eta();
        
        
        M_tribjets =  (bjet_1+bjet_2+bjet_3).M();
        pt_tribjets = (bjet_1+bjet_2+bjet_3).Pt();
        eta_tribjets = (bjet_1+bjet_2+bjet_3).Eta();
        pt_tbjet = tbjet.Pt();
        eta_tbjet = tbjet.Eta();




        

	 
         } 

         

    
    // End the code here

   Delphes.Fill();

   }

   // Print the total number of countd events here
    cout << "Analyzed a total of :  " << count_init << " events" << endl;
    cout << "Passed the lepton condition:   " << count_lep <<  " events" << endl;
    cout << "Passed the bjet condition:   " << count_bjet <<  " events" << endl;

    Delphes.Write("",TObject::kWriteDelete);

}


delphes::delphes(TTree *tree) : fChain(0) 
 {
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
  if (tree == 0) {
 
      TChain* tchain = new TChain("delphes");
          tchain->Add("/home/kanhaiya/Charged_higgs_analysis/charged_higgs.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/ttbar_jets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/tjets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/zz_jets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/wz_jets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/ww_jets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/zjets.root");
         // tchain->Add("/home/kanhaiya/Charged_higgs_analysis/wjets.root");
          tree = tchain;
   }
   Init(tree);
   Loop();
}


