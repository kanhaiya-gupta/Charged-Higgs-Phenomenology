void selection_22()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo45","canvas_plotflow_tempo45",0,0,800,500);
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
  canvas->SetLeftMargin(0.10);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S23_M_0 = new TH1F("S23_M_0","S23_M_0",20,0.0,2500.0);
  // Content
  S23_M_0->SetBinContent(0,0.0); // underflow
  S23_M_0->SetBinContent(1,0.0);
  S23_M_0->SetBinContent(2,0.00316885376927);
  S23_M_0->SetBinContent(3,0.0321412380742);
  S23_M_0->SetBinContent(4,0.155952940411);
  S23_M_0->SetBinContent(5,0.212313253523);
  S23_M_0->SetBinContent(6,0.155952940411);
  S23_M_0->SetBinContent(7,0.110909928745);
  S23_M_0->SetBinContent(8,0.0803530899833);
  S23_M_0->SetBinContent(9,0.0545495636094);
  S23_M_0->SetBinContent(10,0.0416478004225);
  S23_M_0->SetBinContent(11,0.0393843297285);
  S23_M_0->SetBinContent(12,0.0244454460384);
  S23_M_0->SetBinContent(13,0.0219556355582);
  S23_M_0->SetBinContent(14,0.0162969640256);
  S23_M_0->SetBinContent(15,0.0117700330422);
  S23_M_0->SetBinContent(16,0.00588501444021);
  S23_M_0->SetBinContent(17,0.00543232134187);
  S23_M_0->SetBinContent(18,0.00679040167733);
  S23_M_0->SetBinContent(19,0.00384789393701);
  S23_M_0->SetBinContent(20,0.00565866841126);
  S23_M_0->SetBinContent(21,0.0115436828515); // overflow
  S23_M_0->SetEntries(4418);
  // Style
  S23_M_0->SetLineColor(600);
  S23_M_0->SetLineStyle(1);
  S23_M_0->SetLineWidth(1);
  S23_M_0->SetFillColor(0);
  S23_M_0->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_1 = new TH1F("S23_M_1","S23_M_1",20,0.0,2500.0);
  // Content
  S23_M_1->SetBinContent(0,0.0); // underflow
  S23_M_1->SetBinContent(1,0.000258899690369);
  S23_M_1->SetBinContent(2,0.0214886773316);
  S23_M_1->SetBinContent(3,0.145242676792);
  S23_M_1->SetBinContent(4,0.186019461376);
  S23_M_1->SetBinContent(5,0.156116460757);
  S23_M_1->SetBinContent(6,0.132686103943);
  S23_M_1->SetBinContent(7,0.0950161833346);
  S23_M_1->SetBinContent(8,0.0631715284913);
  S23_M_1->SetBinContent(9,0.0467313946168);
  S23_M_1->SetBinContent(10,0.0381877018037);
  S23_M_1->SetBinContent(11,0.029385118393);
  S23_M_1->SetBinContent(12,0.0205825223534);
  S23_M_1->SetBinContent(13,0.0139805847954);
  S23_M_1->SetBinContent(14,0.0121682849422);
  S23_M_1->SetBinContent(15,0.00763754036074);
  S23_M_1->SetBinContent(16,0.00737864092295);
  S23_M_1->SetBinContent(17,0.00478964401926);
  S23_M_1->SetBinContent(18,0.00478964401926);
  S23_M_1->SetBinContent(19,0.00245954655336);
  S23_M_1->SetBinContent(20,0.00323624612962);
  S23_M_1->SetBinContent(21,0.00867313937479); // overflow
  S23_M_1->SetEntries(7725);
  // Style
  S23_M_1->SetLineColor(1);
  S23_M_1->SetLineStyle(1);
  S23_M_1->SetLineWidth(1);
  S23_M_1->SetFillColor(0);
  S23_M_1->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_2 = new TH1F("S23_M_2","S23_M_2",20,0.0,2500.0);
  // Content
  S23_M_2->SetBinContent(0,0.0); // underflow
  S23_M_2->SetBinContent(1,0.000500751089909);
  S23_M_2->SetBinContent(2,0.0660991512131);
  S23_M_2->SetBinContent(3,0.220831193517);
  S23_M_2->SetBinContent(4,0.202303479497);
  S23_M_2->SetBinContent(5,0.173760649826);
  S23_M_2->SetBinContent(6,0.0956434822482);
  S23_M_2->SetBinContent(7,0.083124694799);
  S23_M_2->SetBinContent(8,0.0460691035362);
  S23_M_2->SetBinContent(9,0.0315473133595);
  S23_M_2->SetBinContent(10,0.0245368038136);
  S23_M_2->SetBinContent(11,0.011517275884);
  S23_M_2->SetBinContent(12,0.0110165252022);
  S23_M_2->SetBinContent(13,0.00751126838894);
  S23_M_2->SetBinContent(14,0.00650976498494);
  S23_M_2->SetBinContent(15,0.0030045061314);
  S23_M_2->SetBinContent(16,0.00600901430309);
  S23_M_2->SetBinContent(17,0.0020030047677);
  S23_M_2->SetBinContent(18,0.00250375544955);
  S23_M_2->SetBinContent(19,0.000500751089909);
  S23_M_2->SetBinContent(20,0.0020030047677);
  S23_M_2->SetBinContent(21,0.0030045061314); // overflow
  S23_M_2->SetEntries(1997);
  // Style
  S23_M_2->SetLineColor(416);
  S23_M_2->SetLineStyle(1);
  S23_M_2->SetLineWidth(1);
  S23_M_2->SetFillColor(0);
  S23_M_2->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_3 = new TH1F("S23_M_3","S23_M_3",20,0.0,2500.0);
  // Content
  S23_M_3->SetBinContent(0,0.0); // underflow
  S23_M_3->SetBinContent(1,0.0);
  S23_M_3->SetBinContent(2,0.0480000039902);
  S23_M_3->SetBinContent(3,0.191999991748);
  S23_M_3->SetBinContent(4,0.213999971887);
  S23_M_3->SetBinContent(5,0.161999996821);
  S23_M_3->SetBinContent(6,0.122000043938);
  S23_M_3->SetBinContent(7,0.0879999931915);
  S23_M_3->SetBinContent(8,0.0299999949275);
  S23_M_3->SetBinContent(9,0.0439999965957);
  S23_M_3->SetBinContent(10,0.0200000006537);
  S23_M_3->SetBinContent(11,0.022000004351);
  S23_M_3->SetBinContent(12,0.0200000006537);
  S23_M_3->SetBinContent(13,0.0100000003269);
  S23_M_3->SetBinContent(14,0.00200000006537);
  S23_M_3->SetBinContent(15,0.0);
  S23_M_3->SetBinContent(16,0.00400000013075);
  S23_M_3->SetBinContent(17,0.00600000019612);
  S23_M_3->SetBinContent(18,0.00200000006537);
  S23_M_3->SetBinContent(19,0.00200000006537);
  S23_M_3->SetBinContent(20,0.00200000006537);
  S23_M_3->SetBinContent(21,0.0100000003269); // overflow
  S23_M_3->SetEntries(500);
  // Style
  S23_M_3->SetLineColor(632);
  S23_M_3->SetLineStyle(1);
  S23_M_3->SetLineWidth(1);
  S23_M_3->SetFillColor(0);
  S23_M_3->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_4 = new TH1F("S23_M_4","S23_M_4",20,0.0,2500.0);
  // Content
  S23_M_4->SetBinContent(0,0.0); // underflow
  S23_M_4->SetBinContent(1,0.0);
  S23_M_4->SetBinContent(2,0.0721476638534);
  S23_M_4->SetBinContent(3,0.176174504461);
  S23_M_4->SetBinContent(4,0.19295301262);
  S23_M_4->SetBinContent(5,0.135906017362);
  S23_M_4->SetBinContent(6,0.0989932844091);
  S23_M_4->SetBinContent(7,0.0788590596147);
  S23_M_4->SetBinContent(8,0.0536912786218);
  S23_M_4->SetBinContent(9,0.052013439059);
  S23_M_4->SetBinContent(10,0.0369127517081);
  S23_M_4->SetBinContent(11,0.0184563739785);
  S23_M_4->SetBinContent(12,0.0218120793613);
  S23_M_4->SetBinContent(13,0.0167785231627);
  S23_M_4->SetBinContent(14,0.00838926158133);
  S23_M_4->SetBinContent(15,0.00838926158133);
  S23_M_4->SetBinContent(16,0.0100671123972);
  S23_M_4->SetBinContent(17,0.00335570463253);
  S23_M_4->SetBinContent(18,0.00503355619859);
  S23_M_4->SetBinContent(19,0.00335570463253);
  S23_M_4->SetBinContent(20,0.0);
  S23_M_4->SetBinContent(21,0.00671141076548); // overflow
  S23_M_4->SetEntries(596);
  // Style
  S23_M_4->SetLineColor(432);
  S23_M_4->SetLineStyle(1);
  S23_M_4->SetLineWidth(1);
  S23_M_4->SetFillColor(0);
  S23_M_4->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_5 = new TH1F("S23_M_5","S23_M_5",20,0.0,2500.0);
  // Content
  S23_M_5->SetBinContent(0,0.0); // underflow
  S23_M_5->SetBinContent(1,0.0);
  S23_M_5->SetBinContent(2,0.074285714509);
  S23_M_5->SetBinContent(3,0.222857143527);
  S23_M_5->SetBinContent(4,0.177142838888);
  S23_M_5->SetBinContent(5,0.16571427494);
  S23_M_5->SetBinContent(6,0.125714301122);
  S23_M_5->SetBinContent(7,0.062857150561);
  S23_M_5->SetBinContent(8,0.0457142851002);
  S23_M_5->SetBinContent(9,0.0228571425501);
  S23_M_5->SetBinContent(10,0.0285714294088);
  S23_M_5->SetBinContent(11,0.0228571425501);
  S23_M_5->SetBinContent(12,0.0171428556914);
  S23_M_5->SetBinContent(13,0.0057142868587);
  S23_M_5->SetBinContent(14,0.0);
  S23_M_5->SetBinContent(15,0.0);
  S23_M_5->SetBinContent(16,0.0);
  S23_M_5->SetBinContent(17,0.0057142868587);
  S23_M_5->SetBinContent(18,0.0057142868587);
  S23_M_5->SetBinContent(19,0.0);
  S23_M_5->SetBinContent(20,0.0114285737174);
  S23_M_5->SetBinContent(21,0.0057142868587); // overflow
  S23_M_5->SetEntries(175);
  // Style
  S23_M_5->SetLineColor(616);
  S23_M_5->SetLineStyle(1);
  S23_M_5->SetLineWidth(1);
  S23_M_5->SetFillColor(0);
  S23_M_5->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_6 = new TH1F("S23_M_6","S23_M_6",20,0.0,2500.0);
  // Content
  S23_M_6->SetBinContent(0,0.0); // underflow
  S23_M_6->SetBinContent(1,0.0);
  S23_M_6->SetBinContent(2,0.0797101594638);
  S23_M_6->SetBinContent(3,0.231884052461);
  S23_M_6->SetBinContent(4,0.108695660966);
  S23_M_6->SetBinContent(5,0.144927547955);
  S23_M_6->SetBinContent(6,0.137681162468);
  S23_M_6->SetBinContent(7,0.0579710030044);
  S23_M_6->SetBinContent(8,0.0289855055466);
  S23_M_6->SetBinContent(9,0.0507246175179);
  S23_M_6->SetBinContent(10,0.0362318829443);
  S23_M_6->SetBinContent(11,0.0362318829443);
  S23_M_6->SetBinContent(12,0.0289855055466);
  S23_M_6->SetBinContent(13,0.0144927547955);
  S23_M_6->SetBinContent(14,0.0144927547955);
  S23_M_6->SetBinContent(15,0.0144927547955);
  S23_M_6->SetBinContent(16,0.0);
  S23_M_6->SetBinContent(17,0.00724637739774);
  S23_M_6->SetBinContent(18,0.0);
  S23_M_6->SetBinContent(19,0.0);
  S23_M_6->SetBinContent(20,0.0);
  S23_M_6->SetBinContent(21,0.00724637739774); // overflow
  S23_M_6->SetEntries(138);
  // Style
  S23_M_6->SetLineColor(797);
  S23_M_6->SetLineStyle(1);
  S23_M_6->SetLineWidth(1);
  S23_M_6->SetFillColor(0);
  S23_M_6->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S23_M_7 = new TH1F("S23_M_7","S23_M_7",20,0.0,2500.0);
  // Content
  S23_M_7->SetBinContent(0,0.0); // underflow
  S23_M_7->SetBinContent(1,0.0);
  S23_M_7->SetBinContent(2,0.0310558970521);
  S23_M_7->SetBinContent(3,0.167701861107);
  S23_M_7->SetBinContent(4,0.142857130696);
  S23_M_7->SetBinContent(5,0.155279506542);
  S23_M_7->SetBinContent(6,0.136645964055);
  S23_M_7->SetBinContent(7,0.105590067003);
  S23_M_7->SetBinContent(8,0.0496894395397);
  S23_M_7->SetBinContent(9,0.0621117941041);
  S23_M_7->SetBinContent(10,0.055900627463);
  S23_M_7->SetBinContent(11,0.012422360949);
  S23_M_7->SetBinContent(12,0.0248447304109);
  S23_M_7->SetBinContent(13,0.012422360949);
  S23_M_7->SetBinContent(14,0.012422360949);
  S23_M_7->SetBinContent(15,0.00621117941041);
  S23_M_7->SetBinContent(16,0.0);
  S23_M_7->SetBinContent(17,0.00621117941041);
  S23_M_7->SetBinContent(18,0.0);
  S23_M_7->SetBinContent(19,0.00621117941041);
  S23_M_7->SetBinContent(20,0.0);
  S23_M_7->SetBinContent(21,0.012422360949); // overflow
  S23_M_7->SetEntries(161);
  // Style
  S23_M_7->SetLineColor(16);
  S23_M_7->SetLineStyle(1);
  S23_M_7->SetLineWidth(1);
  S23_M_7->SetFillColor(0);
  S23_M_7->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_46","mystack");
  stack->Add(S23_M_0);
  stack->Add(S23_M_1);
  stack->Add(S23_M_2);
  stack->Add(S23_M_3);
  stack->Add(S23_M_4);
  stack->Add(S23_M_5);
  stack->Add(S23_M_6);
  stack->Add(S23_M_7);
  stack->Draw("nostack");

  // Y axis
  stack->GetYaxis()->SetLabelSize(0.04);
  stack->GetYaxis()->SetLabelOffset(0.005);
  stack->GetYaxis()->SetTitleSize(0.06);
  stack->GetYaxis()->SetTitleFont(22);
  stack->GetYaxis()->SetTitleOffset(0.75);
  stack->GetYaxis()->SetTitle("Events ( scaled to one )");

  // X axis
  stack->GetXaxis()->SetLabelSize(0.04);
  stack->GetXaxis()->SetLabelOffset(0.005);
  stack->GetXaxis()->SetTitleSize(0.06);
  stack->GetXaxis()->SetTitleFont(22);
  stack->GetXaxis()->SetTitleOffset(1);
  stack->GetXaxis()->SetTitle("M [ b_{1} b_{2} j_{1} j_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Creating a TLegend
  TLegend* legend = new TLegend(.53,.65,.69,.75);
  legend->AddEntry(S23_M_0,"signal");
  legend->AddEntry(S23_M_1,"ttbar+jets");
  legend->AddEntry(S23_M_2,"t+jets");
  legend->AddEntry(S23_M_3,"zz+jets");
  legend->AddEntry(S23_M_4,"wz+jets");
  legend->AddEntry(S23_M_5,"ww+jets");
  legend->AddEntry(S23_M_6,"w+jets");
  legend->AddEntry(S23_M_7,"z+jets");
  legend->SetFillColor(0);
  legend->SetTextSize(0.05);
  legend->SetTextFont(22);
  legend->SetY1(TMath::Max(0.15,0.97-0.10*legend->GetListOfPrimitives()->GetSize()));
  legend->Draw();

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_22.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_22.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_22.eps");

}
