#include "ui_settings.h"

SigNAS3_Nanotech::ui_settings::ui_settings()
{
    InitializeComponent();
}

SigNAS3_Nanotech::settings SigNAS3_Nanotech::ui_settings::getNandSettings()
{        
    //Console::WriteLine("getSettings " + cbVendor->SelectedIndex);

    return outSettings;
}

void SigNAS3_Nanotech::ui_settings::butSet_Click(System::Object^ Sender, System::EventArgs^ Args)
{
    outSettings.vendor = cbVendor->SelectedIndex;
    outSettings.type = cbType->SelectedIndex;
    outSettings.subtype = cbSubType->SelectedIndex;
    outSettings.ifMode = cbIfMode->SelectedIndex;
    outSettings.blockSize = cbBlockSize->SelectedIndex;

    Close();
    //Console::WriteLine(s.vendor);
}