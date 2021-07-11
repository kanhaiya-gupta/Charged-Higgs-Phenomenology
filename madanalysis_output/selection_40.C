void selection_40()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
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
  canvas->SetLeftMargin(0.10);
  canvas->SetRightMargin(0.05);
  canvas->SetBottomMargin(0.15);
  canvas->SetTopMargin(0.05);

  // Creating a new TH1F
  TH1F* S41_M_0 = new TH1F("S41_M_0","S41_M_0",80,0.0,2000.0);
  // Content
  S41_M_0->SetBinContent(0,0.0); // underflow
  S41_M_0->SetBinContent(1,0.0);
  S41_M_0->SetBinContent(2,0.0);
  S41_M_0->SetBinContent(3,0.0);
  S41_M_0->SetBinContent(4,0.0);
  S41_M_0->SetBinContent(5,0.0);
  S41_M_0->SetBinContent(6,0.0);
  S41_M_0->SetBinContent(7,0.0);
  S41_M_0->SetBinContent(8,0.0);
  S41_M_0->SetBinContent(9,0.0);
  S41_M_0->SetBinContent(10,0.0);
  S41_M_0->SetBinContent(11,0.0);
  S41_M_0->SetBinContent(12,0.00047664450054);
  S41_M_0->SetBinContent(13,0.00047664450054);
  S41_M_0->SetBinContent(14,0.00333651172288);
  S41_M_0->SetBinContent(15,0.00619637828793);
  S41_M_0->SetBinContent(16,0.00905624485297);
  S41_M_0->SetBinContent(17,0.0162059112656);
  S41_M_0->SetBinContent(18,0.032888465498);
  S41_M_0->SetBinContent(19,0.0376549170764);
  S41_M_0->SetBinContent(20,0.0571973313009);
  S41_M_0->SetBinContent(21,0.0691134492919);
  S41_M_0->SetBinContent(22,0.0571973313009);
  S41_M_0->SetBinContent(23,0.044804583489);
  S41_M_0->SetBinContent(24,0.0381315468972);
  S41_M_0->SetBinContent(25,0.0443279317582);
  S41_M_0->SetBinContent(26,0.0438512800273);
  S41_M_0->SetBinContent(27,0.0443279317582);
  S41_M_0->SetBinContent(28,0.0324118137672);
  S41_M_0->SetBinContent(29,0.0333651172288);
  S41_M_0->SetBinContent(30,0.0271687323679);
  S41_M_0->SetBinContent(31,0.0281220139196);
  S41_M_0->SetBinContent(32,0.0319351839463);
  S41_M_0->SetBinContent(33,0.023832214072);
  S41_M_0->SetBinContent(34,0.0224022807895);
  S41_M_0->SetBinContent(35,0.0181124875149);
  S41_M_0->SetBinContent(36,0.0171591993903);
  S41_M_0->SetBinContent(37,0.0166825542324);
  S41_M_0->SetBinContent(38,0.0123927543849);
  S41_M_0->SetBinContent(39,0.0147759779831);
  S41_M_0->SetBinContent(40,0.0190657778306);
  S41_M_0->SetBinContent(41,0.0114394662602);
  S41_M_0->SetBinContent(42,0.0128693995427);
  S41_M_0->SetBinContent(43,0.011916111418);
  S41_M_0->SetBinContent(44,0.0100095329777);
  S41_M_0->SetBinContent(45,0.0128693995427);
  S41_M_0->SetBinContent(46,0.0133460447005);
  S41_M_0->SetBinContent(47,0.00667302125477);
  S41_M_0->SetBinContent(48,0.00524308797225);
  S41_M_0->SetBinContent(49,0.00571973313009);
  S41_M_0->SetBinContent(50,0.00810295453729);
  S41_M_0->SetBinContent(51,0.00953288781981);
  S41_M_0->SetBinContent(52,0.00857959969513);
  S41_M_0->SetBinContent(53,0.00619637828793);
  S41_M_0->SetBinContent(54,0.00810295453729);
  S41_M_0->SetBinContent(55,0.00667302125477);
  S41_M_0->SetBinContent(56,0.00190657778306);
  S41_M_0->SetBinContent(57,0.00381315468972);
  S41_M_0->SetBinContent(58,0.00285986656504);
  S41_M_0->SetBinContent(59,0.00524308797225);
  S41_M_0->SetBinContent(60,0.00428979984756);
  S41_M_0->SetBinContent(61,0.0047664450054);
  S41_M_0->SetBinContent(62,0.00333651172288);
  S41_M_0->SetBinContent(63,0.00381315468972);
  S41_M_0->SetBinContent(64,0.00285986656504);
  S41_M_0->SetBinContent(65,0.00142993328252);
  S41_M_0->SetBinContent(66,0.0023832214072);
  S41_M_0->SetBinContent(67,0.00142993328252);
  S41_M_0->SetBinContent(68,0.00381315468972);
  S41_M_0->SetBinContent(69,0.00190657778306);
  S41_M_0->SetBinContent(70,0.000953288781981);
  S41_M_0->SetBinContent(71,0.00190657778306);
  S41_M_0->SetBinContent(72,0.000953288781981);
  S41_M_0->SetBinContent(73,0.00190657778306);
  S41_M_0->SetBinContent(74,0.0023832214072);
  S41_M_0->SetBinContent(75,0.00047664450054);
  S41_M_0->SetBinContent(76,0.00047664450054);
  S41_M_0->SetBinContent(77,0.0);
  S41_M_0->SetBinContent(78,0.00047664450054);
  S41_M_0->SetBinContent(79,0.00047664450054);
  S41_M_0->SetBinContent(80,0.0);
  S41_M_0->SetBinContent(81,0.00619637828793); // overflow
  S41_M_0->SetEntries(2098);
  // Style
  S41_M_0->SetLineColor(600);
  S41_M_0->SetLineStyle(1);
  S41_M_0->SetLineWidth(1);
  S41_M_0->SetFillColor(0);
  S41_M_0->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S41_M_1 = new TH1F("S41_M_1","S41_M_1",80,0.0,2000.0);
  // Content
  S41_M_1->SetBinContent(0,0.0); // underflow
  S41_M_1->SetBinContent(1,0.0);
  S41_M_1->SetBinContent(2,0.0);
  S41_M_1->SetBinContent(3,0.0);
  S41_M_1->SetBinContent(4,0.0);
  S41_M_1->SetBinContent(5,0.0);
  S41_M_1->SetBinContent(6,0.0);
  S41_M_1->SetBinContent(7,0.0);
  S41_M_1->SetBinContent(8,0.0);
  S41_M_1->SetBinContent(9,0.0);
  S41_M_1->SetBinContent(10,0.0);
  S41_M_1->SetBinContent(11,0.0);
  S41_M_1->SetBinContent(12,0.00175541255802);
  S41_M_1->SetBinContent(13,0.00936219973858);
  S41_M_1->SetBinContent(14,0.0157987118805);
  S41_M_1->SetBinContent(15,0.0298420214781);
  S41_M_1->SetBinContent(16,0.0345230999407);
  S41_M_1->SetBinContent(17,0.0497366834354);
  S41_M_1->SetBinContent(18,0.0371562404699);
  S41_M_1->SetBinContent(19,0.0485664209553);
  S41_M_1->SetBinContent(20,0.0517846784533);
  S41_M_1->SetBinContent(21,0.0392042069456);
  S41_M_1->SetBinContent(22,0.0482738339286);
  S41_M_1->SetBinContent(23,0.0406670564524);
  S41_M_1->SetBinContent(24,0.0371562404699);
  S41_M_1->SetBinContent(25,0.0392042069456);
  S41_M_1->SetBinContent(26,0.0313048424426);
  S41_M_1->SetBinContent(27,0.0351082454519);
  S41_M_1->SetBinContent(28,0.0362785364742);
  S41_M_1->SetBinContent(29,0.0315974294694);
  S41_M_1->SetBinContent(30,0.029256875967);
  S41_M_1->SetBinContent(31,0.0245757746705);
  S41_M_1->SetBinContent(32,0.0228203638251);
  S41_M_1->SetBinContent(33,0.0225277939237);
  S41_M_1->SetBinContent(34,0.0245757746705);
  S41_M_1->SetBinContent(35,0.019602106327);
  S41_M_1->SetBinContent(36,0.0131655941851);
  S41_M_1->SetBinContent(37,0.0137507311336);
  S41_M_1->SetBinContent(38,0.0175541255802);
  S41_M_1->SetBinContent(39,0.015213574932);
  S41_M_1->SetBinContent(40,0.0117027503868);
  S41_M_1->SetBinContent(41,0.0125804572366);
  S41_M_1->SetBinContent(42,0.0114101804854);
  S41_M_1->SetBinContent(43,0.00936219973858);
  S41_M_1->SetBinContent(44,0.00965476963994);
  S41_M_1->SetBinContent(45,0.00819192584159);
  S41_M_1->SetBinContent(46,0.00585137519339);
  S41_M_1->SetBinContent(47,0.00848449288872);
  S41_M_1->SetBinContent(48,0.00994733668707);
  S41_M_1->SetBinContent(49,0.00731421899174);
  S41_M_1->SetBinContent(50,0.00702164909038);
  S41_M_1->SetBinContent(51,0.0076067888931);
  S41_M_1->SetBinContent(52,0.00409596149368);
  S41_M_1->SetBinContent(53,0.00555880529203);
  S41_M_1->SetBinContent(54,0.0046811012964);
  S41_M_1->SetBinContent(55,0.0046811012964);
  S41_M_1->SetBinContent(56,0.00497366834354);
  S41_M_1->SetBinContent(57,0.00380339444655);
  S41_M_1->SetBinContent(58,0.00351082454519);
  S41_M_1->SetBinContent(59,0.0052662382449);
  S41_M_1->SetBinContent(60,0.00409596149368);
  S41_M_1->SetBinContent(61,0.00263311883703);
  S41_M_1->SetBinContent(62,0.00321825749806);
  S41_M_1->SetBinContent(63,0.00204798131769);
  S41_M_1->SetBinContent(64,0.00321825749806);
  S41_M_1->SetBinContent(65,0.00234055007736);
  S41_M_1->SetBinContent(66,0.00146284379835);
  S41_M_1->SetBinContent(67,0.00175541255802);
  S41_M_1->SetBinContent(68,0.00117027503868);
  S41_M_1->SetBinContent(69,0.00117027503868);
  S41_M_1->SetBinContent(70,0.000877706279009);
  S41_M_1->SetBinContent(71,0.000585137519339);
  S41_M_1->SetBinContent(72,0.00117027503868);
  S41_M_1->SetBinContent(73,0.00029256875967);
  S41_M_1->SetBinContent(74,0.00029256875967);
  S41_M_1->SetBinContent(75,0.00029256875967);
  S41_M_1->SetBinContent(76,0.00029256875967);
  S41_M_1->SetBinContent(77,0.000585137519339);
  S41_M_1->SetBinContent(78,0.000585137519339);
  S41_M_1->SetBinContent(79,0.000877706279009);
  S41_M_1->SetBinContent(80,0.000585137519339);
  S41_M_1->SetBinContent(81,0.00438853139504); // overflow
  S41_M_1->SetEntries(3418);
  // Style
  S41_M_1->SetLineColor(1);
  S41_M_1->SetLineStyle(1);
  S41_M_1->SetLineWidth(1);
  S41_M_1->SetFillColor(0);
  S41_M_1->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S41_M_2 = new TH1F("S41_M_2","S41_M_2",80,0.0,2000.0);
  // Content
  S41_M_2->SetBinContent(0,0.0); // underflow
  S41_M_2->SetBinContent(1,0.0);
  S41_M_2->SetBinContent(2,0.0);
  S41_M_2->SetBinContent(3,0.0);
  S41_M_2->SetBinContent(4,0.0);
  S41_M_2->SetBinContent(5,0.0);
  S41_M_2->SetBinContent(6,0.0);
  S41_M_2->SetBinContent(7,0.0);
  S41_M_2->SetBinContent(8,0.0);
  S41_M_2->SetBinContent(9,0.0);
  S41_M_2->SetBinContent(10,0.0);
  S41_M_2->SetBinContent(11,0.0);
  S41_M_2->SetBinContent(12,0.00288184453945);
  S41_M_2->SetBinContent(13,0.0129682989598);
  S41_M_2->SetBinContent(14,0.0288184453945);
  S41_M_2->SetBinContent(15,0.0317002869984);
  S41_M_2->SetBinContent(16,0.0461095126311);
  S41_M_2->SetBinContent(17,0.05187320171);
  S41_M_2->SetBinContent(18,0.0403458235522);
  S41_M_2->SetBinContent(19,0.0489913542351);
  S41_M_2->SetBinContent(20,0.05187320171);
  S41_M_2->SetBinContent(21,0.0662824156007);
  S41_M_2->SetBinContent(22,0.050432275037);
  S41_M_2->SetBinContent(23,0.0446685859581);
  S41_M_2->SetBinContent(24,0.053314122512);
  S41_M_2->SetBinContent(25,0.0489913542351);
  S41_M_2->SetBinContent(26,0.0317002869984);
  S41_M_2->SetBinContent(27,0.0317002869984);
  S41_M_2->SetBinContent(28,0.0201729088406);
  S41_M_2->SetBinContent(29,0.0158501464347);
  S41_M_2->SetBinContent(30,0.0201729088406);
  S41_M_2->SetBinContent(31,0.0230547563156);
  S41_M_2->SetBinContent(32,0.0360230552753);
  S41_M_2->SetBinContent(33,0.0216138355136);
  S41_M_2->SetBinContent(34,0.0187319880386);
  S41_M_2->SetBinContent(35,0.0172910672367);
  S41_M_2->SetBinContent(36,0.0115273781578);
  S41_M_2->SetBinContent(37,0.0115273781578);
  S41_M_2->SetBinContent(38,0.0100864573558);
  S41_M_2->SetBinContent(39,0.0158501464347);
  S41_M_2->SetBinContent(40,0.00864553068283);
  S41_M_2->SetBinContent(41,0.00720460988086);
  S41_M_2->SetBinContent(42,0.00864553068283);
  S41_M_2->SetBinContent(43,0.0100864573558);
  S41_M_2->SetBinContent(44,0.00576368907889);
  S41_M_2->SetBinContent(45,0.00576368907889);
  S41_M_2->SetBinContent(46,0.00864553068283);
  S41_M_2->SetBinContent(47,0.00720460988086);
  S41_M_2->SetBinContent(48,0.00720460988086);
  S41_M_2->SetBinContent(49,0.00576368907889);
  S41_M_2->SetBinContent(50,0.00720460988086);
  S41_M_2->SetBinContent(51,0.00288184453945);
  S41_M_2->SetBinContent(52,0.00144092197617);
  S41_M_2->SetBinContent(53,0.00288184453945);
  S41_M_2->SetBinContent(54,0.00144092197617);
  S41_M_2->SetBinContent(55,0.00288184453945);
  S41_M_2->SetBinContent(56,0.0);
  S41_M_2->SetBinContent(57,0.00288184453945);
  S41_M_2->SetBinContent(58,0.00288184453945);
  S41_M_2->SetBinContent(59,0.00144092197617);
  S41_M_2->SetBinContent(60,0.0);
  S41_M_2->SetBinContent(61,0.00432276651562);
  S41_M_2->SetBinContent(62,0.00144092197617);
  S41_M_2->SetBinContent(63,0.00576368907889);
  S41_M_2->SetBinContent(64,0.00432276651562);
  S41_M_2->SetBinContent(65,0.0);
  S41_M_2->SetBinContent(66,0.00144092197617);
  S41_M_2->SetBinContent(67,0.00288184453945);
  S41_M_2->SetBinContent(68,0.00144092197617);
  S41_M_2->SetBinContent(69,0.00288184453945);
  S41_M_2->SetBinContent(70,0.0);
  S41_M_2->SetBinContent(71,0.00288184453945);
  S41_M_2->SetBinContent(72,0.00144092197617);
  S41_M_2->SetBinContent(73,0.0);
  S41_M_2->SetBinContent(74,0.0);
  S41_M_2->SetBinContent(75,0.0);
  S41_M_2->SetBinContent(76,0.0);
  S41_M_2->SetBinContent(77,0.00144092197617);
  S41_M_2->SetBinContent(78,0.00144092197617);
  S41_M_2->SetBinContent(79,0.00144092197617);
  S41_M_2->SetBinContent(80,0.0);
  S41_M_2->SetBinContent(81,0.00144092197617); // overflow
  S41_M_2->SetEntries(694);
  // Style
  S41_M_2->SetLineColor(416);
  S41_M_2->SetLineStyle(1);
  S41_M_2->SetLineWidth(1);
  S41_M_2->SetFillColor(0);
  S41_M_2->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_82","mystack");
  stack->Add(S41_M_0);
  stack->Add(S41_M_1);
  stack->Add(S41_M_2);
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
  legend->AddEntry(S41_M_0,"signal");
  legend->AddEntry(S41_M_1,"ttbar+jets");
  legend->AddEntry(S41_M_2,"t+jets");
  legend->SetFillColor(0);
  legend->SetTextSize(0.05);
  legend->SetTextFont(22);
  legend->SetY1(TMath::Max(0.15,0.97-0.10*legend->GetListOfPrimitives()->GetSize()));
  legend->Draw();

  // Saving the image
 // canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_40.png");
 // canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_40.png");
 // canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_40.eps");

}
