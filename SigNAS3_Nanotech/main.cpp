#include "signas3nt.h"
#include "testplan.h"
#include "ui_signas3nt.h"
#include "ui_settings.h"

using namespace System;
using namespace System::Windows::Forms;
    
void Main(array<String^>^ args)
{
    //Application::EnableVisualStyles();
    //Application::SetCompatibleTextRenderingDefault(false);
    SigNAS3_Nanotech::ui_signas3nt^ form = gcnew SigNAS3_Nanotech::ui_signas3nt();    
    form->ShowDialog();       
}

/*TestPlan tp("D:\\projects\\SigNAS3_Nanotech\\NAND_EXFlow_Overview_DirectAccess.csv");
ArrayList ^casesTestPlan = tp.getTestPlan();

for each (testCase ^tc in casesTestPlan)
{
    Console::WriteLine(tc->caseNumber +
        "\t" + tc->caseName +
        "\t" + tc->caseTestType +
        "\t" + tc->caseDataBack +
        "\t" + tc->caseVoltageLevels +
        "\t" + tc->caseTemperature +
        "\t" + tc->caseArraySampleSize);
}

Console::ReadKey();*/

