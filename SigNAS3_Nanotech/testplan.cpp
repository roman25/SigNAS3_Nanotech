#include "testplan.h"

TestPlan::TestPlan()
{
}

ArrayList ^TestPlan::getTestPlan(String^ pathToSettings)
{  
    /*
        Converts input text data with test plan into
        settings for SigNAS hardware
    */

    // Storage with settings
    ArrayList ^casesTestPlan = gcnew Collections::ArrayList();

    // Check file is exists
    if (File::Exists(pathToSettings))
    {
        // Create reader
        StreamReader ^sr = File::OpenText(pathToSettings);
        String ^inputLine = "";

        // Read every line in file
        while (inputLine = sr->ReadLine())
        {
            testCase structSettings;

            // Split string data into array
            array <String ^> ^inputData = inputLine->Split(';');

            // Write settings
            structSettings.caseNumber   = Convert::ToInt32(inputData[0]);
            structSettings.caseName     = inputData[1];
            structSettings.caseTestType = inputData[2];
            structSettings.caseDataBack = inputData[3];
            
            if (inputData[4] == "Min_Vcc")
            {
                if (true)
                {
                    structSettings.caseVoltageLevels = minVcc3V;
                }
                else
                {
                    structSettings.caseVoltageLevels = minVcc1V;
                }
            }
            else if (inputData[4] == "Max_Vcc")
            {
                if (true)
                {
                    structSettings.caseVoltageLevels = maxVcc3V;
                }
                else
                {
                    structSettings.caseVoltageLevels = maxVcc1V;
                }
            }

            structSettings.caseTemperature      = inputData[5];
            structSettings.caseArraySampleSize  = inputData[6];

            casesTestPlan->Add(structSettings);
        }
    }
    else
    {
        Console::WriteLine("Error");
    }

    return casesTestPlan;
}
