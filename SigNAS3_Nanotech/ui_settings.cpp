#include "ui_settings.h"

SigNAS3_Nanotech::ui_settings::ui_settings()
{
    InitializeComponent();
}

SigNAS3_Nanotech::settings SigNAS3_Nanotech::ui_settings::getNandSettings()
{            
    return outSettings;
}

void SigNAS3_Nanotech::ui_settings::cbVendor_SelectedIndexChanged(Object^ sender, System::EventArgs^ e)
{   
    
    if (cbVendor->SelectedIndex == 1)
    {             
        this->cbType->Items->Clear();
        this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"SLC", L"MLC", L"TLC", L"TLC_3D", L"MLC_SLCMODE", L"TLC_3D_SLCMODE" });
    }

    else if (cbVendor->SelectedIndex == 2)
    {
        this->cbType->Items->Clear();
        this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"SLC", L"MLC", L"TLC", L"TLC_3D", L"TLC_SLCMODE"});
    }
    else if (cbVendor->SelectedIndex == 3)
    {
        this->cbType->Items->Clear();
        this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SLC", L"MLC"});
    }
    else if (cbVendor->SelectedIndex == 4)
    {
        this->cbType->Items->Clear();
        this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"SLC", L"MLC", L"TLC", L"TLC_3D", L"MLC_SLCMODE", L"TLC_3D_SLCMODE"});
    }
    else if (cbVendor->SelectedIndex == 5)
    {
        this->cbType->Items->Clear();
        this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"SLC", L"MLC", L"TLC", L"MLC_3D", L"TLC_3D", L"MLC_3D_SLCMODE", L"TLC_3D_SLCMODE"});
    }
}


void SigNAS3_Nanotech::ui_settings::butSet_Click(System::Object^ Sender, System::EventArgs^ Args)
{
    // NAND settings
    outSettings.vendor      = cbVendor->SelectedIndex;
    outSettings.type        = cbType->SelectedIndex;
    outSettings.subtype     = cbSubType->SelectedIndex;
    outSettings.ifMode      = cbIfMode->SelectedIndex;
    outSettings.blockSize   = cbBlockSize->SelectedIndex;
    outSettings.pageSize    = (int)numPageSize->Value;

    if (cbEdoMode->Checked)
    {
        outSettings.edoMode = true;
    }
    else
    {
        outSettings.edoMode = false;
    }

    // Voltage settings
    outSettings.baseClock   = (int)numBaseClock->Value;
    outSettings.core        = cbCore->SelectedIndex;
    outSettings.io          = cbIO->SelectedIndex;
    
    if (cbVref->Checked)
    {
        outSettings.vRef = true;
    }
    else
    {
        outSettings.vRef = false;
    }
    
    if (cbReset->Checked)
    {
        outSettings.reset = true;
    }
    else
    {
        outSettings.reset = false;
    }

    // Address settings
    outSettings.targSel = gcnew List<int>();
    if (cbTarget0->Checked)
    {
        outSettings.targSel->Add(0);
    }
    if (cbTarget1->Checked)
    {
        outSettings.targSel->Add(1);
    }
    if (cbTarget2->Checked)
    {
        outSettings.targSel->Add(2);
    }
    if (cbTarget3->Checked)
    {
        outSettings.targSel->Add(3);
    }
    if (cbTarget4->Checked)
    {
        outSettings.targSel->Add(4);
    }
    if (cbTarget5->Checked)
    {
        outSettings.targSel->Add(5);
    }
    if (cbTarget6->Checked)
    {
        outSettings.targSel->Add(6);
    }
    if (cbTarget7->Checked)
    {
        outSettings.targSel->Add(7);
    }

    outSettings.lunTarg     = (int)numLunTar->Value;
    outSettings.blockLun    = (int)numBlocksLun->Value;
    outSettings.lunSeparat  = (int)numLunSep->Value;

    // Test settings

    String^ nandIdValue = "";
    nandIdValue += tb0->Text + ",";
    nandIdValue += tb1->Text + ",";
    nandIdValue += tb2->Text + ",";
    nandIdValue += tb3->Text + ",";
    nandIdValue += tb4->Text + ",";
    nandIdValue += tb5->Text + ",";
    nandIdValue += tb6->Text + ",";
    nandIdValue += tb7->Text;

    outSettings.nandID              = nandIdValue;
    outSettings.totalBB             = (int)numTotalBB->Value;
    outSettings.badBlockByte        = (int)numBadBlockByte->Value;
    outSettings.codeLength          = (int)numCodeLength->Value;
    outSettings.bitCorrectability   = (int)numBitCorrectability->Value;
    outSettings.erase               = (int)numErase->Value;
    outSettings.program             = (int)numProgram->Value;
    outSettings.read                = (int)numErase->Value;

    Close();
    
}