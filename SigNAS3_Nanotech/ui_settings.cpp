#include "ui_settings.h"

SigNAS3_Nanotech::ui_settings::ui_settings()
{
    InitializeComponent();
}

SigNAS3_Nanotech::settings SigNAS3_Nanotech::ui_settings::getSettings()
{        
    Console::WriteLine(outSettings.vendor);

    return this->outSettings;
}
