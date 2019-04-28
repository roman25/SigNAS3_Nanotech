#pragma once
#include <string>

using namespace SigNAS3Library;

ref class SigNAS3NT
{
public:
    SigNAS3NT();


    void New();
    void RefreshLane();
    void RefreshSettings();
    void RefreshVendor();
    void RefreshType();
    void RefreshSubType();
    void RefreshIFMode();
    void RefreshBlockSize();
    void RefreshPageSize();
    void RefreshEDOMode();
    void RefreshBaseClock();
    void RefreshtWH();
    void RefreshtWP();
    void RefreshtREH();
    void RefreshtRP();
    void RefreshVCore();
    void RefreshVIO();
    void RefreshVref();
    void RefreshVReset();
    void RefreshLUNperTarget();
    void RefreshBlocksperLUN();
    void RefreshLUNSeperation();
    void RefreshBBSByteOffset();
    void RefreshBBSThreshold();
    void RefreshBCHCodeLength();
    void RefreshBCHBitCorrectability();
    void RefreshMaxtErase();
    void RefreshMaxtProgram();
    void RefreshMaxtRead();
    void RefreshResultFile();
    void RefreshConnect();
    void RefreshProcessing();

    void RefreshChannelSelect(Int32 channel);
    void RefreshTargetSelect(Int32 chip);
    void RefreshNANDID(Int32 id);
    void RefreshLUNStatus(Int32 channel, Int32 chip, Int32 lun);
    void RefreshStatus(Boolean addTimer);    
    void GetTypeCodeFromString(array<String^>^ str, array<SigNAS3Library.NandParameter.TypeCode>^ &myTypeCode);
    void GetSubTypeCodeFromString(array<String^>^ str, array<SigNAS3Library.NandParameter.SubTypeCode>^ &mySubTypeCode);
    void GetBlockSizeFromString(array<String^>^ str, array<Int32>^ &myBlockSize);

    String^ HexCheck(String^ str, Int32 len, String^ oldstr);

    Int32 GetVendorIndex(SigNAS3Library.NandParameter.VendorCode myvendor, array<SigNAS3Library.NandParameter.VendorCode>^ myvendorlist);
    Int32 GetTypeIndex(SigNAS3Library.NandParameter.TypeCode mytype, array <SigNAS3Library.NandParameter.TypeCode>^ mytypelist);
};

