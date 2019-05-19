#include "signas3nt.h"
#include "testplan.h"

using namespace System::Collections;

int main()
{      
    TestPlan a;
    ArrayList ^casesTestPlan = a.getTestPlan("D:\\projects\\SigNAS3_Nanotech\\NAND_EXFlow_Overview_DirectAccess.csv");

    for each (testCase ^a in casesTestPlan) {
        Console::WriteLine(a->caseNumber + 
            "\t" + a->caseName +
            "\t" + a->caseTestType +
            "\t" + a->caseDataBack +
            "\t" + a->caseVoltageLevels +
            "\t" + a->caseTemperature +
            "\t" + a->caseArraySampleSize);
    }

    Console::ReadKey();

    return 0;
}