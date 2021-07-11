#include "TMath.h"
void func()
{  
   Int_t root_version = gROOT->GetVersionInt(); 
  // auto c1 = new TCanvas("canvas","Example",200,10,600,400);
   TCanvas* canvas = new TCanvas("canvas_plotflow_tempo81","canvas_plotflow_tempo81",0,0,800,500);
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
   canvas->SetLeftMargin(0.15);
   canvas->SetRightMargin(0.05);
   canvas->SetBottomMargin(0.15);
   canvas->SetTopMargin(0.05);


   auto f1 = new TF1("f1","17.47/x**2 + 29998.24/x**2; ; gH",1,20);
   auto g1 = new TF1("g1","17.47*x**2 + 29998.24/x**2",1,20); 
   f1->SetLineColor(2);
   f1->SetLineStyle(1);
   f1->SetLineWidth(3.5);
   f1->SetTitle("New");

   // Y axis
  f1->GetYaxis()->SetLabelSize(0.04);
  f1->GetYaxis()->SetLabelOffset(0.005);
  f1->GetYaxis()->SetTitleSize(0.08);
  f1->GetYaxis()->SetTitleFont(22);
  f1->GetYaxis()->SetTitleOffset(0.8);
  f1->GetYaxis()->SetTitle("g^{2}_{qH^{#\pm}}");

  // X axis
  f1->GetXaxis()->SetLabelSize(0.04);
  f1->GetXaxis()->SetLabelOffset(0.005);
  f1->GetXaxis()->SetTitleSize(0.08);
  f1->GetXaxis()->SetTitleFont(22);
  f1->GetXaxis()->SetTitleOffset(0.8);
  f1->GetXaxis()->SetTitle("tan #beta");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // f1->GetYaxis()->SetLabelSize(0.08);
  // f1->GetYaxis()->SetTitleOffset(1.);
 //  f1->GetYaxis()->SetTitle("g^{2}_{qH^{#\pm}}"); 
 //  f1->GetXaxis()->SetTitle("tan #beta");
 //  f1->GetYaxis()->SetTitleSize(0.05);
   

  
  
   g1->SetLineColor(600);
   g1->SetLineStyle(1);
   g1->SetLineWidth(3.5);
   f1->Draw("FC");
   g1->Draw("same");
 
   TLegend *legend=new TLegend(0.75,0.63,0.88,0.86);   // x1, y1, x2, y2 coordinates of the Legend 
   legend->SetTextFont(72);
   legend->SetTextSize(0.04);
   legend->SetLineColor(1);
   legend->AddEntry(f1,"2HDM Type-I","l");
   legend->AddEntry(g1,"2HDM Type-II","l");
   legend->Draw();





// Calculation of x values from the known values of y

 Double_t value1 = f1->GetX(0.5); // f->GetX(0.5, f->GetXmin(), f->GetXmax())
 std::cout << "x = "<<value1 << std::endl;
 

 Double_t value2 = g1->GetX(0.5); // f->GetX(0.5, f->GetXmin(), f->GetXmax())
 std::cout << "x = "<<value2 << std::endl;



 }

