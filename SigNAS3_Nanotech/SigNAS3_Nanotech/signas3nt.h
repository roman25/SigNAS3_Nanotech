#pragma once

using namespace SigNAS3Library;
using namespace System;

ref class SigNAS3NT
{
public:
    SigNAS3NT();

    Int32 myLane = 0;

    array<NandParameter::VendorCode>^ myVendors = gcnew array<NandParameter::VendorCode>(7);

    Boolean flag_opened;
               
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
    /*void GetTypeCodeFromString(array<String^>^ str, array<NandParameter::TypeCode>^ &myTypeCode);
    void GetSubTypeCodeFromString(array<String^>^ str, array<NandParameter::SubTypeCode>^ &mySubTypeCode);
    void GetBlockSizeFromString(array<String^>^ str, array<Int32>^ &myBlockSize);

    String^ HexCheck(String^ str, Int32 len, String^ oldstr);

    Int32 GetVendorIndex(NandParameter::VendorCode myvendor, array<NandParameter::VendorCode>^ myvendorlist);
    Int32 GetTypeIndex(NandParameter::TypeCode mytype, array <NandParameter::TypeCode>^ mytypelist);
    Int32 GetSubTypeIndex(NandParameter::SubTypeCode mysubtype, array<NandParameter::SubTypeCode>^ mysubtypelist);
    Int32 GetIFModeIndex(NandParameter::IFModeCode myifmode, array <NandParameter::IFModeCode>^ myifmodelist);
    Int32 GetBlockSizeIndex(Int32 myblocksize, array<Int32>^ myblocksizelist);

    void BT_USBConnect_Click(sender As Object, e As EventArgs) Handles BT_USBConnect.Click;
    void RB_Lane_CheckedChanged(sender As Object, e As EventArgs) Handles RB_Lane0.CheckedChanged, RB_Lane1.CheckedChanged, RB_Lane2.CheckedChanged, RB_Lane3.CheckedChanged, RB_Lane4.CheckedChanged, RB_Lane5.CheckedChanged, RB_Lane6.CheckedChanged, RB_Lane7.CheckedChanged;
    void CX_CH_CheckedChanged(sender As Object, e As EventArgs) Handles CX_CH0.CheckedChanged, CX_CH1.CheckedChanged, CX_CH2.CheckedChanged, CX_CH3.CheckedChanged, CX_CH4.CheckedChanged, CX_CH5.CheckedChanged, CX_CH6.CheckedChanged, CX_CH7.CheckedChanged, CX_CH8.CheckedChanged, CX_CH9.CheckedChanged, CX_CH10.CheckedChanged, CX_CH11.CheckedChanged, CX_CH12.CheckedChanged, CX_CH13.CheckedChanged, CX_CH14.CheckedChanged, CX_CH15.CheckedChanged;
    void CX_Target_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Target0.CheckedChanged, CX_Target2.CheckedChanged, CX_Target4.CheckedChanged, CX_Target6.CheckedChanged, CX_Target1.CheckedChanged, CX_Target3.CheckedChanged, CX_Target5.CheckedChanged, CX_Target7.CheckedChanged;
    void NUD_LUNperTarget_ValueChanged(sender As Object, e As EventArgs) Handles NUD_LUNperTarget.ValueChanged;
    void NUD_BlocksperLUN_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BlocksperLUN.ValueChanged;
    void NUD_LUNSeperation_ValueChanged(sender As Object, e As EventArgs) Handles NUD_LUNSeperation.ValueChanged;
    void CB_VCore_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_VCore.SelectedIndexChanged;
    void CB_VIO_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_VIO.SelectedIndexChanged;
    void CX_Vref_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Vref.CheckedChanged;
    void CX_Reset_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Reset.CheckedChanged;
    void TB_NANDID_Leave(sender As Object, e As EventArgs) Handles TB_NANDIDB0.Leave, TB_NANDIDB1.Leave, TB_NANDIDB2.Leave, TB_NANDIDB3.Leave, TB_NANDIDB4.Leave, TB_NANDIDB5.Leave, TB_NANDIDB6.Leave, TB_NANDIDB7.Leave;
    void NUD_BBSByteOffset_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BBSByteOffset.ValueChanged;
    void NUD_BBSThreshold_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BBSThreshold.ValueChanged;
    void NUD_BCHCodeLength_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BCHCodeLength.ValueChanged;
    void NUD_BCHBitCorrectability_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BCHBitCorrectability.ValueChanged;
    void NUD_MaxtErase_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtErase.ValueChanged;
    void NUD_MaxtProgram_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtProgram.ValueChanged;
    void NUD_MaxtRead_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtRead.ValueChanged;
    void CB_Vendor_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Vendor.SelectedIndexChanged;
    void CB_Type_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Type.SelectedIndexChanged;
    void CB_Subtype_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Subtype.SelectedIndexChanged;
    void CB_IFMode_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_IFMode.SelectedIndexChanged;
    void CB_BlockSize_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_BlockSize.SelectedIndexChanged;
    void NUD_Pagesize_ValueChanged(sender As Object, e As EventArgs) Handles NUD_Pagesize.ValueChanged;
    void CX_ED0_CheckedChanged(sender As Object, e As EventArgs) Handles CX_EDO.CheckedChanged;
    void NUD_BaseClock_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BaseClock.ValueChanged;
    void NUD_tWH_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tWH.ValueChanged;
    void NUD_tWP_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tWP.ValueChanged;
    void NUD_tREH_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tREH.ValueChanged;
    void NUD_tRP_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tRP.ValueChanged;
    void BT_ResultFile_Click(sender As Object, e As EventArgs) Handles BT_ResultFile.Click;
    void BT_LoadSettings_Click(sender As Object, e As EventArgs) Handles BT_LoadSettings.Click;
    void BT_SaveSettings_Click(sender As Object, e As EventArgs) Handles BT_SaveSettings.Click;
    void BT_Execute_Click(sender As Object, e As EventArgs) Handles BT_Execute.Click;
    void ExecuteCallback(ar As IAsyncResult);

    Boolean Execute(Int32 Lane, Int32 &r_Lane);

    void BT_Abort_Click(sender As Object, e As EventArgs) Handles BT_Abort.Click;
    void L_LUN_MouseHover(sender As Object, e As EventArgs) Handles L_CH0Target0LUN0.MouseHover, L_CH0Target0LUN1.MouseHover, L_CH0Target0LUN2.MouseHover, L_CH0Target0LUN3.MouseHover, L_CH0Target2LUN0.MouseHover, L_CH0Target2LUN1.MouseHover, L_CH0Target2LUN2.MouseHover, L_CH0Target2LUN3.MouseHover, L_CH0Target4LUN0.MouseHover, L_CH0Target4LUN1.MouseHover, L_CH0Target4LUN2.MouseHover, L_CH0Target4LUN3.MouseHover, L_CH0Target6LUN0.MouseHover, L_CH0Target6LUN1.MouseHover, L_CH0Target6LUN2.MouseHover, L_CH0Target6LUN3.MouseHover, L_CH0Target1LUN0.MouseHover, L_CH0Target1LUN1.MouseHover, L_CH0Target1LUN2.MouseHover, L_CH0Target1LUN3.MouseHover, L_CH0Target3LUN0.MouseHover, L_CH0Target3LUN1.MouseHover, L_CH0Target3LUN2.MouseHover, L_CH0Target3LUN3.MouseHover, L_CH0Target5LUN0.MouseHover, L_CH0Target5LUN1.MouseHover, L_CH0Target5LUN2.MouseHover, L_CH0Target5LUN3.MouseHover, L_CH0Target7LUN0.MouseHover, L_CH0Target7LUN1.MouseHover, L_CH0Target7LUN2.MouseHover, L_CH0Target7LUN3.MouseHover, L_CH1Target0LUN0.MouseHover, L_CH1Target0LUN1.MouseHover, L_CH1Target0LUN2.MouseHover, L_CH1Target0LUN3.MouseHover, L_CH1Target2LUN0.MouseHover, L_CH1Target2LUN1.MouseHover, L_CH1Target2LUN2.MouseHover, L_CH1Target2LUN3.MouseHover, L_CH1Target4LUN0.MouseHover, L_CH1Target4LUN1.MouseHover, L_CH1Target4LUN2.MouseHover, L_CH1Target4LUN3.MouseHover, L_CH1Target6LUN0.MouseHover, L_CH1Target6LUN1.MouseHover, L_CH1Target6LUN2.MouseHover, L_CH1Target6LUN3.MouseHover, L_CH1Target1LUN0.MouseHover, L_CH1Target1LUN1.MouseHover, L_CH1Target1LUN2.MouseHover, L_CH1Target1LUN3.MouseHover, L_CH1Target3LUN0.MouseHover, L_CH1Target3LUN1.MouseHover, L_CH1Target3LUN2.MouseHover, L_CH1Target3LUN3.MouseHover, L_CH1Target5LUN0.MouseHover, L_CH1Target5LUN1.MouseHover, L_CH1Target5LUN2.MouseHover, L_CH1Target5LUN3.MouseHover, L_CH1Target7LUN0.MouseHover, L_CH1Target7LUN1.MouseHover, L_CH1Target7LUN2.MouseHover, L_CH1Target7LUN3.MouseHover, L_CH2Target0LUN0.MouseHover, L_CH2Target0LUN1.MouseHover, L_CH2Target0LUN2.MouseHover, L_CH2Target0LUN3.MouseHover, L_CH2Target2LUN0.MouseHover, L_CH2Target2LUN1.MouseHover, L_CH2Target2LUN2.MouseHover, L_CH2Target2LUN3.MouseHover, L_CH2Target4LUN0.MouseHover, L_CH2Target4LUN1.MouseHover, L_CH2Target4LUN2.MouseHover, L_CH2Target4LUN3.MouseHover, L_CH2Target6LUN0.MouseHover, L_CH2Target6LUN1.MouseHover, L_CH2Target6LUN2.MouseHover, L_CH2Target6LUN3.MouseHover, L_CH2Target1LUN0.MouseHover, L_CH2Target1LUN1.MouseHover, L_CH2Target1LUN2.MouseHover, L_CH2Target1LUN3.MouseHover, L_CH2Target3LUN0.MouseHover, L_CH2Target3LUN1.MouseHover, L_CH2Target3LUN2.MouseHover, L_CH2Target3LUN3.MouseHover, L_CH2Target5LUN0.MouseHover, L_CH2Target5LUN1.MouseHover, L_CH2Target5LUN2.MouseHover, L_CH2Target5LUN3.MouseHover, L_CH2Target7LUN0.MouseHover, L_CH2Target7LUN1.MouseHover, L_CH2Target7LUN2.MouseHover, L_CH2Target7LUN3.MouseHover, L_CH3Target0LUN0.MouseHover, L_CH3Target0LUN1.MouseHover, L_CH3Target0LUN2.MouseHover, L_CH3Target0LUN3.MouseHover, L_CH3Target2LUN0.MouseHover, L_CH3Target2LUN1.MouseHover, L_CH3Target2LUN2.MouseHover, L_CH3Target2LUN3.MouseHover, L_CH3Target4LUN0.MouseHover, L_CH3Target4LUN1.MouseHover, L_CH3Target4LUN2.MouseHover, L_CH3Target4LUN3.MouseHover, L_CH3Target6LUN0.MouseHover, L_CH3Target6LUN1.MouseHover, L_CH3Target6LUN2.MouseHover, L_CH3Target6LUN3.MouseHover, L_CH3Target1LUN0.MouseHover, L_CH3Target1LUN1.MouseHover, L_CH3Target1LUN2.MouseHover, L_CH3Target1LUN3.MouseHover, L_CH3Target3LUN0.MouseHover, L_CH3Target3LUN1.MouseHover, L_CH3Target3LUN2.MouseHover, L_CH3Target3LUN3.MouseHover, L_CH3Target5LUN0.MouseHover, L_CH3Target5LUN1.MouseHover, L_CH3Target5LUN2.MouseHover, L_CH3Target5LUN3.MouseHover, L_CH3Target7LUN0.MouseHover, L_CH3Target7LUN1.MouseHover, L_CH3Target7LUN2.MouseHover, L_CH3Target7LUN3.MouseHover, L_CH4Target0LUN0.MouseHover, L_CH4Target0LUN1.MouseHover, L_CH4Target0LUN2.MouseHover, L_CH4Target0LUN3.MouseHover, L_CH4Target2LUN0.MouseHover, L_CH4Target2LUN1.MouseHover, L_CH4Target2LUN2.MouseHover, L_CH4Target2LUN3.MouseHover, L_CH4Target4LUN0.MouseHover, L_CH4Target4LUN1.MouseHover, L_CH4Target4LUN2.MouseHover, L_CH4Target4LUN3.MouseHover, L_CH4Target6LUN0.MouseHover, L_CH4Target6LUN1.MouseHover, L_CH4Target6LUN2.MouseHover, L_CH4Target6LUN3.MouseHover, L_CH4Target1LUN0.MouseHover, L_CH4Target1LUN1.MouseHover, L_CH4Target1LUN2.MouseHover, L_CH4Target1LUN3.MouseHover, L_CH4Target3LUN0.MouseHover, L_CH4Target3LUN1.MouseHover, L_CH4Target3LUN2.MouseHover, L_CH4Target3LUN3.MouseHover, L_CH4Target5LUN0.MouseHover, L_CH4Target5LUN1.MouseHover, L_CH4Target5LUN2.MouseHover, L_CH4Target5LUN3.MouseHover, L_CH4Target7LUN0.MouseHover, L_CH4Target7LUN1.MouseHover, L_CH4Target7LUN2.MouseHover, L_CH4Target7LUN3.MouseHover, L_CH5Target0LUN0.MouseHover, L_CH5Target0LUN1.MouseHover, L_CH5Target0LUN2.MouseHover, L_CH5Target0LUN3.MouseHover, L_CH5Target2LUN0.MouseHover, L_CH5Target2LUN1.MouseHover, L_CH5Target2LUN2.MouseHover, L_CH5Target2LUN3.MouseHover, L_CH5Target4LUN0.MouseHover, L_CH5Target4LUN1.MouseHover, L_CH5Target4LUN2.MouseHover, L_CH5Target4LUN3.MouseHover, L_CH5Target6LUN0.MouseHover, L_CH5Target6LUN1.MouseHover, L_CH5Target6LUN2.MouseHover, L_CH5Target6LUN3.MouseHover, L_CH5Target1LUN0.MouseHover, L_CH5Target1LUN1.MouseHover, L_CH5Target1LUN2.MouseHover, L_CH5Target1LUN3.MouseHover, L_CH5Target3LUN0.MouseHover, L_CH5Target3LUN1.MouseHover, L_CH5Target3LUN2.MouseHover, L_CH5Target3LUN3.MouseHover, L_CH5Target5LUN0.MouseHover, L_CH5Target5LUN1.MouseHover, L_CH5Target5LUN2.MouseHover, L_CH5Target5LUN3.MouseHover, L_CH5Target7LUN0.MouseHover, L_CH5Target7LUN1.MouseHover, L_CH5Target7LUN2.MouseHover, L_CH5Target7LUN3.MouseHover, L_CH6Target0LUN0.MouseHover, L_CH6Target0LUN1.MouseHover, L_CH6Target0LUN2.MouseHover, L_CH6Target0LUN3.MouseHover, L_CH6Target2LUN0.MouseHover, L_CH6Target2LUN1.MouseHover, L_CH6Target2LUN2.MouseHover, L_CH6Target2LUN3.MouseHover, L_CH6Target4LUN0.MouseHover, L_CH6Target4LUN1.MouseHover, L_CH6Target4LUN2.MouseHover, L_CH6Target4LUN3.MouseHover, L_CH6Target6LUN0.MouseHover, L_CH6Target6LUN1.MouseHover, L_CH6Target6LUN2.MouseHover, L_CH6Target6LUN3.MouseHover, L_CH6Target1LUN0.MouseHover, L_CH6Target1LUN1.MouseHover, L_CH6Target1LUN2.MouseHover, L_CH6Target1LUN3.MouseHover, L_CH6Target3LUN0.MouseHover, L_CH6Target3LUN1.MouseHover, L_CH6Target3LUN2.MouseHover, L_CH6Target3LUN3.MouseHover, L_CH6Target5LUN0.MouseHover, L_CH6Target5LUN1.MouseHover, L_CH6Target5LUN2.MouseHover, L_CH6Target5LUN3.MouseHover, L_CH6Target7LUN0.MouseHover, L_CH6Target7LUN1.MouseHover, L_CH6Target7LUN2.MouseHover, L_CH6Target7LUN3.MouseHover, L_CH7Target0LUN0.MouseHover, L_CH7Target0LUN1.MouseHover, L_CH7Target0LUN2.MouseHover, L_CH7Target0LUN3.MouseHover, L_CH7Target2LUN0.MouseHover, L_CH7Target2LUN1.MouseHover, L_CH7Target2LUN2.MouseHover, L_CH7Target2LUN3.MouseHover, L_CH7Target4LUN0.MouseHover, L_CH7Target4LUN1.MouseHover, L_CH7Target4LUN2.MouseHover, L_CH7Target4LUN3.MouseHover, L_CH7Target6LUN0.MouseHover, L_CH7Target6LUN1.MouseHover, L_CH7Target6LUN2.MouseHover, L_CH7Target6LUN3.MouseHover, L_CH7Target1LUN0.MouseHover, L_CH7Target1LUN1.MouseHover, L_CH7Target1LUN2.MouseHover, L_CH7Target1LUN3.MouseHover, L_CH7Target3LUN0.MouseHover, L_CH7Target3LUN1.MouseHover, L_CH7Target3LUN2.MouseHover, L_CH7Target3LUN3.MouseHover, L_CH7Target5LUN0.MouseHover, L_CH7Target5LUN1.MouseHover, L_CH7Target5LUN2.MouseHover, L_CH7Target5LUN3.MouseHover, L_CH7Target7LUN0.MouseHover, L_CH7Target7LUN1.MouseHover, L_CH7Target7LUN2.MouseHover, L_CH7Target7LUN3.MouseHover, L_CH8Target0LUN0.MouseHover, L_CH8Target0LUN1.MouseHover, L_CH8Target0LUN2.MouseHover, L_CH8Target0LUN3.MouseHover, L_CH8Target2LUN0.MouseHover, L_CH8Target2LUN1.MouseHover, L_CH8Target2LUN2.MouseHover, L_CH8Target2LUN3.MouseHover, L_CH8Target4LUN0.MouseHover, L_CH8Target4LUN1.MouseHover, L_CH8Target4LUN2.MouseHover, L_CH8Target4LUN3.MouseHover, L_CH8Target6LUN0.MouseHover, L_CH8Target6LUN1.MouseHover, L_CH8Target6LUN2.MouseHover, L_CH8Target6LUN3.MouseHover, L_CH8Target1LUN0.MouseHover, L_CH8Target1LUN1.MouseHover, L_CH8Target1LUN2.MouseHover, L_CH8Target1LUN3.MouseHover, L_CH8Target3LUN0.MouseHover, L_CH8Target3LUN1.MouseHover, L_CH8Target3LUN2.MouseHover, L_CH8Target3LUN3.MouseHover, L_CH8Target5LUN0.MouseHover, L_CH8Target5LUN1.MouseHover, L_CH8Target5LUN2.MouseHover, L_CH8Target5LUN3.MouseHover, L_CH8Target7LUN0.MouseHover, L_CH8Target7LUN1.MouseHover, L_CH8Target7LUN2.MouseHover, L_CH8Target7LUN3.MouseHover, L_CH9Target0LUN0.MouseHover, L_CH9Target0LUN1.MouseHover, L_CH9Target0LUN2.MouseHover, L_CH9Target0LUN3.MouseHover, L_CH9Target2LUN0.MouseHover, L_CH9Target2LUN1.MouseHover, L_CH9Target2LUN2.MouseHover, L_CH9Target2LUN3.MouseHover, L_CH9Target4LUN0.MouseHover, L_CH9Target4LUN1.MouseHover, L_CH9Target4LUN2.MouseHover, L_CH9Target4LUN3.MouseHover, L_CH9Target6LUN0.MouseHover, L_CH9Target6LUN1.MouseHover, L_CH9Target6LUN2.MouseHover, L_CH9Target6LUN3.MouseHover, L_CH9Target1LUN0.MouseHover, L_CH9Target1LUN1.MouseHover, L_CH9Target1LUN2.MouseHover, L_CH9Target1LUN3.MouseHover, L_CH9Target3LUN0.MouseHover, L_CH9Target3LUN1.MouseHover, L_CH9Target3LUN2.MouseHover, L_CH9Target3LUN3.MouseHover, L_CH9Target5LUN0.MouseHover, L_CH9Target5LUN1.MouseHover, L_CH9Target5LUN2.MouseHover, L_CH9Target5LUN3.MouseHover, L_CH9Target7LUN0.MouseHover, L_CH9Target7LUN1.MouseHover, L_CH9Target7LUN2.MouseHover, L_CH9Target7LUN3.MouseHover, L_CH10Target0LUN0.MouseHover, L_CH10Target0LUN1.MouseHover, L_CH10Target0LUN2.MouseHover, L_CH10Target0LUN3.MouseHover, L_CH10Target2LUN0.MouseHover, L_CH10Target2LUN1.MouseHover, L_CH10Target2LUN2.MouseHover, L_CH10Target2LUN3.MouseHover, L_CH10Target4LUN0.MouseHover, L_CH10Target4LUN1.MouseHover, L_CH10Target4LUN2.MouseHover, L_CH10Target4LUN3.MouseHover, L_CH10Target6LUN0.MouseHover, L_CH10Target6LUN1.MouseHover, L_CH10Target6LUN2.MouseHover, L_CH10Target6LUN3.MouseHover, L_CH10Target1LUN0.MouseHover, L_CH10Target1LUN1.MouseHover, L_CH10Target1LUN2.MouseHover, L_CH10Target1LUN3.MouseHover, L_CH10Target3LUN0.MouseHover, L_CH10Target3LUN1.MouseHover, L_CH10Target3LUN2.MouseHover, L_CH10Target3LUN3.MouseHover, L_CH10Target5LUN0.MouseHover, L_CH10Target5LUN1.MouseHover, L_CH10Target5LUN2.MouseHover, L_CH10Target5LUN3.MouseHover, L_CH10Target7LUN0.MouseHover, L_CH10Target7LUN1.MouseHover, L_CH10Target7LUN2.MouseHover, L_CH10Target7LUN3.MouseHover, L_CH11Target0LUN0.MouseHover, L_CH11Target0LUN1.MouseHover, L_CH11Target0LUN2.MouseHover, L_CH11Target0LUN3.MouseHover, L_CH11Target2LUN0.MouseHover, L_CH11Target2LUN1.MouseHover, L_CH11Target2LUN2.MouseHover, L_CH11Target2LUN3.MouseHover, L_CH11Target4LUN0.MouseHover, L_CH11Target4LUN1.MouseHover, L_CH11Target4LUN2.MouseHover, L_CH11Target4LUN3.MouseHover, L_CH11Target6LUN0.MouseHover, L_CH11Target6LUN1.MouseHover, L_CH11Target6LUN2.MouseHover, L_CH11Target6LUN3.MouseHover, L_CH11Target1LUN0.MouseHover, L_CH11Target1LUN1.MouseHover, L_CH11Target1LUN2.MouseHover, L_CH11Target1LUN3.MouseHover, L_CH11Target3LUN0.MouseHover, L_CH11Target3LUN1.MouseHover, L_CH11Target3LUN2.MouseHover, L_CH11Target3LUN3.MouseHover, L_CH11Target5LUN0.MouseHover, L_CH11Target5LUN1.MouseHover, L_CH11Target5LUN2.MouseHover, L_CH11Target5LUN3.MouseHover, L_CH11Target7LUN0.MouseHover, L_CH11Target7LUN1.MouseHover, L_CH11Target7LUN2.MouseHover, L_CH11Target7LUN3.MouseHover, L_CH12Target0LUN0.MouseHover, L_CH12Target0LUN1.MouseHover, L_CH12Target0LUN2.MouseHover, L_CH12Target0LUN3.MouseHover, L_CH12Target2LUN0.MouseHover, L_CH12Target2LUN1.MouseHover, L_CH12Target2LUN2.MouseHover, L_CH12Target2LUN3.MouseHover, L_CH12Target4LUN0.MouseHover, L_CH12Target4LUN1.MouseHover, L_CH12Target4LUN2.MouseHover, L_CH12Target4LUN3.MouseHover, L_CH12Target6LUN0.MouseHover, L_CH12Target6LUN1.MouseHover, L_CH12Target6LUN2.MouseHover, L_CH12Target6LUN3.MouseHover, L_CH12Target1LUN0.MouseHover, L_CH12Target1LUN1.MouseHover, L_CH12Target1LUN2.MouseHover, L_CH12Target1LUN3.MouseHover, L_CH12Target3LUN0.MouseHover, L_CH12Target3LUN1.MouseHover, L_CH12Target3LUN2.MouseHover, L_CH12Target3LUN3.MouseHover, L_CH12Target5LUN0.MouseHover, L_CH12Target5LUN1.MouseHover, L_CH12Target5LUN2.MouseHover, L_CH12Target5LUN3.MouseHover, L_CH12Target7LUN0.MouseHover, L_CH12Target7LUN1.MouseHover, L_CH12Target7LUN2.MouseHover, L_CH12Target7LUN3.MouseHover, L_CH13Target0LUN0.MouseHover, L_CH13Target0LUN1.MouseHover, L_CH13Target0LUN2.MouseHover, L_CH13Target0LUN3.MouseHover, L_CH13Target2LUN0.MouseHover, L_CH13Target2LUN1.MouseHover, L_CH13Target2LUN2.MouseHover, L_CH13Target2LUN3.MouseHover, L_CH13Target4LUN0.MouseHover, L_CH13Target4LUN1.MouseHover, L_CH13Target4LUN2.MouseHover, L_CH13Target4LUN3.MouseHover, L_CH13Target6LUN0.MouseHover, L_CH13Target6LUN1.MouseHover, L_CH13Target6LUN2.MouseHover, L_CH13Target6LUN3.MouseHover, L_CH13Target1LUN0.MouseHover, L_CH13Target1LUN1.MouseHover, L_CH13Target1LUN2.MouseHover, L_CH13Target1LUN3.MouseHover, L_CH13Target3LUN0.MouseHover, L_CH13Target3LUN1.MouseHover, L_CH13Target3LUN2.MouseHover, L_CH13Target3LUN3.MouseHover, L_CH13Target5LUN0.MouseHover, L_CH13Target5LUN1.MouseHover, L_CH13Target5LUN2.MouseHover, L_CH13Target5LUN3.MouseHover, L_CH13Target7LUN0.MouseHover, L_CH13Target7LUN1.MouseHover, L_CH13Target7LUN2.MouseHover, L_CH13Target7LUN3.MouseHover, L_CH14Target0LUN0.MouseHover, L_CH14Target0LUN1.MouseHover, L_CH14Target0LUN2.MouseHover, L_CH14Target0LUN3.MouseHover, L_CH14Target2LUN0.MouseHover, L_CH14Target2LUN1.MouseHover, L_CH14Target2LUN2.MouseHover, L_CH14Target2LUN3.MouseHover, L_CH14Target4LUN0.MouseHover, L_CH14Target4LUN1.MouseHover, L_CH14Target4LUN2.MouseHover, L_CH14Target4LUN3.MouseHover, L_CH14Target6LUN0.MouseHover, L_CH14Target6LUN1.MouseHover, L_CH14Target6LUN2.MouseHover, L_CH14Target6LUN3.MouseHover, L_CH14Target1LUN0.MouseHover, L_CH14Target1LUN1.MouseHover, L_CH14Target1LUN2.MouseHover, L_CH14Target1LUN3.MouseHover, L_CH14Target3LUN0.MouseHover, L_CH14Target3LUN1.MouseHover, L_CH14Target3LUN2.MouseHover, L_CH14Target3LUN3.MouseHover, L_CH14Target5LUN0.MouseHover, L_CH14Target5LUN1.MouseHover, L_CH14Target5LUN2.MouseHover, L_CH14Target5LUN3.MouseHover, L_CH14Target7LUN0.MouseHover, L_CH14Target7LUN1.MouseHover, L_CH14Target7LUN2.MouseHover, L_CH14Target7LUN3.MouseHover, L_CH15Target0LUN0.MouseHover, L_CH15Target0LUN1.MouseHover, L_CH15Target0LUN2.MouseHover, L_CH15Target0LUN3.MouseHover, L_CH15Target2LUN0.MouseHover, L_CH15Target2LUN1.MouseHover, L_CH15Target2LUN2.MouseHover, L_CH15Target2LUN3.MouseHover, L_CH15Target4LUN0.MouseHover, L_CH15Target4LUN1.MouseHover, L_CH15Target4LUN2.MouseHover, L_CH15Target4LUN3.MouseHover, L_CH15Target6LUN0.MouseHover, L_CH15Target6LUN1.MouseHover, L_CH15Target6LUN2.MouseHover, L_CH15Target6LUN3.MouseHover, L_CH15Target1LUN0.MouseHover, L_CH15Target1LUN1.MouseHover, L_CH15Target1LUN2.MouseHover, L_CH15Target1LUN3.MouseHover, L_CH15Target3LUN0.MouseHover, L_CH15Target3LUN1.MouseHover, L_CH15Target3LUN2.MouseHover, L_CH15Target3LUN3.MouseHover, L_CH15Target5LUN0.MouseHover, L_CH15Target5LUN1.MouseHover, L_CH15Target5LUN2.MouseHover, L_CH15Target5LUN3.MouseHover, L_CH15Target7LUN0.MouseHover, L_CH15Target7LUN1.MouseHover, L_CH15Target7LUN2.MouseHover, L_CH15Target7LUN3.MouseHover;
    void Timer_Tick(sender As Object, e As EventArgs) Handles Timer_L0.Tick, Timer_L1.Tick, Timer_L2.Tick, Timer_L3.Tick, Timer_L4.Tick, Timer_L5.Tick, Timer_L6.Tick, Timer_L7.Tick;

    Int32 GetLUNStatus(Int32 lane, Int32 channel, Int32 chip, Int32 lun);
    Int32 GetNandID(Int32 Lane, SigNAS3Library.AddressParameter AddressParameter, array <unsigned char> &r_NandID());*/
};

