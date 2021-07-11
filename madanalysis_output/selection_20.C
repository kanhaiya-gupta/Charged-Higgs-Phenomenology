void selection_20()
{

  // ROOT version
  Int_t root_version = gROOT->GetVersionInt();

  // Creating a new TCanvas
  TCanvas* canvas = new TCanvas("canvas_plotflow_tempo41","canvas_plotflow_tempo41",0,0,800,500);
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
  TH1F* S21_M_0 = new TH1F("S21_M_0","S21_M_0",20,0.0,800.0);
  // Content
  S21_M_0->SetBinContent(0,0.0); // underflow
  S21_M_0->SetBinContent(1,0.0076271182149);
  S21_M_0->SetBinContent(2,0.0605932255862);
  S21_M_0->SetBinContent(3,0.195056499185);
  S21_M_0->SetBinContent(4,0.155320152019);
  S21_M_0->SetBinContent(5,0.0932674262566);
  S21_M_0->SetBinContent(6,0.0873822897493);
  S21_M_0->SetBinContent(7,0.0772598869867);
  S21_M_0->SetBinContent(8,0.0727401089014);
  S21_M_0->SetBinContent(9,0.0605932255862);
  S21_M_0->SetBinContent(10,0.0469397279341);
  S21_M_0->SetBinContent(11,0.0350753348071);
  S21_M_0->SetBinContent(12,0.0250000029216);
  S21_M_0->SetBinContent(13,0.0187382279794);
  S21_M_0->SetBinContent(14,0.0136534825028);
  S21_M_0->SetBinContent(15,0.00899246581593);
  S21_M_0->SetBinContent(16,0.00706214649528);
  S21_M_0->SetBinContent(17,0.00621468891584);
  S21_M_0->SetBinContent(18,0.00480225961679);
  S21_M_0->SetBinContent(19,0.00433144912904);
  S21_M_0->SetBinContent(20,0.00301318322604);
  S21_M_0->SetBinContent(21,0.016337098171); // overflow
  S21_M_0->SetEntries(21240);
  // Style
  S21_M_0->SetLineColor(600);
  S21_M_0->SetLineStyle(1);
  S21_M_0->SetLineWidth(1);
  S21_M_0->SetFillColor(0);
  S21_M_0->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_1 = new TH1F("S21_M_1","S21_M_1",20,0.0,800.0);
  // Content
  S21_M_1->SetBinContent(0,0.0); // underflow
  S21_M_1->SetBinContent(1,0.0242121831227);
  S21_M_1->SetBinContent(2,0.108234813962);
  S21_M_1->SetBinContent(3,0.172130878295);
  S21_M_1->SetBinContent(4,0.182746718694);
  S21_M_1->SetBinContent(5,0.140149375142);
  S21_M_1->SetBinContent(6,0.102709209835);
  S21_M_1->SetBinContent(7,0.07357422705);
  S21_M_1->SetBinContent(8,0.0506011075058);
  S21_M_1->SetBinContent(9,0.0368708481649);
  S21_M_1->SetBinContent(10,0.0268577762924);
  S21_M_1->SetBinContent(11,0.0187870474958);
  S21_M_1->SetBinContent(12,0.0138977253537);
  S21_M_1->SetBinContent(13,0.0102474798583);
  S21_M_1->SetBinContent(14,0.00736746890155);
  S21_M_1->SetBinContent(15,0.00606141761112);
  S21_M_1->SetBinContent(16,0.00442048003411);
  S21_M_1->SetBinContent(17,0.00405210969273);
  S21_M_1->SetBinContent(18,0.00301396481794);
  S21_M_1->SetBinContent(19,0.00221024067046);
  S21_M_1->SetBinContent(20,0.00197582124997);
  S21_M_1->SetBinContent(21,0.00987910624983); // overflow
  S21_M_1->SetEntries(29861);
  // Style
  S21_M_1->SetLineColor(1);
  S21_M_1->SetLineStyle(1);
  S21_M_1->SetLineWidth(1);
  S21_M_1->SetFillColor(0);
  S21_M_1->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_2 = new TH1F("S21_M_2","S21_M_2",20,0.0,800.0);
  // Content
  S21_M_2->SetBinContent(0,0.0); // underflow
  S21_M_2->SetBinContent(1,0.0442468556483);
  S21_M_2->SetBinContent(2,0.141011044651);
  S21_M_2->SetBinContent(3,0.192804719104);
  S21_M_2->SetBinContent(4,0.17409282911);
  S21_M_2->SetBinContent(5,0.136152167958);
  S21_M_2->SetBinContent(6,0.0918019445012);
  S21_M_2->SetBinContent(7,0.0627520100265);
  S21_M_2->SetBinContent(8,0.0416623613771);
  S21_M_2->SetBinContent(9,0.0291533149195);
  S21_M_2->SetBinContent(10,0.0233640015862);
  S21_M_2->SetBinContent(11,0.0151969380224);
  S21_M_2->SetBinContent(12,0.011785383344);
  S21_M_2->SetBinContent(13,0.00734002000533);
  S21_M_2->SetBinContent(14,0.00578930912109);
  S21_M_2->SetBinContent(15,0.00568592867629);
  S21_M_2->SetBinContent(16,0.00289465540299);
  S21_M_2->SetBinContent(17,0.00268789409216);
  S21_M_2->SetBinContent(18,0.00196423055733);
  S21_M_2->SetBinContent(19,0.00134394704608);
  S21_M_2->SetBinContent(20,0.000930424845655);
  S21_M_2->SetBinContent(21,0.00734002000533); // overflow
  S21_M_2->SetEntries(9673);
  // Style
  S21_M_2->SetLineColor(416);
  S21_M_2->SetLineStyle(1);
  S21_M_2->SetLineWidth(1);
  S21_M_2->SetFillColor(0);
  S21_M_2->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_3 = new TH1F("S21_M_3","S21_M_3",20,0.0,800.0);
  // Content
  S21_M_3->SetBinContent(0,0.0); // underflow
  S21_M_3->SetBinContent(1,0.0438652114321);
  S21_M_3->SetBinContent(2,0.194532757095);
  S21_M_3->SetBinContent(3,0.254926886546);
  S21_M_3->SetBinContent(4,0.138588673595);
  S21_M_3->SetBinContent(5,0.0991735465952);
  S21_M_3->SetBinContent(6,0.075651627759);
  S21_M_3->SetBinContent(7,0.0381436765035);
  S21_M_3->SetBinContent(8,0.0375079474074);
  S21_M_3->SetBinContent(9,0.0228862051325);
  S21_M_3->SetBinContent(10,0.0222504760363);
  S21_M_3->SetBinContent(11,0.015257471371);
  S21_M_3->SetBinContent(12,0.015257471371);
  S21_M_3->SetBinContent(13,0.00699300851342);
  S21_M_3->SetBinContent(14,0.00508582507305);
  S21_M_3->SetBinContent(15,0.00190718382518);
  S21_M_3->SetBinContent(16,0.0025429117669);
  S21_M_3->SetBinContent(17,0.0025429117669);
  S21_M_3->SetBinContent(18,0.00508582507305);
  S21_M_3->SetBinContent(19,0.000635727941726);
  S21_M_3->SetBinContent(20,0.00190718382518);
  S21_M_3->SetBinContent(21,0.015257471371); // overflow
  S21_M_3->SetEntries(1573);
  // Style
  S21_M_3->SetLineColor(632);
  S21_M_3->SetLineStyle(1);
  S21_M_3->SetLineWidth(1);
  S21_M_3->SetFillColor(0);
  S21_M_3->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_4 = new TH1F("S21_M_4","S21_M_4",20,0.0,800.0);
  // Content
  S21_M_4->SetBinContent(0,0.0); // underflow
  S21_M_4->SetBinContent(1,0.0311431835733);
  S21_M_4->SetBinContent(2,0.260919072224);
  S21_M_4->SetBinContent(3,0.389669586689);
  S21_M_4->SetBinContent(4,0.0968477298656);
  S21_M_4->SetBinContent(5,0.0558298518223);
  S21_M_4->SetBinContent(6,0.0311431835733);
  S21_M_4->SetBinContent(7,0.0311431835733);
  S21_M_4->SetBinContent(8,0.0216483065979);
  S21_M_4->SetBinContent(9,0.0174705688799);
  S21_M_4->SetBinContent(10,0.00797569275358);
  S21_M_4->SetBinContent(11,0.0106342530424);
  S21_M_4->SetBinContent(12,0.00721610276536);
  S21_M_4->SetBinContent(13,0.00493733364979);
  S21_M_4->SetBinContent(14,0.00341815452243);
  S21_M_4->SetBinContent(15,0.00455753908022);
  S21_M_4->SetBinContent(16,0.00303835910379);
  S21_M_4->SetBinContent(17,0.00265856453422);
  S21_M_4->SetBinContent(18,0.001898974546);
  S21_M_4->SetBinContent(19,0.00265856453422);
  S21_M_4->SetBinContent(20,0.00265856453422);
  S21_M_4->SetBinContent(21,0.0125332301356); // overflow
  S21_M_4->SetEntries(2633);
  // Style
  S21_M_4->SetLineColor(432);
  S21_M_4->SetLineStyle(1);
  S21_M_4->SetLineWidth(1);
  S21_M_4->SetFillColor(0);
  S21_M_4->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_5 = new TH1F("S21_M_5","S21_M_5",20,0.0,800.0);
  // Content
  S21_M_5->SetBinContent(0,0.0); // underflow
  S21_M_5->SetBinContent(1,0.0714285785395);
  S21_M_5->SetBinContent(2,0.239130387026);
  S21_M_5->SetBinContent(3,0.186335416506);
  S21_M_5->SetBinContent(4,0.121118014092);
  S21_M_5->SetBinContent(5,0.108695661841);
  S21_M_5->SetBinContent(6,0.0559006249517);
  S21_M_5->SetBinContent(7,0.048136641521);
  S21_M_5->SetBinContent(8,0.0341614952383);
  S21_M_5->SetBinContent(9,0.0310559071755);
  S21_M_5->SetBinContent(10,0.0186335416506);
  S21_M_5->SetBinContent(11,0.0186335416506);
  S21_M_5->SetBinContent(12,0.00310559071755);
  S21_M_5->SetBinContent(13,0.0108695661841);
  S21_M_5->SetBinContent(14,0.00621118010773);
  S21_M_5->SetBinContent(15,0.00776397546651);
  S21_M_5->SetBinContent(16,0.00621118010773);
  S21_M_5->SetBinContent(17,0.00310559071755);
  S21_M_5->SetBinContent(18,0.00621118010773);
  S21_M_5->SetBinContent(19,0.00465838474896);
  S21_M_5->SetBinContent(20,0.0);
  S21_M_5->SetBinContent(21,0.0186335416506); // overflow
  S21_M_5->SetEntries(644);
  // Style
  S21_M_5->SetLineColor(616);
  S21_M_5->SetLineStyle(1);
  S21_M_5->SetLineWidth(1);
  S21_M_5->SetFillColor(0);
  S21_M_5->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_6 = new TH1F("S21_M_6","S21_M_6",20,0.0,800.0);
  // Content
  S21_M_6->SetBinContent(0,0.0); // underflow
  S21_M_6->SetBinContent(1,0.0983302360273);
  S21_M_6->SetBinContent(2,0.226345085286);
  S21_M_6->SetBinContent(3,0.194805203143);
  S21_M_6->SetBinContent(4,0.115027811555);
  S21_M_6->SetBinContent(5,0.10946200482);
  S21_M_6->SetBinContent(6,0.0723562123932);
  S21_M_6->SetBinContent(7,0.0408163198951);
  S21_M_6->SetBinContent(8,0.0333951717646);
  S21_M_6->SetBinContent(9,0.0185528755036);
  S21_M_6->SetBinContent(10,0.00927643671633);
  S21_M_6->SetBinContent(11,0.0129870066397);
  S21_M_6->SetBinContent(12,0.00742114916597);
  S21_M_6->SetBinContent(13,0.0111317273731);
  S21_M_6->SetBinContent(14,0.0129870066397);
  S21_M_6->SetBinContent(15,0.00185528755036);
  S21_M_6->SetBinContent(16,0.00371057510072);
  S21_M_6->SetBinContent(17,0.00371057510072);
  S21_M_6->SetBinContent(18,0.0);
  S21_M_6->SetBinContent(19,0.00185528755036);
  S21_M_6->SetBinContent(20,0.00556586265109);
  S21_M_6->SetBinContent(21,0.0204081651249); // overflow
  S21_M_6->SetEntries(539);
  // Style
  S21_M_6->SetLineColor(797);
  S21_M_6->SetLineStyle(1);
  S21_M_6->SetLineWidth(1);
  S21_M_6->SetFillColor(0);
  S21_M_6->SetFillStyle(1001);

  // Creating a new TH1F
  TH1F* S21_M_7 = new TH1F("S21_M_7","S21_M_7",20,0.0,800.0);
  // Content
  S21_M_7->SetBinContent(0,0.0); // underflow
  S21_M_7->SetBinContent(1,0.0871794805354);
  S21_M_7->SetBinContent(2,0.239316249789);
  S21_M_7->SetBinContent(3,0.179487172699);
  S21_M_7->SetBinContent(4,0.179487172699);
  S21_M_7->SetBinContent(5,0.100854711544);
  S21_M_7->SetBinContent(6,0.0547008537477);
  S21_M_7->SetBinContent(7,0.0358974345398);
  S21_M_7->SetBinContent(8,0.0341880365209);
  S21_M_7->SetBinContent(9,0.015384617313);
  S21_M_7->SetBinContent(10,0.0136752134369);
  S21_M_7->SetBinContent(11,0.00512820518527);
  S21_M_7->SetBinContent(12,0.00854700766594);
  S21_M_7->SetBinContent(13,0.0119658095609);
  S21_M_7->SetBinContent(14,0.00170940153319);
  S21_M_7->SetBinContent(15,0.00683760964703);
  S21_M_7->SetBinContent(16,0.00341880365209);
  S21_M_7->SetBinContent(17,0.00170940153319);
  S21_M_7->SetBinContent(18,0.00854700766594);
  S21_M_7->SetBinContent(19,0.00170940153319);
  S21_M_7->SetBinContent(20,0.00170940153319);
  S21_M_7->SetBinContent(21,0.00854700766594); // overflow
  S21_M_7->SetEntries(585);
  // Style
  S21_M_7->SetLineColor(16);
  S21_M_7->SetLineStyle(1);
  S21_M_7->SetLineWidth(1);
  S21_M_7->SetFillColor(0);
  S21_M_7->SetFillStyle(1001);

  // Creating a new THStack
  THStack* stack = new THStack("mystack_42","mystack");
  stack->Add(S21_M_0);
  stack->Add(S21_M_1);
  stack->Add(S21_M_2);
  stack->Add(S21_M_3);
  stack->Add(S21_M_4);
  stack->Add(S21_M_5);
  stack->Add(S21_M_6);
  stack->Add(S21_M_7);
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
  stack->GetXaxis()->SetTitle("M [ b_{1} b_{2} ] (GeV/c^{2}) ");

  // Finalizing the TCanvas
  canvas->SetLogx(0);
  canvas->SetLogy(0);

  // Creating a TLegend
  TLegend* legend = new TLegend(.53,.65,.69,.69);
  legend->AddEntry(S21_M_0,"signal");
  legend->AddEntry(S21_M_1,"tt+barjets");
  legend->AddEntry(S21_M_2,"t+jets");
  legend->AddEntry(S21_M_3,"zz+jets");
  legend->AddEntry(S21_M_4,"wz+jets");
  legend->AddEntry(S21_M_5,"ww+jets");
  legend->AddEntry(S21_M_6,"w+jets");
  legend->AddEntry(S21_M_7,"z+jets");
  legend->SetFillColor(0);
  legend->SetTextSize(0.05);
  legend->SetTextFont(22);
  legend->SetY1(TMath::Max(0.15,0.97-0.10*legend->GetListOfPrimitives()->GetSize()));
  legend->Draw();

  // Saving the image
  canvas->SaveAs("../../HTML/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../PDF/MadAnalysis5job_0/selection_20.png");
  canvas->SaveAs("../../DVI/MadAnalysis5job_0/selection_20.eps");

}
