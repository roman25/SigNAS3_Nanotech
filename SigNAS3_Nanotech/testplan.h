#pragma once

using namespace System;
using namespace System::Collections;
using namespace System::IO;

ref class TestPlan
{
public:
    TestPlan();

    ArrayList ^getTestPlan(String^ pathToSettings);

    const double minVcc3V = 2.7;
    const double maxVcc3V = 3.6;

    const double minVcc1V = 1.65;
    const double maxVcc1V = 1.95;
};

value struct testCase
{
    Int32 caseNumber;
    String^ caseName;
    String^ caseTestType;
    String^ caseDataBack;
    Double caseVoltageLevels;
    String^ caseTemperature;
    String^ caseArraySampleSize;
};
