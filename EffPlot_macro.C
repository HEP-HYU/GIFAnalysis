void EffPlot_macro() {
    TFile *hist1 = TFile::Open("Efficiency_plot_ABS010.root");
    TFile *hist2 = TFile::Open("Efficiency_plot_ABS022.root");
    TFile *hist3 = TFile::Open("Efficiency_plot_ABS069.root");
    TFile *hist4 = TFile::Open("Efficiency_plot_ABS220.root");

std::cout << "complete1" << std::endl;

    TH1F *h1 = (TH1F*)hist1->Get("Graph");
    TH1F *h2 = (TH1F*)hist2->Get("Graph");
    TH1F *h3 = (TH1F*)hist3->Get("Graph");
    TH1F *h4 = (TH1F*)hist4->Get("Graph");

std::cout << "complete2" << std::endl;

    h1->SetLineColor(1);
    h2->SetLineColor(2);
    h3->SetLineColor(3);
    h4->SetLineColor(4);

std::cout << "complete3" << std::endl;

    
    /*h1->GetYaxis()->SetTitle("Efficiency [%]");
    h1->GetYaxis()->SetTitleOffset(1.1);
    h1->GetYaxis()->CenterTitle(true);
    h1->GetYaxis()->SetLabelSize(0.037);
    h1->GetXaxis()->SetTitle("HV_{eff.} [V]");
    h1->GetXaxis()->SetTitleOffset(1.1);
    h1->GetXaxis()->CenterTitle(true);
    h1->GetXaxis()->SetLabelSize(0.037);
    h1->SetTitle("s5 Efficiency (Trigger : s1&&s3&&s4)"); 
    */

std::cout << "complete4" << std::endl;

    h1->Draw();
    h2->Draw("SAME");
    h3->Draw("SAME");
    h4->Draw("SAME");

std::cout << "complete5" << std::endl;

    leg = new TLegend(0.1, 0.6, 0.35, 0.9);
    leg->SetHeader("LineColor - ABS");
    leg->AddEntry(h1, "ABS010", "l");
    leg->AddEntry(h2, "ABS022", "l");
    leg->AddEntry(h3, "ABS069", "l");
    leg->AddEntry(h4, "ABS220", "l");
    leg->Draw();

std::cout << "complete6" << std::endl;

    c1->Print("TrackEff_overlap_abs.pdf", "pdf");

}
