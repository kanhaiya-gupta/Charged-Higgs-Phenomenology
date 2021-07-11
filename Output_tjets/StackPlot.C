#include <cstdlib> 
#include <cstdio> 
#include <string> 
#include <iostream> 
#include <fstream>
#include "TSystem.h"
#include "myroot.h"
TH1D* StackPlot(TString dir, TString name){
   
   TCanvas* canvas = new TCanvas("canvas_plotflow_tempo23","canvas_plotflow_tempo23",0,0,600,500);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   canvas->SetHighLightColor(2);
   canvas->SetFillColor(0);
   canvas->SetBorderMode(0);
   canvas->SetBorderSize(3);
   canvas->SetFrameBorderMode(0);
   canvas->SetFrameBorderSize(0);
   canvas->SetTickx(1);
   canvas->SetTicky(1);
   canvas->SetLeftMargin(0.14);
   canvas->SetRightMargin(0.05);
   canvas->SetBottomMargin(0.12);
   canvas->SetTopMargin(0.05);


   TFile *fileSig = TFile::Open("sig_output.root");
   const int nmcfiles=7;
   TString filenames[nmcfiles]={"tt_output.root","tjets_output.root","zz_output.root","wz_output.root","ww_output.root","zjets_output.root","wjets_output.root"};
   TString file_names[nmcfiles]={"ttbar+jets","t+jets", "zz+jets", "wz+jets", "ww+jets", "z+jets", "z+jets"};
  // int colors[nmcfiles]={kOrange,kGray,kGreen,kRed, kBlue, kCyan};
  // int colors[nmcfiles]={kGreen, kRed, kCyan, kViolet, kOrange, kGray};
   int colors[nmcfiles]={kBlack, kGreen, kRed, kCyan, kViolet, kOrange, kGray};

   TFile* files[nmcfiles];
   THStack *mc = new THStack("mc","MC background");
 //  TLegend* leg = new TLegend(0.15,0.65,0.35,0.89);
   TLegend* leg = new TLegend(.53,.45,.69,.90);
   TString fullname;
   if (dir =="") fullname = name;
   else fullname = dir + "/" + name;
   TH1D* hdata = (TH1D*) fileSig->Get(fullname);
   if (!hdata) return 0;
   
   hdata->SetLineColor(600);
   hdata->SetLineStyle(1);
   hdata->SetLineWidth(1);
   hdata->SetFillColor(0);
   hdata->SetFillStyle(1001);
   leg->AddEntry(hdata, "signal");

   for (int i=0;i<nmcfiles;i++){
      TFile* fil = (TFile*) gROOT->FindObject(filenames[i]);
      if (!fil){
         fil = TFile::Open(filenames[i]);
      }
      TH1D* hist = (TH1D*) fil->Get(fullname);
      if (hist){
        // hist->SetFillColor(colors[i]);
         hist->SetLineColor(colors[i]);
         hist->SetLineStyle(1);
         hist->SetLineWidth(1);
         hist->SetFillColor(0);
         hist->SetFillStyle(1001);
         mc->Add(hist);
         leg->AddEntry(hist,file_names[i]);
      }
   }
  
   mc->Add(hdata);
   mc->Draw("nostack"); 
   mc->GetYaxis()->SetLabelSize(0.04);
   mc->GetYaxis()->SetLabelOffset(0.005);
   mc->GetYaxis()->SetTitleSize(0.05);
   mc->GetYaxis()->SetTitleFont(22);
   mc->GetYaxis()->SetTitleOffset(1.3);
   mc->GetYaxis()->SetTitle("Events");

  // X axis
   mc->GetXaxis()->SetLabelSize(0.04);
   mc->GetXaxis()->SetLabelOffset(0.005);
   mc->GetXaxis()->SetTitleSize(0.05);
   mc->GetXaxis()->SetTitleFont(22);
   mc->GetXaxis()->SetTitleOffset(1);
   mc->GetXaxis()->SetTitle("NN Output"); 

   leg->SetLineColor(1); 
   leg->Draw();
}
