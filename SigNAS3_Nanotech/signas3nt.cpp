#include "signas3nt.h"

SigNAS3NT::SigNAS3NT()
{
    const Int32 LUN_PER_CHIP_MIN = 1;
    const Int32 LUN_PER_CHIP_MAX = 4;

    //Private Const BLOCK_PER_LUN_MIN = SigNAS3Library.S3.BLOCK_MIN
    //Private Const BLOCK_PER_LUN_MAX = SigNAS3Library.S3.BLOCK_MAX

    const Int32 PAGESIZE_MIN = 4;
    //Private Const PAGESIZE_MAX = SigNAS3Library.S3.PAGESIZE_MAX
    const Int32 PAGESIZE_INCREMENT = 4;

    const Int32 VCORE_MIN = 0;
    const Int32 VCORE_MAX = 52;
    const Double VCORE_START = 0.9;
    const Double VCORE_STEP = 0.05;

    const Int32 VIO_MIN = 0;
    const Int32 VIO_MAX = 52;
    const Double VIO_START = 0.9;
    const Double VIO_STEP = 0.05;

    const String^ NANDID_INITIAL = "00";
    const Int32 NANDID_LEN = 2;

    const Int32 BBS_BYTE_OFFSET_INITIAL = 0;
    const Int32 BBS_BYTE_OFFSET_MIN = 0;
    //Private Const BBS_BYTE_OFFSET_MAX = SigNAS3Library.S3.PAGESIZE_MAX

    //Private Const BBS_THRESHOLD_INITIAL = SigNAS3Library.S3.BLOCK_MIN
    //Private Const BBS_THRESHOLD_MIN = SigNAS3Library.S3.BLOCK_MIN
    //Private Const BBS_THRESHOLD_MAX = SigNAS3Library.S3.BLOCK_MAX

    const Int32 BCH_CODE_LENGTH_MIN = 1;
    //Private Const BCH_CODE_LENGTH_MAX = SigNAS3Library.S3.PAGESIZE_MAX
    const Int32 BCH_CODE_LENGTH_INITIAL = 1024;

    const Int32 BCH_BIT_CORRECTABILITY_MIN = 0;
    const Int32 BCH_BIT_CORRECTABILITY_MAX = 253;
    const Int32 BCH_BIT_CORRECTABILITY_INITIAL = 32;

    const Int32 BUSYTIME_MIN = 0;
    const Int32 BUSYTIME_MAX = 2147483647;

    const Int32 BASECLOCK_MIN = 5;
    const Int32 BASECLOCK_MAX = 250;

    const Int32 t_MIN = 0;
    const Int32 t_MAX = 15;

    String^ STATUS_INI = "";
    
    array<NandParameter::TypeCode>^ myTypes = gcnew array<NandParameter::TypeCode>(7);   
    array<NandParameter::SubTypeCode>^ mySubTypes = gcnew array<NandParameter::SubTypeCode>(7);
    array<NandParameter::IFModeCode>^ myIFModes = gcnew array<NandParameter::IFModeCode>(7);
    array<Int32>^ myBlockSizes = gcnew array<Int32>(7);
    array<String^>^ myTypesString = gcnew array<String^>(7);
    array<String^>^ mySubTypesString = gcnew array<String^>(7);
    array<String^>^ myBlockSizesString = gcnew array<String^>(7);

    Boolean flag_opened = false;
    Connection myConnection;
    S3 myS3;
    String^ myUSBConnectStr = "Press USB Connect to establish USB connection with SigNAS3";
    Boolean myUSBConnection = false;
    array<Boolean>^ myLaneProcessing = {false, false, false, false, false, false, false, false};

    
    array<Boolean>^ myChannelSelect = gcnew array<Boolean>(7);
    array<Boolean>^ myChipSelect = gcnew array<Boolean>(7);
    
    array<Int32>^ myLUNperTarget = { LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN, LUN_PER_CHIP_MIN };
    //array<Int32>^ myBlocksperLUN = { BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN };
    //array<Int32>^ myLUNSeperation = { BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN, BLOCK_PER_LUN_MIN };

    array<Int32>^ myVCore = { VCORE_MIN, VCORE_MIN, VCORE_MIN, VCORE_MIN, VCORE_MIN, VCORE_MIN, VCORE_MIN, VCORE_MIN };
    array<Int32>^ myVIO = { VIO_MIN, VIO_MIN, VIO_MIN, VIO_MIN, VIO_MIN, VIO_MIN, VIO_MIN, VIO_MIN };
    array<Boolean>^ myVref = { false, false, false, false, false, false, false, false };
    array<Boolean>^ myVReset = { true, true, true, true, true, true, true, true };

    array<String^>^ myNANDID = gcnew array<String^>(7);
    array<Int32>^ myBBSByteOffset = { BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL, BBS_BYTE_OFFSET_INITIAL };
    //array<Int32>^ myBBSThreshold = { BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL, BBS_THRESHOLD_INITIAL };
    array<Int32>^ myBCHCodeLength = { BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL, BCH_CODE_LENGTH_INITIAL };
    array<Int32>^ myBCHBitCorrectability = { BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL, BCH_BIT_CORRECTABILITY_INITIAL };
    array<Int32>^ myMaxtErase = { BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN };
    array<Int32>^ myMaxtProgram = { BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN };
    array<Int32>^ myMaxtRead = { BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN, BUSYTIME_MIN };
    array<String^>^ myStatus = { STATUS_INI, STATUS_INI, STATUS_INI, STATUS_INI, STATUS_INI, STATUS_INI, STATUS_INI, STATUS_INI };
    array<Int32>^ myTime = { 0, 0, 0, 0, 0, 0, 0, 0 };
    array<String^>^ myResultFile = { "", "", "", "", "", "", "", "" };
    array<NandParameter^>^ myNandParameter = gcnew array<NandParameter^>(7);
    
    array<Int32>^ myLUNStatus = gcnew array<Int32>(7);
    array<Boolean>^ myNANDIDCheck = gcnew array<Boolean>(7);
    array<Int32>^ myONFIBB = gcnew array<Int32>(7);
    array<Int32>^ myEraseSuccessBB = gcnew array<Int32>(7);
    array<Int32>^ myBlockProgramSuccessBB = gcnew array<Int32>(7);
    array<Int32>^ myECCFailBB = gcnew array<Int32>(7);
    array<Int32>^ myEraseBusytimeBB = gcnew array<Int32>(7);
    array<Int32>^ myProgramBusytimeBB = gcnew array<Int32>(7);
    array<Int32>^ myReadBusytimeBB = gcnew array<Int32>(7);

    array<Boolean>^ flag_abort = { false, false, false, false, false, false, false, false };

    //Private WithEvents Timer_L0 As New Timer
    //Private WithEvents Timer_L1 As New Timer
    //Private WithEvents Timer_L2 As New Timer
    //Private WithEvents Timer_L3 As New Timer
    //Private WithEvents Timer_L4 As New Timer
    //Private WithEvents Timer_L5 As New Timer
    //Private WithEvents Timer_L6 As New Timer
    //Private WithEvents Timer_L7 As New Timer

    //Private myTimer(7) As Timer
    //Private RB_Lane(7) As RadioButton
    //Private CX_CH(15) As CheckBox
    //Private CX_Target(7) As CheckBox
    //Private TB_NANDID(7) As TextBox
    //Private L_LUN(15)()() As Label
}
void SigNAS3NT::New()
{

        /* Try

         InitializeComponent()

         Text = "SigNAS3 NT v1.0 - For GS Nanotech (" & SigNAS3Library.S3.STR_LIBNAME & " " & SigNAS3Library.S3.STR_LIBVERSION & ")"

         myTimer(0) = Timer_L0
         myTimer(1) = Timer_L1
         myTimer(2) = Timer_L2
         myTimer(3) = Timer_L3
         myTimer(4) = Timer_L4
         myTimer(5) = Timer_L5
         myTimer(6) = Timer_L6
         myTimer(7) = Timer_L7

         RB_Lane(0) = RB_Lane0
         RB_Lane(1) = RB_Lane1
         RB_Lane(2) = RB_Lane2
         RB_Lane(3) = RB_Lane3
         RB_Lane(4) = RB_Lane4
         RB_Lane(5) = RB_Lane5
         RB_Lane(6) = RB_Lane6
         RB_Lane(7) = RB_Lane7

         CX_CH(0) = CX_CH0
         CX_CH(1) = CX_CH1
         CX_CH(2) = CX_CH2
         CX_CH(3) = CX_CH3
         CX_CH(4) = CX_CH4
         CX_CH(5) = CX_CH5
         CX_CH(6) = CX_CH6
         CX_CH(7) = CX_CH7
         CX_CH(8) = CX_CH8
         CX_CH(9) = CX_CH9
         CX_CH(10) = CX_CH10
         CX_CH(11) = CX_CH11
         CX_CH(12) = CX_CH12
         CX_CH(13) = CX_CH13
         CX_CH(14) = CX_CH14
         CX_CH(15) = CX_CH15

         CX_Target(0) = CX_Target0
         CX_Target(1) = CX_Target2
         CX_Target(2) = CX_Target4
         CX_Target(3) = CX_Target6
         CX_Target(4) = CX_Target1
         CX_Target(5) = CX_Target3
         CX_Target(6) = CX_Target5
         CX_Target(7) = CX_Target7

         TB_NANDID(0) = TB_NANDIDB0
         TB_NANDID(1) = TB_NANDIDB1
         TB_NANDID(2) = TB_NANDIDB2
         TB_NANDID(3) = TB_NANDIDB3
         TB_NANDID(4) = TB_NANDIDB4
         TB_NANDID(5) = TB_NANDIDB5
         TB_NANDID(6) = TB_NANDIDB6
         TB_NANDID(7) = TB_NANDIDB7

         For k = 0 To 15
         ReDim L_LUN(k)(7)
         For j = 0 To 7
         ReDim L_LUN(k)(j)(3)
         Next
         Next

         L_LUN(0)(0)(0) = L_CH0Target0LUN0
         L_LUN(0)(0)(1) = L_CH0Target0LUN1
         L_LUN(0)(0)(2) = L_CH0Target0LUN2
         L_LUN(0)(0)(3) = L_CH0Target0LUN3
         L_LUN(0)(1)(0) = L_CH0Target2LUN0
         L_LUN(0)(1)(1) = L_CH0Target2LUN1
         L_LUN(0)(1)(2) = L_CH0Target2LUN2
         L_LUN(0)(1)(3) = L_CH0Target2LUN3
         L_LUN(0)(2)(0) = L_CH0Target4LUN0
         L_LUN(0)(2)(1) = L_CH0Target4LUN1
         L_LUN(0)(2)(2) = L_CH0Target4LUN2
         L_LUN(0)(2)(3) = L_CH0Target4LUN3
         L_LUN(0)(3)(0) = L_CH0Target6LUN0
         L_LUN(0)(3)(1) = L_CH0Target6LUN1
         L_LUN(0)(3)(2) = L_CH0Target6LUN2
         L_LUN(0)(3)(3) = L_CH0Target6LUN3
         L_LUN(0)(4)(0) = L_CH0Target1LUN0
         L_LUN(0)(4)(1) = L_CH0Target1LUN1
         L_LUN(0)(4)(2) = L_CH0Target1LUN2
         L_LUN(0)(4)(3) = L_CH0Target1LUN3
         L_LUN(0)(5)(0) = L_CH0Target3LUN0
         L_LUN(0)(5)(1) = L_CH0Target3LUN1
         L_LUN(0)(5)(2) = L_CH0Target3LUN2
         L_LUN(0)(5)(3) = L_CH0Target3LUN3
         L_LUN(0)(6)(0) = L_CH0Target5LUN0
         L_LUN(0)(6)(1) = L_CH0Target5LUN1
         L_LUN(0)(6)(2) = L_CH0Target5LUN2
         L_LUN(0)(6)(3) = L_CH0Target5LUN3
         L_LUN(0)(7)(0) = L_CH0Target7LUN0
         L_LUN(0)(7)(1) = L_CH0Target7LUN1
         L_LUN(0)(7)(2) = L_CH0Target7LUN2
         L_LUN(0)(7)(3) = L_CH0Target7LUN3
         L_LUN(1)(0)(0) = L_CH1Target0LUN0
         L_LUN(1)(0)(1) = L_CH1Target0LUN1
         L_LUN(1)(0)(2) = L_CH1Target0LUN2
         L_LUN(1)(0)(3) = L_CH1Target0LUN3
         L_LUN(1)(1)(0) = L_CH1Target2LUN0
         L_LUN(1)(1)(1) = L_CH1Target2LUN1
         L_LUN(1)(1)(2) = L_CH1Target2LUN2
         L_LUN(1)(1)(3) = L_CH1Target2LUN3
         L_LUN(1)(2)(0) = L_CH1Target4LUN0
         L_LUN(1)(2)(1) = L_CH1Target4LUN1
         L_LUN(1)(2)(2) = L_CH1Target4LUN2
         L_LUN(1)(2)(3) = L_CH1Target4LUN3
         L_LUN(1)(3)(0) = L_CH1Target6LUN0
         L_LUN(1)(3)(1) = L_CH1Target6LUN1
         L_LUN(1)(3)(2) = L_CH1Target6LUN2
         L_LUN(1)(3)(3) = L_CH1Target6LUN3
         L_LUN(1)(4)(0) = L_CH1Target1LUN0
         L_LUN(1)(4)(1) = L_CH1Target1LUN1
         L_LUN(1)(4)(2) = L_CH1Target1LUN2
         L_LUN(1)(4)(3) = L_CH1Target1LUN3
         L_LUN(1)(5)(0) = L_CH1Target3LUN0
         L_LUN(1)(5)(1) = L_CH1Target3LUN1
         L_LUN(1)(5)(2) = L_CH1Target3LUN2
         L_LUN(1)(5)(3) = L_CH1Target3LUN3
         L_LUN(1)(6)(0) = L_CH1Target5LUN0
         L_LUN(1)(6)(1) = L_CH1Target5LUN1
         L_LUN(1)(6)(2) = L_CH1Target5LUN2
         L_LUN(1)(6)(3) = L_CH1Target5LUN3
         L_LUN(1)(7)(0) = L_CH1Target7LUN0
         L_LUN(1)(7)(1) = L_CH1Target7LUN1
         L_LUN(1)(7)(2) = L_CH1Target7LUN2
         L_LUN(1)(7)(3) = L_CH1Target7LUN3
         L_LUN(2)(0)(0) = L_CH2Target0LUN0
         L_LUN(2)(0)(1) = L_CH2Target0LUN1
         L_LUN(2)(0)(2) = L_CH2Target0LUN2
         L_LUN(2)(0)(3) = L_CH2Target0LUN3
         L_LUN(2)(1)(0) = L_CH2Target2LUN0
         L_LUN(2)(1)(1) = L_CH2Target2LUN1
         L_LUN(2)(1)(2) = L_CH2Target2LUN2
         L_LUN(2)(1)(3) = L_CH2Target2LUN3
         L_LUN(2)(2)(0) = L_CH2Target4LUN0
         L_LUN(2)(2)(1) = L_CH2Target4LUN1
         L_LUN(2)(2)(2) = L_CH2Target4LUN2
         L_LUN(2)(2)(3) = L_CH2Target4LUN3
         L_LUN(2)(3)(0) = L_CH2Target6LUN0
         L_LUN(2)(3)(1) = L_CH2Target6LUN1
         L_LUN(2)(3)(2) = L_CH2Target6LUN2
         L_LUN(2)(3)(3) = L_CH2Target6LUN3
         L_LUN(2)(4)(0) = L_CH2Target1LUN0
         L_LUN(2)(4)(1) = L_CH2Target1LUN1
         L_LUN(2)(4)(2) = L_CH2Target1LUN2
         L_LUN(2)(4)(3) = L_CH2Target1LUN3
         L_LUN(2)(5)(0) = L_CH2Target3LUN0
         L_LUN(2)(5)(1) = L_CH2Target3LUN1
         L_LUN(2)(5)(2) = L_CH2Target3LUN2
         L_LUN(2)(5)(3) = L_CH2Target3LUN3
         L_LUN(2)(6)(0) = L_CH2Target5LUN0
         L_LUN(2)(6)(1) = L_CH2Target5LUN1
         L_LUN(2)(6)(2) = L_CH2Target5LUN2
         L_LUN(2)(6)(3) = L_CH2Target5LUN3
         L_LUN(2)(7)(0) = L_CH2Target7LUN0
         L_LUN(2)(7)(1) = L_CH2Target7LUN1
         L_LUN(2)(7)(2) = L_CH2Target7LUN2
         L_LUN(2)(7)(3) = L_CH2Target7LUN3
         L_LUN(3)(0)(0) = L_CH3Target0LUN0
         L_LUN(3)(0)(1) = L_CH3Target0LUN1
         L_LUN(3)(0)(2) = L_CH3Target0LUN2
         L_LUN(3)(0)(3) = L_CH3Target0LUN3
         L_LUN(3)(1)(0) = L_CH3Target2LUN0
         L_LUN(3)(1)(1) = L_CH3Target2LUN1
         L_LUN(3)(1)(2) = L_CH3Target2LUN2
         L_LUN(3)(1)(3) = L_CH3Target2LUN3
         L_LUN(3)(2)(0) = L_CH3Target4LUN0
         L_LUN(3)(2)(1) = L_CH3Target4LUN1
         L_LUN(3)(2)(2) = L_CH3Target4LUN2
         L_LUN(3)(2)(3) = L_CH3Target4LUN3
         L_LUN(3)(3)(0) = L_CH3Target6LUN0
         L_LUN(3)(3)(1) = L_CH3Target6LUN1
         L_LUN(3)(3)(2) = L_CH3Target6LUN2
         L_LUN(3)(3)(3) = L_CH3Target6LUN3
         L_LUN(3)(4)(0) = L_CH3Target1LUN0
         L_LUN(3)(4)(1) = L_CH3Target1LUN1
         L_LUN(3)(4)(2) = L_CH3Target1LUN2
         L_LUN(3)(4)(3) = L_CH3Target1LUN3
         L_LUN(3)(5)(0) = L_CH3Target3LUN0
         L_LUN(3)(5)(1) = L_CH3Target3LUN1
         L_LUN(3)(5)(2) = L_CH3Target3LUN2
         L_LUN(3)(5)(3) = L_CH3Target3LUN3
         L_LUN(3)(6)(0) = L_CH3Target5LUN0
         L_LUN(3)(6)(1) = L_CH3Target5LUN1
         L_LUN(3)(6)(2) = L_CH3Target5LUN2
         L_LUN(3)(6)(3) = L_CH3Target5LUN3
         L_LUN(3)(7)(0) = L_CH3Target7LUN0
         L_LUN(3)(7)(1) = L_CH3Target7LUN1
         L_LUN(3)(7)(2) = L_CH3Target7LUN2
         L_LUN(3)(7)(3) = L_CH3Target7LUN3
         L_LUN(4)(0)(0) = L_CH4Target0LUN0
         L_LUN(4)(0)(1) = L_CH4Target0LUN1
         L_LUN(4)(0)(2) = L_CH4Target0LUN2
         L_LUN(4)(0)(3) = L_CH4Target0LUN3
         L_LUN(4)(1)(0) = L_CH4Target2LUN0
         L_LUN(4)(1)(1) = L_CH4Target2LUN1
         L_LUN(4)(1)(2) = L_CH4Target2LUN2
         L_LUN(4)(1)(3) = L_CH4Target2LUN3
         L_LUN(4)(2)(0) = L_CH4Target4LUN0
         L_LUN(4)(2)(1) = L_CH4Target4LUN1
         L_LUN(4)(2)(2) = L_CH4Target4LUN2
         L_LUN(4)(2)(3) = L_CH4Target4LUN3
         L_LUN(4)(3)(0) = L_CH4Target6LUN0
         L_LUN(4)(3)(1) = L_CH4Target6LUN1
         L_LUN(4)(3)(2) = L_CH4Target6LUN2
         L_LUN(4)(3)(3) = L_CH4Target6LUN3
         L_LUN(4)(4)(0) = L_CH4Target1LUN0
         L_LUN(4)(4)(1) = L_CH4Target1LUN1
         L_LUN(4)(4)(2) = L_CH4Target1LUN2
         L_LUN(4)(4)(3) = L_CH4Target1LUN3
         L_LUN(4)(5)(0) = L_CH4Target3LUN0
         L_LUN(4)(5)(1) = L_CH4Target3LUN1
         L_LUN(4)(5)(2) = L_CH4Target3LUN2
         L_LUN(4)(5)(3) = L_CH4Target3LUN3
         L_LUN(4)(6)(0) = L_CH4Target5LUN0
         L_LUN(4)(6)(1) = L_CH4Target5LUN1
         L_LUN(4)(6)(2) = L_CH4Target5LUN2
         L_LUN(4)(6)(3) = L_CH4Target5LUN3
         L_LUN(4)(7)(0) = L_CH4Target7LUN0
         L_LUN(4)(7)(1) = L_CH4Target7LUN1
         L_LUN(4)(7)(2) = L_CH4Target7LUN2
         L_LUN(4)(7)(3) = L_CH4Target7LUN3
         L_LUN(5)(0)(0) = L_CH5Target0LUN0
         L_LUN(5)(0)(1) = L_CH5Target0LUN1
         L_LUN(5)(0)(2) = L_CH5Target0LUN2
         L_LUN(5)(0)(3) = L_CH5Target0LUN3
         L_LUN(5)(1)(0) = L_CH5Target2LUN0
         L_LUN(5)(1)(1) = L_CH5Target2LUN1
         L_LUN(5)(1)(2) = L_CH5Target2LUN2
         L_LUN(5)(1)(3) = L_CH5Target2LUN3
         L_LUN(5)(2)(0) = L_CH5Target4LUN0
         L_LUN(5)(2)(1) = L_CH5Target4LUN1
         L_LUN(5)(2)(2) = L_CH5Target4LUN2
         L_LUN(5)(2)(3) = L_CH5Target4LUN3
         L_LUN(5)(3)(0) = L_CH5Target6LUN0
         L_LUN(5)(3)(1) = L_CH5Target6LUN1
         L_LUN(5)(3)(2) = L_CH5Target6LUN2
         L_LUN(5)(3)(3) = L_CH5Target6LUN3
         L_LUN(5)(4)(0) = L_CH5Target1LUN0
         L_LUN(5)(4)(1) = L_CH5Target1LUN1
         L_LUN(5)(4)(2) = L_CH5Target1LUN2
         L_LUN(5)(4)(3) = L_CH5Target1LUN3
         L_LUN(5)(5)(0) = L_CH5Target3LUN0
         L_LUN(5)(5)(1) = L_CH5Target3LUN1
         L_LUN(5)(5)(2) = L_CH5Target3LUN2
         L_LUN(5)(5)(3) = L_CH5Target3LUN3
         L_LUN(5)(6)(0) = L_CH5Target5LUN0
         L_LUN(5)(6)(1) = L_CH5Target5LUN1
         L_LUN(5)(6)(2) = L_CH5Target5LUN2
         L_LUN(5)(6)(3) = L_CH5Target5LUN3
         L_LUN(5)(7)(0) = L_CH5Target7LUN0
         L_LUN(5)(7)(1) = L_CH5Target7LUN1
         L_LUN(5)(7)(2) = L_CH5Target7LUN2
         L_LUN(5)(7)(3) = L_CH5Target7LUN3
         L_LUN(6)(0)(0) = L_CH6Target0LUN0
         L_LUN(6)(0)(1) = L_CH6Target0LUN1
         L_LUN(6)(0)(2) = L_CH6Target0LUN2
         L_LUN(6)(0)(3) = L_CH6Target0LUN3
         L_LUN(6)(1)(0) = L_CH6Target2LUN0
         L_LUN(6)(1)(1) = L_CH6Target2LUN1
         L_LUN(6)(1)(2) = L_CH6Target2LUN2
         L_LUN(6)(1)(3) = L_CH6Target2LUN3
         L_LUN(6)(2)(0) = L_CH6Target4LUN0
         L_LUN(6)(2)(1) = L_CH6Target4LUN1
         L_LUN(6)(2)(2) = L_CH6Target4LUN2
         L_LUN(6)(2)(3) = L_CH6Target4LUN3
         L_LUN(6)(3)(0) = L_CH6Target6LUN0
         L_LUN(6)(3)(1) = L_CH6Target6LUN1
         L_LUN(6)(3)(2) = L_CH6Target6LUN2
         L_LUN(6)(3)(3) = L_CH6Target6LUN3
         L_LUN(6)(4)(0) = L_CH6Target1LUN0
         L_LUN(6)(4)(1) = L_CH6Target1LUN1
         L_LUN(6)(4)(2) = L_CH6Target1LUN2
         L_LUN(6)(4)(3) = L_CH6Target1LUN3
         L_LUN(6)(5)(0) = L_CH6Target3LUN0
         L_LUN(6)(5)(1) = L_CH6Target3LUN1
         L_LUN(6)(5)(2) = L_CH6Target3LUN2
         L_LUN(6)(5)(3) = L_CH6Target3LUN3
         L_LUN(6)(6)(0) = L_CH6Target5LUN0
         L_LUN(6)(6)(1) = L_CH6Target5LUN1
         L_LUN(6)(6)(2) = L_CH6Target5LUN2
         L_LUN(6)(6)(3) = L_CH6Target5LUN3
         L_LUN(6)(7)(0) = L_CH6Target7LUN0
         L_LUN(6)(7)(1) = L_CH6Target7LUN1
         L_LUN(6)(7)(2) = L_CH6Target7LUN2
         L_LUN(6)(7)(3) = L_CH6Target7LUN3
         L_LUN(7)(0)(0) = L_CH7Target0LUN0
         L_LUN(7)(0)(1) = L_CH7Target0LUN1
         L_LUN(7)(0)(2) = L_CH7Target0LUN2
         L_LUN(7)(0)(3) = L_CH7Target0LUN3
         L_LUN(7)(1)(0) = L_CH7Target2LUN0
         L_LUN(7)(1)(1) = L_CH7Target2LUN1
         L_LUN(7)(1)(2) = L_CH7Target2LUN2
         L_LUN(7)(1)(3) = L_CH7Target2LUN3
         L_LUN(7)(2)(0) = L_CH7Target4LUN0
         L_LUN(7)(2)(1) = L_CH7Target4LUN1
         L_LUN(7)(2)(2) = L_CH7Target4LUN2
         L_LUN(7)(2)(3) = L_CH7Target4LUN3
         L_LUN(7)(3)(0) = L_CH7Target6LUN0
         L_LUN(7)(3)(1) = L_CH7Target6LUN1
         L_LUN(7)(3)(2) = L_CH7Target6LUN2
         L_LUN(7)(3)(3) = L_CH7Target6LUN3
         L_LUN(7)(4)(0) = L_CH7Target1LUN0
         L_LUN(7)(4)(1) = L_CH7Target1LUN1
         L_LUN(7)(4)(2) = L_CH7Target1LUN2
         L_LUN(7)(4)(3) = L_CH7Target1LUN3
         L_LUN(7)(5)(0) = L_CH7Target3LUN0
         L_LUN(7)(5)(1) = L_CH7Target3LUN1
         L_LUN(7)(5)(2) = L_CH7Target3LUN2
         L_LUN(7)(5)(3) = L_CH7Target3LUN3
         L_LUN(7)(6)(0) = L_CH7Target5LUN0
         L_LUN(7)(6)(1) = L_CH7Target5LUN1
         L_LUN(7)(6)(2) = L_CH7Target5LUN2
         L_LUN(7)(6)(3) = L_CH7Target5LUN3
         L_LUN(7)(7)(0) = L_CH7Target7LUN0
         L_LUN(7)(7)(1) = L_CH7Target7LUN1
         L_LUN(7)(7)(2) = L_CH7Target7LUN2
         L_LUN(7)(7)(3) = L_CH7Target7LUN3
         L_LUN(8)(0)(0) = L_CH8Target0LUN0
         L_LUN(8)(0)(1) = L_CH8Target0LUN1
         L_LUN(8)(0)(2) = L_CH8Target0LUN2
         L_LUN(8)(0)(3) = L_CH8Target0LUN3
         L_LUN(8)(1)(0) = L_CH8Target2LUN0
         L_LUN(8)(1)(1) = L_CH8Target2LUN1
         L_LUN(8)(1)(2) = L_CH8Target2LUN2
         L_LUN(8)(1)(3) = L_CH8Target2LUN3
         L_LUN(8)(2)(0) = L_CH8Target4LUN0
         L_LUN(8)(2)(1) = L_CH8Target4LUN1
         L_LUN(8)(2)(2) = L_CH8Target4LUN2
         L_LUN(8)(2)(3) = L_CH8Target4LUN3
         L_LUN(8)(3)(0) = L_CH8Target6LUN0
         L_LUN(8)(3)(1) = L_CH8Target6LUN1
         L_LUN(8)(3)(2) = L_CH8Target6LUN2
         L_LUN(8)(3)(3) = L_CH8Target6LUN3
         L_LUN(8)(4)(0) = L_CH8Target1LUN0
         L_LUN(8)(4)(1) = L_CH8Target1LUN1
         L_LUN(8)(4)(2) = L_CH8Target1LUN2
         L_LUN(8)(4)(3) = L_CH8Target1LUN3
         L_LUN(8)(5)(0) = L_CH8Target3LUN0
         L_LUN(8)(5)(1) = L_CH8Target3LUN1
         L_LUN(8)(5)(2) = L_CH8Target3LUN2
         L_LUN(8)(5)(3) = L_CH8Target3LUN3
         L_LUN(8)(6)(0) = L_CH8Target5LUN0
         L_LUN(8)(6)(1) = L_CH8Target5LUN1
         L_LUN(8)(6)(2) = L_CH8Target5LUN2
         L_LUN(8)(6)(3) = L_CH8Target5LUN3
         L_LUN(8)(7)(0) = L_CH8Target7LUN0
         L_LUN(8)(7)(1) = L_CH8Target7LUN1
         L_LUN(8)(7)(2) = L_CH8Target7LUN2
         L_LUN(8)(7)(3) = L_CH8Target7LUN3
         L_LUN(9)(0)(0) = L_CH9Target0LUN0
         L_LUN(9)(0)(1) = L_CH9Target0LUN1
         L_LUN(9)(0)(2) = L_CH9Target0LUN2
         L_LUN(9)(0)(3) = L_CH9Target0LUN3
         L_LUN(9)(1)(0) = L_CH9Target2LUN0
         L_LUN(9)(1)(1) = L_CH9Target2LUN1
         L_LUN(9)(1)(2) = L_CH9Target2LUN2
         L_LUN(9)(1)(3) = L_CH9Target2LUN3
         L_LUN(9)(2)(0) = L_CH9Target4LUN0
         L_LUN(9)(2)(1) = L_CH9Target4LUN1
         L_LUN(9)(2)(2) = L_CH9Target4LUN2
         L_LUN(9)(2)(3) = L_CH9Target4LUN3
         L_LUN(9)(3)(0) = L_CH9Target6LUN0
         L_LUN(9)(3)(1) = L_CH9Target6LUN1
         L_LUN(9)(3)(2) = L_CH9Target6LUN2
         L_LUN(9)(3)(3) = L_CH9Target6LUN3
         L_LUN(9)(4)(0) = L_CH9Target1LUN0
         L_LUN(9)(4)(1) = L_CH9Target1LUN1
         L_LUN(9)(4)(2) = L_CH9Target1LUN2
         L_LUN(9)(4)(3) = L_CH9Target1LUN3
         L_LUN(9)(5)(0) = L_CH9Target3LUN0
         L_LUN(9)(5)(1) = L_CH9Target3LUN1
         L_LUN(9)(5)(2) = L_CH9Target3LUN2
         L_LUN(9)(5)(3) = L_CH9Target3LUN3
         L_LUN(9)(6)(0) = L_CH9Target5LUN0
         L_LUN(9)(6)(1) = L_CH9Target5LUN1
         L_LUN(9)(6)(2) = L_CH9Target5LUN2
         L_LUN(9)(6)(3) = L_CH9Target5LUN3
         L_LUN(9)(7)(0) = L_CH9Target7LUN0
         L_LUN(9)(7)(1) = L_CH9Target7LUN1
         L_LUN(9)(7)(2) = L_CH9Target7LUN2
         L_LUN(9)(7)(3) = L_CH9Target7LUN3
         L_LUN(10)(0)(0) = L_CH10Target0LUN0
         L_LUN(10)(0)(1) = L_CH10Target0LUN1
         L_LUN(10)(0)(2) = L_CH10Target0LUN2
         L_LUN(10)(0)(3) = L_CH10Target0LUN3
         L_LUN(10)(1)(0) = L_CH10Target2LUN0
         L_LUN(10)(1)(1) = L_CH10Target2LUN1
         L_LUN(10)(1)(2) = L_CH10Target2LUN2
         L_LUN(10)(1)(3) = L_CH10Target2LUN3
         L_LUN(10)(2)(0) = L_CH10Target4LUN0
         L_LUN(10)(2)(1) = L_CH10Target4LUN1
         L_LUN(10)(2)(2) = L_CH10Target4LUN2
         L_LUN(10)(2)(3) = L_CH10Target4LUN3
         L_LUN(10)(3)(0) = L_CH10Target6LUN0
         L_LUN(10)(3)(1) = L_CH10Target6LUN1
         L_LUN(10)(3)(2) = L_CH10Target6LUN2
         L_LUN(10)(3)(3) = L_CH10Target6LUN3
         L_LUN(10)(4)(0) = L_CH10Target1LUN0
         L_LUN(10)(4)(1) = L_CH10Target1LUN1
         L_LUN(10)(4)(2) = L_CH10Target1LUN2
         L_LUN(10)(4)(3) = L_CH10Target1LUN3
         L_LUN(10)(5)(0) = L_CH10Target3LUN0
         L_LUN(10)(5)(1) = L_CH10Target3LUN1
         L_LUN(10)(5)(2) = L_CH10Target3LUN2
         L_LUN(10)(5)(3) = L_CH10Target3LUN3
         L_LUN(10)(6)(0) = L_CH10Target5LUN0
         L_LUN(10)(6)(1) = L_CH10Target5LUN1
         L_LUN(10)(6)(2) = L_CH10Target5LUN2
         L_LUN(10)(6)(3) = L_CH10Target5LUN3
         L_LUN(10)(7)(0) = L_CH10Target7LUN0
         L_LUN(10)(7)(1) = L_CH10Target7LUN1
         L_LUN(10)(7)(2) = L_CH10Target7LUN2
         L_LUN(10)(7)(3) = L_CH10Target7LUN3
         L_LUN(11)(0)(0) = L_CH11Target0LUN0
         L_LUN(11)(0)(1) = L_CH11Target0LUN1
         L_LUN(11)(0)(2) = L_CH11Target0LUN2
         L_LUN(11)(0)(3) = L_CH11Target0LUN3
         L_LUN(11)(1)(0) = L_CH11Target2LUN0
         L_LUN(11)(1)(1) = L_CH11Target2LUN1
         L_LUN(11)(1)(2) = L_CH11Target2LUN2
         L_LUN(11)(1)(3) = L_CH11Target2LUN3
         L_LUN(11)(2)(0) = L_CH11Target4LUN0
         L_LUN(11)(2)(1) = L_CH11Target4LUN1
         L_LUN(11)(2)(2) = L_CH11Target4LUN2
         L_LUN(11)(2)(3) = L_CH11Target4LUN3
         L_LUN(11)(3)(0) = L_CH11Target6LUN0
         L_LUN(11)(3)(1) = L_CH11Target6LUN1
         L_LUN(11)(3)(2) = L_CH11Target6LUN2
         L_LUN(11)(3)(3) = L_CH11Target6LUN3
         L_LUN(11)(4)(0) = L_CH11Target1LUN0
         L_LUN(11)(4)(1) = L_CH11Target1LUN1
         L_LUN(11)(4)(2) = L_CH11Target1LUN2
         L_LUN(11)(4)(3) = L_CH11Target1LUN3
         L_LUN(11)(5)(0) = L_CH11Target3LUN0
         L_LUN(11)(5)(1) = L_CH11Target3LUN1
         L_LUN(11)(5)(2) = L_CH11Target3LUN2
         L_LUN(11)(5)(3) = L_CH11Target3LUN3
         L_LUN(11)(6)(0) = L_CH11Target5LUN0
         L_LUN(11)(6)(1) = L_CH11Target5LUN1
         L_LUN(11)(6)(2) = L_CH11Target5LUN2
         L_LUN(11)(6)(3) = L_CH11Target5LUN3
         L_LUN(11)(7)(0) = L_CH11Target7LUN0
         L_LUN(11)(7)(1) = L_CH11Target7LUN1
         L_LUN(11)(7)(2) = L_CH11Target7LUN2
         L_LUN(11)(7)(3) = L_CH11Target7LUN3
         L_LUN(12)(0)(0) = L_CH12Target0LUN0
         L_LUN(12)(0)(1) = L_CH12Target0LUN1
         L_LUN(12)(0)(2) = L_CH12Target0LUN2
         L_LUN(12)(0)(3) = L_CH12Target0LUN3
         L_LUN(12)(1)(0) = L_CH12Target2LUN0
         L_LUN(12)(1)(1) = L_CH12Target2LUN1
         L_LUN(12)(1)(2) = L_CH12Target2LUN2
         L_LUN(12)(1)(3) = L_CH12Target2LUN3
         L_LUN(12)(2)(0) = L_CH12Target4LUN0
         L_LUN(12)(2)(1) = L_CH12Target4LUN1
         L_LUN(12)(2)(2) = L_CH12Target4LUN2
         L_LUN(12)(2)(3) = L_CH12Target4LUN3
         L_LUN(12)(3)(0) = L_CH12Target6LUN0
         L_LUN(12)(3)(1) = L_CH12Target6LUN1
         L_LUN(12)(3)(2) = L_CH12Target6LUN2
         L_LUN(12)(3)(3) = L_CH12Target6LUN3
         L_LUN(12)(4)(0) = L_CH12Target1LUN0
         L_LUN(12)(4)(1) = L_CH12Target1LUN1
         L_LUN(12)(4)(2) = L_CH12Target1LUN2
         L_LUN(12)(4)(3) = L_CH12Target1LUN3
         L_LUN(12)(5)(0) = L_CH12Target3LUN0
         L_LUN(12)(5)(1) = L_CH12Target3LUN1
         L_LUN(12)(5)(2) = L_CH12Target3LUN2
         L_LUN(12)(5)(3) = L_CH12Target3LUN3
         L_LUN(12)(6)(0) = L_CH12Target5LUN0
         L_LUN(12)(6)(1) = L_CH12Target5LUN1
         L_LUN(12)(6)(2) = L_CH12Target5LUN2
         L_LUN(12)(6)(3) = L_CH12Target5LUN3
         L_LUN(12)(7)(0) = L_CH12Target7LUN0
         L_LUN(12)(7)(1) = L_CH12Target7LUN1
         L_LUN(12)(7)(2) = L_CH12Target7LUN2
         L_LUN(12)(7)(3) = L_CH12Target7LUN3
         L_LUN(13)(0)(0) = L_CH13Target0LUN0
         L_LUN(13)(0)(1) = L_CH13Target0LUN1
         L_LUN(13)(0)(2) = L_CH13Target0LUN2
         L_LUN(13)(0)(3) = L_CH13Target0LUN3
         L_LUN(13)(1)(0) = L_CH13Target2LUN0
         L_LUN(13)(1)(1) = L_CH13Target2LUN1
         L_LUN(13)(1)(2) = L_CH13Target2LUN2
         L_LUN(13)(1)(3) = L_CH13Target2LUN3
         L_LUN(13)(2)(0) = L_CH13Target4LUN0
         L_LUN(13)(2)(1) = L_CH13Target4LUN1
         L_LUN(13)(2)(2) = L_CH13Target4LUN2
         L_LUN(13)(2)(3) = L_CH13Target4LUN3
         L_LUN(13)(3)(0) = L_CH13Target6LUN0
         L_LUN(13)(3)(1) = L_CH13Target6LUN1
         L_LUN(13)(3)(2) = L_CH13Target6LUN2
         L_LUN(13)(3)(3) = L_CH13Target6LUN3
         L_LUN(13)(4)(0) = L_CH13Target1LUN0
         L_LUN(13)(4)(1) = L_CH13Target1LUN1
         L_LUN(13)(4)(2) = L_CH13Target1LUN2
         L_LUN(13)(4)(3) = L_CH13Target1LUN3
         L_LUN(13)(5)(0) = L_CH13Target3LUN0
         L_LUN(13)(5)(1) = L_CH13Target3LUN1
         L_LUN(13)(5)(2) = L_CH13Target3LUN2
         L_LUN(13)(5)(3) = L_CH13Target3LUN3
         L_LUN(13)(6)(0) = L_CH13Target5LUN0
         L_LUN(13)(6)(1) = L_CH13Target5LUN1
         L_LUN(13)(6)(2) = L_CH13Target5LUN2
         L_LUN(13)(6)(3) = L_CH13Target5LUN3
         L_LUN(13)(7)(0) = L_CH13Target7LUN0
         L_LUN(13)(7)(1) = L_CH13Target7LUN1
         L_LUN(13)(7)(2) = L_CH13Target7LUN2
         L_LUN(13)(7)(3) = L_CH13Target7LUN3
         L_LUN(14)(0)(0) = L_CH14Target0LUN0
         L_LUN(14)(0)(1) = L_CH14Target0LUN1
         L_LUN(14)(0)(2) = L_CH14Target0LUN2
         L_LUN(14)(0)(3) = L_CH14Target0LUN3
         L_LUN(14)(1)(0) = L_CH14Target2LUN0
         L_LUN(14)(1)(1) = L_CH14Target2LUN1
         L_LUN(14)(1)(2) = L_CH14Target2LUN2
         L_LUN(14)(1)(3) = L_CH14Target2LUN3
         L_LUN(14)(2)(0) = L_CH14Target4LUN0
         L_LUN(14)(2)(1) = L_CH14Target4LUN1
         L_LUN(14)(2)(2) = L_CH14Target4LUN2
         L_LUN(14)(2)(3) = L_CH14Target4LUN3
         L_LUN(14)(3)(0) = L_CH14Target6LUN0
         L_LUN(14)(3)(1) = L_CH14Target6LUN1
         L_LUN(14)(3)(2) = L_CH14Target6LUN2
         L_LUN(14)(3)(3) = L_CH14Target6LUN3
         L_LUN(14)(4)(0) = L_CH14Target1LUN0
         L_LUN(14)(4)(1) = L_CH14Target1LUN1
         L_LUN(14)(4)(2) = L_CH14Target1LUN2
         L_LUN(14)(4)(3) = L_CH14Target1LUN3
         L_LUN(14)(5)(0) = L_CH14Target3LUN0
         L_LUN(14)(5)(1) = L_CH14Target3LUN1
         L_LUN(14)(5)(2) = L_CH14Target3LUN2
         L_LUN(14)(5)(3) = L_CH14Target3LUN3
         L_LUN(14)(6)(0) = L_CH14Target5LUN0
         L_LUN(14)(6)(1) = L_CH14Target5LUN1
         L_LUN(14)(6)(2) = L_CH14Target5LUN2
         L_LUN(14)(6)(3) = L_CH14Target5LUN3
         L_LUN(14)(7)(0) = L_CH14Target7LUN0
         L_LUN(14)(7)(1) = L_CH14Target7LUN1
         L_LUN(14)(7)(2) = L_CH14Target7LUN2
         L_LUN(14)(7)(3) = L_CH14Target7LUN3
         L_LUN(15)(0)(0) = L_CH15Target0LUN0
         L_LUN(15)(0)(1) = L_CH15Target0LUN1
         L_LUN(15)(0)(2) = L_CH15Target0LUN2
         L_LUN(15)(0)(3) = L_CH15Target0LUN3
         L_LUN(15)(1)(0) = L_CH15Target2LUN0
         L_LUN(15)(1)(1) = L_CH15Target2LUN1
         L_LUN(15)(1)(2) = L_CH15Target2LUN2
         L_LUN(15)(1)(3) = L_CH15Target2LUN3
         L_LUN(15)(2)(0) = L_CH15Target4LUN0
         L_LUN(15)(2)(1) = L_CH15Target4LUN1
         L_LUN(15)(2)(2) = L_CH15Target4LUN2
         L_LUN(15)(2)(3) = L_CH15Target4LUN3
         L_LUN(15)(3)(0) = L_CH15Target6LUN0
         L_LUN(15)(3)(1) = L_CH15Target6LUN1
         L_LUN(15)(3)(2) = L_CH15Target6LUN2
         L_LUN(15)(3)(3) = L_CH15Target6LUN3
         L_LUN(15)(4)(0) = L_CH15Target1LUN0
         L_LUN(15)(4)(1) = L_CH15Target1LUN1
         L_LUN(15)(4)(2) = L_CH15Target1LUN2
         L_LUN(15)(4)(3) = L_CH15Target1LUN3
         L_LUN(15)(5)(0) = L_CH15Target3LUN0
         L_LUN(15)(5)(1) = L_CH15Target3LUN1
         L_LUN(15)(5)(2) = L_CH15Target3LUN2
         L_LUN(15)(5)(3) = L_CH15Target3LUN3
         L_LUN(15)(6)(0) = L_CH15Target5LUN0
         L_LUN(15)(6)(1) = L_CH15Target5LUN1
         L_LUN(15)(6)(2) = L_CH15Target5LUN2
         L_LUN(15)(6)(3) = L_CH15Target5LUN3
         L_LUN(15)(7)(0) = L_CH15Target7LUN0
         L_LUN(15)(7)(1) = L_CH15Target7LUN1
         L_LUN(15)(7)(2) = L_CH15Target7LUN2
         L_LUN(15)(7)(3) = L_CH15Target7LUN3
         */

   /* for (int k = 0; k < 8; k++)
    {
        myTimer(k).Interval = 1000
        ReDim myChannelSelect(k)(15)
        ReDim myLUNStatus(k)(15)
        ReDim myNANDIDCheck(k)(15)
        ReDim myONFIBB(k)(15)
        ReDim myEraseSuccessBB(k)(15)
        ReDim myBlockProgramSuccessBB(k)(15)
        ReDim myECCFailBB(k)(15)
        ReDim myEraseBusytimeBB(k)(15)
        ReDim myProgramBusytimeBB(k)(15)
        ReDim myReadBusytimeBB(k)(15)
        For j = 0 To 15
        myChannelSelect(k)(j) = false
        ReDim myLUNStatus(k)(j)(7)
        ReDim myNANDIDCheck(k)(j)(7)
        ReDim myONFIBB(k)(j)(7)
        ReDim myEraseSuccessBB(k)(j)(7)
        ReDim myBlockProgramSuccessBB(k)(j)(7)
        ReDim myECCFailBB(k)(j)(7)
        ReDim myEraseBusytimeBB(k)(j)(7)
        ReDim myProgramBusytimeBB(k)(j)(7)
        ReDim myReadBusytimeBB(k)(j)(7)
        For i = 0 To 7
        ReDim myLUNStatus(k)(j)(i)(3)
        ReDim myONFIBB(k)(j)(i)(3)
        ReDim myEraseSuccessBB(k)(j)(i)(3)
        ReDim myBlockProgramSuccessBB(k)(j)(i)(3)
        ReDim myECCFailBB(k)(j)(i)(3)
        ReDim myEraseBusytimeBB(k)(j)(i)(3)
        ReDim myProgramBusytimeBB(k)(j)(i)(3)
        ReDim myReadBusytimeBB(k)(j)(i)(3)
        myNANDIDCheck(k)(j)(i) = true
        For h = 0 To 3
        myLUNStatus(k)(j)(i)(h) = 0
        myONFIBB(k)(j)(i)(h) = 0
        myEraseSuccessBB(k)(j)(i)(h) = 0
        myBlockProgramSuccessBB(k)(j)(i)(h) = 0
        myECCFailBB(k)(j)(i)(h) = 0
        myEraseBusytimeBB(k)(j)(i)(h) = 0
        myProgramBusytimeBB(k)(j)(i)(h) = 0
        myReadBusytimeBB(k)(j)(i)(h) = 0
        Next
        Next
        Next
        ReDim myChipSelect(k)(7)
        ReDim myNANDID(k)(7)
        For j = 0 To 7
        myChipSelect(k)(j) = false
        myNANDID(k)(j) = NANDID_INITIAL
        Next

        myNandParameter(k) = New SigNAS3Library.NandParameter
        myNandParameter(k).GetTypeItems(myTypesString(k))
        myNandParameter(k).GetSubTypeItems(mySubTypesString(k))
        myNandParameter(k).GetBlocksizeItems(myBlockSizesString(k))

        myVendors(k) = System.Enum.GetValues(GetType(SigNAS3Library.NandParameter.VendorCode))
        GetTypeCodeFromString(myTypesString(k), myTypes(k))
        GetSubTypeCodeFromString(mySubTypesString(k), mySubTypes(k))
        GetBlockSizeFromString(myBlockSizesString(k), myBlockSizes(k))

        myIFModes(k) = System.Enum.GetValues(GetType(SigNAS3Library.NandParameter.IFModeCode))

        Next
    }
    NUD_Pagesize.Minimum = PAGESIZE_MIN
    NUD_Pagesize.Maximum = PAGESIZE_MAX
    NUD_Pagesize.Increment = PAGESIZE_INCREMENT

    NUD_tWH.Minimum = t_MIN
    NUD_tWP.Minimum = t_MIN
    NUD_tREH.Minimum = t_MIN
    NUD_tRP.Minimum = t_MIN
    NUD_tWH.Maximum = t_MAX
    NUD_tWP.Maximum = t_MAX
    NUD_tREH.Maximum = t_MAX
    NUD_tRP.Maximum = t_MAX

    NUD_LUNperTarget.Minimum = LUN_PER_CHIP_MIN
    NUD_LUNperTarget.Maximum = LUN_PER_CHIP_MAX

    NUD_BlocksperLUN.Minimum = BLOCK_PER_LUN_MIN
    NUD_BlocksperLUN.Maximum = BLOCK_PER_LUN_MAX

    NUD_LUNSeperation.Minimum = BLOCK_PER_LUN_MIN
    NUD_LUNSeperation.Maximum = BLOCK_PER_LUN_MAX

    NUD_BBSByteOffset.Minimum = BBS_BYTE_OFFSET_MIN
    NUD_BBSByteOffset.Maximum = BBS_BYTE_OFFSET_MAX

    NUD_BBSThreshold.Minimum = BBS_THRESHOLD_MIN
    NUD_BBSThreshold.Maximum = BBS_THRESHOLD_MAX

    NUD_BCHCodeLength.Minimum = BCH_CODE_LENGTH_MIN
    NUD_BCHCodeLength.Maximum = BCH_CODE_LENGTH_MAX

    NUD_BCHBitCorrectability.Minimum = BCH_BIT_CORRECTABILITY_MIN
    NUD_BCHBitCorrectability.Maximum = BCH_BIT_CORRECTABILITY_MAX

    NUD_MaxtErase.Minimum = BUSYTIME_MIN
    NUD_MaxtErase.Maximum = BUSYTIME_MAX

    NUD_MaxtProgram.Minimum = BUSYTIME_MIN
    NUD_MaxtProgram.Maximum = BUSYTIME_MAX

    NUD_MaxtRead.Minimum = BUSYTIME_MIN
    NUD_MaxtRead.Maximum = BUSYTIME_MAX

    RefreshLane()
    RefreshConnect()

    

    Console::WriteLine("An exception occured during New")

    

    flag_opened = true;

    */
}
void SigNAS3NT::RefreshLane()
{
    flag_opened = false;
    
    for (int k = 0; k < 7; k++)
    {
        if (k == myLane)
        {
            //RB_Lane(k).Checked = true
        }
        else
        {
            //RB_Lane(k).Checked = false
        }
    }


    RefreshSettings();
    RefreshProcessing();

    for (int k = 0; k < 15; k++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int i = 0; i < 3; i++)
            {
                RefreshLUNStatus(k, j, i);
            }

        }

    }

    Console::WriteLine("An exception occured during RefreshLane");

    flag_opened = true;


}
void SigNAS3NT::RefreshSettings()
{
    RefreshVendor();
    RefreshIFMode();
    RefreshPageSize();
    RefreshVCore();
    RefreshVIO();
    RefreshVref();
    RefreshVReset();

    for (int k = 0; k < 15; k++)
    {
        RefreshChannelSelect(k);
    }
        
    for (int k = 0; k < 7; k++)
    {
        RefreshTargetSelect(k);
    }
        
    RefreshLUNperTarget();
    RefreshBlocksperLUN();
    RefreshLUNSeperation();
    for (int k = 0; k < 7; k++)
    {
        RefreshNANDID(k);
    }
                
    RefreshBBSByteOffset();
    RefreshBBSThreshold();
    RefreshBCHCodeLength();
    RefreshBCHBitCorrectability();
    RefreshMaxtErase();
    RefreshMaxtProgram();
    RefreshMaxtRead();
    RefreshResultFile();
    RefreshStatus(false);

    Console::WriteLine("An exception occured during RefreshSettings");

}
void SigNAS3NT::RefreshVendor()
{
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*NandParameter::VendorCode vendor = myVendors(myLane);
            
            for each (NandParameter::VendorCode vendor in myVendors(myLane) )
                CB_Vendor.Items.Add(vendor)
                Next
                CB_Vendor.SelectedIndex = GetVendorIndex(myNandParameter(myLane).Vendor, myVendors(myLane))
                CB_Type.Items.Clear()
                For Each type As SigNAS3Library.NandParameter.TypeCode In myTypes(myLane)
                CB_Type.Items.Add(type)
                Next
                CB_Type.SelectedIndex = GetTypeIndex(myNandParameter(myLane).Type, myTypes(myLane))
                CB_Subtype.Items.Clear()
                For Each subtype As SigNAS3Library.NandParameter.SubTypeCode In mySubTypes(myLane)
                CB_Subtype.Items.Add(subtype)
                Next
                CB_Subtype.SelectedIndex = GetSubTypeIndex(myNandParameter(myLane).SubType, mySubTypes(myLane))
                CB_BlockSize.Items.Clear()
                For Each blocksize As Integer In myBlockSizes(myLane)
                CB_BlockSize.Items.Add(blocksize)
                Next
                CB_BlockSize.SelectedIndex = GetBlockSizeIndex(myNandParameter(myLane).BlockSize, myBlockSizes(myLane))*/
        }
    }              

    Console::WriteLine("An exception occured during RefreshVendor");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshType()
{
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CB_Type.Items.Clear()
        For Each type As SigNAS3Library.NandParameter.TypeCode In myTypes(myLane)
        CB_Type.Items.Add(type)
        Next
        CB_Type.SelectedIndex = GetTypeIndex(myNandParameter(myLane).Type, myTypes(myLane))
        CB_Subtype.Items.Clear()
        For Each subtype As SigNAS3Library.NandParameter.SubTypeCode In mySubTypes(myLane)
        CB_Subtype.Items.Add(subtype)
        Next
        CB_Subtype.SelectedIndex = GetSubTypeIndex(myNandParameter(myLane).SubType, mySubTypes(myLane))
        CB_BlockSize.Items.Clear()
        For Each blocksize As Integer In myBlockSizes(myLane)
        CB_BlockSize.Items.Add(blocksize)
        Next
        CB_BlockSize.SelectedIndex = GetBlockSizeIndex(myNandParameter(myLane).BlockSize, myBlockSizes(myLane))
            */
        }
    }
        
    Console::WriteLine("An exception occured during RefreshType");

    flag_opened = true;

}
void SigNAS3NT::RefreshSubType()
{
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CB_Subtype.Items.Clear()
        For Each subtype As SigNAS3Library.NandParameter.SubTypeCode In mySubTypes(myLane)
        CB_Subtype.Items.Add(subtype)
        Next
        CB_Subtype.SelectedIndex = GetSubTypeIndex(myNandParameter(myLane).SubType, mySubTypes(myLane))
        CB_BlockSize.Items.Clear()
        For Each blocksize As Integer In myBlockSizes(myLane)
        CB_BlockSize.Items.Add(blocksize)
        Next
        CB_BlockSize.SelectedIndex = GetBlockSizeIndex(myNandParameter(myLane).BlockSize, myBlockSizes(myLane))
            */
        }
    }        
        
    Console::WriteLine("An exception occured during RefreshSubType");

    flag_opened = true;
}
void SigNAS3NT::RefreshIFMode()
{

    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CB_IFMode.Items.Clear()
        For Each ifmode As SigNAS3Library.NandParameter.IFModeCode In myIFModes(myLane)
        CB_IFMode.Items.Add(ifmode)
        Next
        CB_IFMode.SelectedIndex = GetIFModeIndex(myNandParameter(myLane).IFMode, myIFModes(myLane))
        CX_EDO.Checked = myNandParameter(myLane).EDOMode
        If myNandParameter(myLane).IFMode = SigNAS3Library.NandParameter.IFModeCode.Asynchronous Then
        CX_EDO.Enabled = true
        Else
        CX_EDO.Enabled = false
        
        If myNandParameter(myLane).IFMode = SigNAS3Library.NandParameter.IFModeCode.Asynchronous Then
        NUD_BaseClock.Minimum = 2 * BASECLOCK_MIN
        NUD_BaseClock.Maximum = 2 * BASECLOCK_MAX
        Else
        NUD_BaseClock.Minimum = BASECLOCK_MIN
        NUD_BaseClock.Maximum = BASECLOCK_MAX
        
        NUD_BaseClock.Value = myNandParameter(myLane).BaseClock
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tWH.Enabled = true
        NUD_tWP.Enabled = true
        NUD_tREH.Enabled = true
        NUD_tRP.Enabled = true
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = (myNandParameter(myLane).tREH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = (myNandParameter(myLane).tRP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = ""
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tWH.Enabled = false
        NUD_tWP.Enabled = false
        NUD_tREH.Enabled = false
        NUD_tRP.Enabled = false
        TB_tWH.Text = ""
        TB_tWP.Text = ""
        TB_tREH.Text = ""
        TB_tRP.Text = ""
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        Case Else
        NUD_tWH.Enabled = true
        NUD_tWP.Enabled = true
        NUD_tREH.Enabled = false
        NUD_tRP.Enabled = false
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tWH.Value = myNandParameter(myLane).tWH
        NUD_tWP.Value = myNandParameter(myLane).tWP
        NUD_tREH.Value = myNandParameter(myLane).tREH
        NUD_tRP.Value = myNandParameter(myLane).tRP
            */
        }
    }
        
    Console::WriteLine("An exception occured during RefreshIFMode");

    flag_opened = true;

}
void SigNAS3NT::RefreshBlockSize()
{

    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CB_BlockSize.Items.Clear()
        For Each blocksize As Integer In myBlockSizes(myLane)
        CB_BlockSize.Items.Add(blocksize)
        Next
        CB_BlockSize.SelectedIndex = GetBlockSizeIndex(myNandParameter(myLane).BlockSize, myBlockSizes(myLane))
            */
        }
    }
        
    Console::WriteLine("An exception occured during RefreshBlockSize");

    flag_opened = true;

}
void SigNAS3NT::RefreshPageSize()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_Pagesize.Value = myNandParameter(myLane).PageSize
        }
    }
               
    Console::WriteLine("An exception occured during RefreshPageSize");

    flag_opened = true;

}
void SigNAS3NT::RefreshEDOMode()
{

    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CX_EDO.Checked = myNandParameter(myLane).EDOMode
        If myNandParameter(myLane).IFMode = SigNAS3Library.NandParameter.IFModeCode.Asynchronous Then
        CX_EDO.Enabled = true
        Else
        CX_EDO.Enabled = false
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshEDOMode");

    flag_opened = true;

}
void SigNAS3NT::RefreshBaseClock()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    If myNandParameter(myLane).IFMode = SigNAS3Library.NandParameter.IFModeCode.Asynchronous Then
        NUD_BaseClock.Minimum = 2 * BASECLOCK_MIN
        NUD_BaseClock.Maximum = 2 * BASECLOCK_MAX
        Else
        NUD_BaseClock.Minimum = BASECLOCK_MIN
        NUD_BaseClock.Maximum = BASECLOCK_MAX
        
        NUD_BaseClock.Value = myNandParameter(myLane).BaseClock
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tWH.Enabled = true
        NUD_tWP.Enabled = true
        NUD_tREH.Enabled = true
        NUD_tRP.Enabled = true
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = (myNandParameter(myLane).tREH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = (myNandParameter(myLane).tRP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = ""
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tWH.Enabled = false
        NUD_tWP.Enabled = false
        NUD_tREH.Enabled = false
        NUD_tRP.Enabled = false
        TB_tWH.Text = ""
        TB_tWP.Text = ""
        TB_tREH.Text = ""
        TB_tRP.Text = ""
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        Case Else
        NUD_tWH.Enabled = true
        NUD_tWP.Enabled = true
        NUD_tREH.Enabled = false
        NUD_tRP.Enabled = false
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tWH.Value = myNandParameter(myLane).tWH
        NUD_tWP.Value = myNandParameter(myLane).tWP
        NUD_tREH.Value = myNandParameter(myLane).tREH
        NUD_tRP.Value = myNandParameter(myLane).tRP
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshBaseClock");

    flag_opened = true;

}
void SigNAS3NT::RefreshtWH()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tWH.Enabled = true
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tWH.Enabled = false
        TB_tWH.Text = ""
        Case Else
        NUD_tWH.Enabled = true
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tWH.Value = myNandParameter(myLane).tWH
            */
        }
    }
        
    Console::WriteLine("An exception occured during RefreshtWH");

    flag_opened = true;

}
void SigNAS3NT::RefreshtWP()
{
    
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tWP.Enabled = true
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tWP.Enabled = false
        TB_tWP.Text = ""
        Case Else
        NUD_tWP.Enabled = true
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tWP.Value = myNandParameter(myLane).tWP
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshtWP");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshtREH()
{
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tREH.Enabled = true
        TB_tREH.Text = (myNandParameter(myLane).tREH + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tREH.Enabled = false
        TB_tREH.Text = ""
        Case Else
        NUD_tREH.Enabled = false
        TB_tREH.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tREH.Value = myNandParameter(myLane).tREH
            
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshtREH");

    flag_opened = true;

}
void SigNAS3NT::RefreshtRP()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        NUD_tRP.Enabled = true
        TB_tRP.Text = (myNandParameter(myLane).tRP + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        NUD_tRP.Enabled = false
        TB_tRP.Text = ""
        Case Else
        NUD_tRP.Enabled = false
        TB_tRP.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        NUD_tRP.Value = myNandParameter(myLane).tRP
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshtRP");

    flag_opened = true;
}
void SigNAS3NT::RefreshVCore()
{
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
            CB_VCore.Items.Clear()
            For j = 0 To VCORE_MAX
            CB_VCore.Items.Add(String.Format("{0:0.00}", VCORE_START + VCORE_STEP * j) & "V")
            Next
            CB_VCore.SelectedIndex = myVCore(myLane)
            */
        }
    }
        
    Console::WriteLine("An exception occured during RefreshVCore");

    flag_opened = true;

}
void SigNAS3NT::RefreshVIO()
{
   
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    CB_VIO.Items.Clear()
        For j = 0 To VIO_MAX
        CB_VIO.Items.Add(String.Format("{0:0.00}", VIO_START + VIO_STEP * j) & "V")
        Next
        CB_VIO.SelectedIndex = myVIO(myLane)
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshVIO");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshVref()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
            CX_Vref.Checked = myVref(myLane)
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshVref");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshVReset()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
            CX_Reset.Checked = myVReset(myLane)
            */
        }
    }

    Console::WriteLine("An exception occured during RefreshVReset");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshChannelSelect(Int32 channel)
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            if (channel >= 0)
            {
                if (channel <= 15)
                {
                    //CX_CH(channel).Checked = myChannelSelect(myLane)(channel)
                }
            }
        }
    }
        
    Console::WriteLine("An exception occured during RefreshChannelSelect");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshTargetSelect(Int32 chip)
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            if (chip >= 0)
            {
                if (chip <= 7)
                {
                    //CX_Target(chip).Checked = myChipSelect(myLane)(chip)
                }
            }
        }
    }
        
    Console::WriteLine("An exception occured during RefreshTargetSelect");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshLUNperTarget()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_LUNperTarget.Value = myLUNperTarget(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshLUNperTarget");

    flag_opened = true;

}

void SigNAS3NT::RefreshBlocksperLUN()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_BlocksperLUN.Value = myBlocksperLUN(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshBlocksperLUN");
        
    flag_opened = true;

}

void SigNAS3NT::RefreshLUNSeperation()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_LUNSeperation.Value = myLUNSeperation(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshLUNSeperation");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshNANDID(Int32 id)
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            if (id >= 0)
            {
                if (id <= 7)
                {
                    //TB_NANDID(id).Text = myNANDID(myLane)(id)
                }
            }
        }
    }
  
    Console::WriteLine("An exception occured during RefreshNANDID");

    flag_opened = true;

}
void SigNAS3NT::RefreshBBSByteOffset()
{
    
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_BBSByteOffset.Value = myBBSByteOffset(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshBBSByteOffset");

    flag_opened = true;

}
void SigNAS3NT::RefreshBBSThreshold()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_BBSThreshold.Value = myBBSThreshold(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshBBSThreshold");
        
    flag_opened = true;

}
void SigNAS3NT::RefreshBCHCodeLength()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_BCHCodeLength.Value = myBCHCodeLength(myLane)
        }
    }

    Console::WriteLine("An exception occured during RefreshBCHCodeLength");
        
    flag_opened = true;
        
}
void SigNAS3NT::RefreshBCHBitCorrectability()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_BCHBitCorrectability.Value = myBCHBitCorrectability(myLane)
        }
    }
                        
    Console::WriteLine("An exception occured during RefreshBCHBitCorrectability");
        
    flag_opened = true;
        
}
void SigNAS3NT::RefreshMaxtErase()
{

    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_MaxtErase.Value = myMaxtErase(myLane)
        }
    }
        
    Console::WriteLine("An exception occured during RefreshMaxtErase");
        
    flag_opened = true;
        
}

void SigNAS3NT::RefreshMaxtProgram()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_MaxtProgram.Value = myMaxtProgram(myLane)
        }
    }
        

    Console::WriteLine("An exception occured during RefreshMaxtProgram");
        
    flag_opened = true;
        
}

void SigNAS3NT::RefreshMaxtRead()
{

    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //NUD_MaxtRead.Value = myMaxtRead(myLane)
        }
    }
        
    Console::WriteLine("An exception occured during RefreshMaxtRead");
        
    flag_opened = true;
        
}

void SigNAS3NT::RefreshResultFile()
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            //TB_ResultFile.Text = myResultFile(myLane)
        }
    }
   
    Console::WriteLine("An exception occured during RefreshResultFile");
        
    flag_opened = true;        
}
        //Private Delegate Sub RefreshLUNStatusDelegate(ByVal channel As Integer, ByVal chip As Integer, ByVal lun As Integer)
void SigNAS3NT::RefreshLUNStatus(Int32 channel, Int32 chip, Int32 lun)
{

    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            if (channel >= 0)
            {
                if (channel <= 15)
                {
                    if (chip >= 0)
                    {
                        if (chip <= 7)
                        {
                            if (lun >= 0)
                            {
                                if (lun <= 3)
                                {
                                    /*
                                            Select Case myLUNStatus(myLane)(channel)(chip)(lun)
        Case 1
        L_LUN(channel)(chip)(lun).BackColor = Color.Green
        Case 2
        L_LUN(channel)(chip)(lun).BackColor = Color.Red
        Case Else
        L_LUN(channel)(chip)(lun).BackColor = SystemColors.Control
        End Select
                                    */
                                }
                            }
                        }
                    }
                }
            }
        }
    }     
        
    Console::WriteLine("An exception occured during RefreshLUNStatus");
        
    flag_opened = true;

}

void SigNAS3NT::RefreshConnect()
{

    flag_opened = false;

    /*    BT_USBConnect.Enabled = Not myUSBConnection
        TB_USBConnect.Text = myUSBConnectStr*/
    RefreshProcessing();

    Console::WriteLine("An exception occured during RefreshConnect");

    flag_opened = true;
        
}
        //Private Delegate Sub RefreshProcessingDelegate()
void SigNAS3NT:: RefreshProcessing()
{
    
    flag_opened = false;

    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            /*
                    GB_NandSettings.Enabled = Not myLaneProcessing(myLane)
        GB_VoltageSettings.Enabled = Not myLaneProcessing(myLane)
        GB_AddressSettings.Enabled = Not myLaneProcessing(myLane)
        GB_TestSettings.Enabled = Not myLaneProcessing(myLane)
        GB_ResultFile.Enabled = Not myLaneProcessing(myLane)
        BT_LoadSettings.Enabled = Not myLaneProcessing(myLane)
        BT_SaveSettings.Enabled = Not myLaneProcessing(myLane)
        If myUSBConnection Then
        If myResultFile(myLane) < > "" Then
        BT_Execute.Enabled = Not myLaneProcessing(myLane)
        Else
        BT_Execute.Enabled = false
        
        BT_Abort.Enabled = myLaneProcessing(myLane)
        Else
        BT_Execute.Enabled = false
        BT_Abort.Enabled = false
            */
        }
    }
      
    Console::WriteLine("An exception occured during RefreshProcessing");

    flag_opened = true;
        
}
        //Private Delegate Sub RefreshStatusDelegate(ByVal addTimer As Boolean)
void SigNAS3NT::RefreshStatus(Boolean addTimer)
{
    
    flag_opened = false;
        
    if (myLane >= 0)
    {
        if (myLane <= 7)
        {
            if (addTimer)
            {
                /*
                TB_Status.Text = myStatus(myLane) & " (" & (myTime(myLane) \ 3600).ToString.PadLeft(2, "0"c) & "h:" & ((myTime(myLane) \ 60) Mod 60).ToString.PadLeft(2, "0"c) & "m:" & (myTime(myLane) Mod 60).ToString.PadLeft(2, "0"c) & "s)"
                Else
                TB_Status.Text = myStatus(myLane)
                */
            }
        }
    }

    Console::WriteLine("An exception occured during RefreshStatus");

    flag_opened = true;
        
}

/*String^ SigNAS3NT::HexCheck(String^ str, Int32 len, String^ oldstr)
{
    Dim newstr As String = oldstr
        Try
        If str.Length = 0 Then
        newstr = NANDID_INITIAL
        ElseIf str.Length <= len Then
        Dim uint As UInteger = Convert.ToUInt32(str, 16)
        newstr = Hex(uint)
        For k = newstr.Length To len - 1
        newstr = "0" & newstr
        Next
        
        
        
        HexCheck = newstr
        
        
}
void SigNAS3NT::GetTypeCodeFromString(array<String^>^ str, array<SigNAS3Library.NandParameter.TypeCode>^ &myTypeCode)
{
    Dim mylist = New List(Of SigNAS3Library.NandParameter.TypeCode)

        For Each mystr As String In str

        Try

        mylist.Add(DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.TypeCode), mystr), SigNAS3Library.NandParameter.TypeCode))

        

        

        Next

        myTypeCode = mylist.ToArray()

        
}
void SigNAS3NT::GetSubTypeCodeFromString(array<String^>^ str, array<SigNAS3Library.NandParameter.SubTypeCode>^ &mySubTypeCode)
{
    Dim mylist = New List(Of SigNAS3Library.NandParameter.SubTypeCode)

        For Each mystr As String In str

        Try

        mylist.Add(DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.SubTypeCode), mystr), SigNAS3Library.NandParameter.SubTypeCode))

        

        

        Next

        mySubTypeCode = mylist.ToArray()

        
}
void SigNAS3NT::GetBlockSizeFromString(array<String^>^ str, array<Int32>^ &myBlockSize)
{
    Dim mylist = New List(Of Integer)

        For Each mystr As String In str

        Try

        mylist.Add(CInt(mystr.Substring(0, mystr.IndexOf(" "))))

        

        

        Next

        myBlockSize = mylist.ToArray()

        
}
Int32 SigNAS3NT::GetVendorIndex(SigNAS3Library.NandParameter.VendorCode myvendor, array<SigNAS3Library.NandParameter.VendorCode>^ myvendorlist)
{
    Dim counter As Integer = 0

        For Each vendor As SigNAS3Library.NandParameter.VendorCode In myvendorlist
        If vendor = myvendor Then
        Return counter
        
        counter += 1
        Next

        Return 0

        
}
Int32 SigNAS3NT::GetTypeIndex(SigNAS3Library.NandParameter.TypeCode mytype, array <SigNAS3Library.NandParameter.TypeCode>^ mytypelist)
{
    Dim counter As Integer = 0

        For Each type As SigNAS3Library.NandParameter.TypeCode In mytypelist
        If type = mytype Then
        Return counter
        
        counter += 1
        Next

        Return 0

        
}
Int32 SigNAS3NT::GetSubTypeIndex(SigNAS3Library.NandParameter.SubTypeCode mysubtype, array<SigNAS3Library.NandParameter.SubTypeCode>^ mysubtypelist)
{
    Dim counter As Integer = 0

        For Each subtype As SigNAS3Library.NandParameter.SubTypeCode In mysubtypelist
        If subtype = mysubtype Then
        Return counter
        
        counter += 1
        Next

        Return 0

        
}
Int32 SigNAS3NT::GetIFModeIndex(SigNAS3Library.NandParameter.IFModeCode myifmode, array <SigNAS3Library.NandParameter.IFModeCode> myifmodelist)
{
    Dim counter As Integer = 0

        For Each ifmode As SigNAS3Library.NandParameter.IFModeCode In myifmodelist
        If ifmode = myifmode Then
        Return counter
        
        counter += 1
        Next

        Return 0

        
}
Int32 SigNAS3NT::GetBlockSizeIndex(Int32 myblocksize, array<Int32>^ myblocksizelist)
{
    Dim counter As Integer = 0

        For Each blocksize As Integer In myblocksizelist
        If blocksize = myblocksize Then
        Return counter
        
        counter += 1
        Next

        Return 0

        
}
void SigNAS3NT::BT_USBConnect_Click(sender As Object, e As EventArgs) Handles BT_USBConnect.Click
{
        Try

        If flag_opened Then

        myConnection = New SigNAS3Library.Connection
        Dim r_connect As Boolean = false

        myUSBConnectStr = "Establishing USB connection with SigNAS3..."
        TB_USBConnect.Text = myUSBConnectStr
        TB_USBConnect.Refresh()

        Dim errcode = myConnection.USB_Connect(r_connect)

        If errcode = 0 Then
        If r_connect Then
        If myConnection.USB_SUPERSPEED Then
        myUSBConnectStr = "USB connection with SigNAS3 establised via USB3"
        Else
        myUSBConnectStr = "USB connection with SigNAS3 establised via USB2"
        
        myUSBConnection = true
        myS3 = New SigNAS3Library.S3(myConnection)
        Else
        myUSBConnectStr = "Unable to establish USB connection with SigNAS3"
        myUSBConnection = false
        
        Else
        myUSBConnectStr = "Unable to establish USB connection with SigNAS3: Error code: " & SigNAS3Library.Err.GetErrDescription(errcode)
        myUSBConnection = false
        

        

        

        myUSBConnectStr = "An exception occured in USBConnect"
        myUSBConnection = false
        Console::WriteLine("An exception occured during USBConnect")

        

        RefreshConnect()

        

        
}

//'Lane Settings
void SigNAS3NT::RB_Lane_CheckedChanged(sender As Object, e As EventArgs) Handles RB_Lane0.CheckedChanged, RB_Lane1.CheckedChanged, RB_Lane2.CheckedChanged, RB_Lane3.CheckedChanged, RB_Lane4.CheckedChanged, RB_Lane5.CheckedChanged, RB_Lane6.CheckedChanged, RB_Lane7.CheckedChanged
{
        Try

        If flag_opened Then
        For j = 0 To 7
        If Equals(RB_Lane(j), sender) Then
        If RB_Lane(j).Checked = true Then
        myLane = j
        RefreshSettings()
        RefreshProcessing()
        For k = 0 To 15
        For i = 0 To 7
        For h = 0 To 3
        RefreshLUNStatus(k, i, h)
        Next
        Next
        Next
        
        j = 7
        
        Next
        

        

        Console::WriteLine("An exception occured during Lane Select")

        

        
}
 //'Address Settings
void SigNAS3NT::CX_CH_CheckedChanged(sender As Object, e As EventArgs) Handles CX_CH0.CheckedChanged, CX_CH1.CheckedChanged, CX_CH2.CheckedChanged, CX_CH3.CheckedChanged, CX_CH4.CheckedChanged, CX_CH5.CheckedChanged, CX_CH6.CheckedChanged, CX_CH7.CheckedChanged, CX_CH8.CheckedChanged, CX_CH9.CheckedChanged, CX_CH10.CheckedChanged, CX_CH11.CheckedChanged, CX_CH12.CheckedChanged, CX_CH13.CheckedChanged, CX_CH14.CheckedChanged, CX_CH15.CheckedChanged
{
        Try

        If flag_opened Then
        For j = 0 To 15
        If Equals(CX_CH(j), sender) Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myChannelSelect(myLane)(j) = CX_CH(j).Checked
        
        
        j = 15
        
        Next
        

        

        Console::WriteLine("An exception occured during Channel Select")

        

        
}
void SigNAS3NT::CX_Target_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Target0.CheckedChanged, CX_Target2.CheckedChanged, CX_Target4.CheckedChanged, CX_Target6.CheckedChanged, CX_Target1.CheckedChanged, CX_Target3.CheckedChanged, CX_Target5.CheckedChanged, CX_Target7.CheckedChanged
{
        Try

        If flag_opened Then
        For j = 0 To 7
        If Equals(CX_Target(j), sender) Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myChipSelect(myLane)(j) = CX_Target(j).Checked
        
        
        j = 7
        
        Next
        

        

        Console::WriteLine("An exception occured during Chip Select")

        

        
}
 
void SigNAS3NT::NUD_LUNperTarget_ValueChanged(sender As Object, e As EventArgs) Handles NUD_LUNperTarget.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myLUNperTarget(myLane) = NUD_LUNperTarget.Value
        
        
        

        

        Console::WriteLine("An exception occured during LUN/Target Select")

        

        
}
void SigNAS3NT::NUD_BlocksperLUN_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BlocksperLUN.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myBlocksperLUN(myLane) = NUD_BlocksperLUN.Value
        
        
        

        

        Console::WriteLine("An exception occured during Blocks/LUN Select")

        

        
}
void SigNAS3NT::NUD_LUNSeperation_ValueChanged(sender As Object, e As EventArgs) Handles NUD_LUNSeperation.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myLUNSeperation(myLane) = NUD_LUNSeperation.Value
        
        
        

        

        Console::WriteLine("An exception occured during LUN Seperation Select")

        

        
}

//'Voltage Settings
void SigNAS3NT::CB_VCore_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_VCore.SelectedIndexChanged
{
        Try

        If flag_opened = true Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        If CB_VCore.SelectedIndex < VCORE_MIN Then
        myVCore(myLane) = VCORE_MIN
        RefreshVCore()
        ElseIf CB_VCore.SelectedIndex > VCORE_MAX Then
        myVCore(myLane) = VCORE_MAX
        RefreshVCore()
        Else
        myVCore(myLane) = CB_VCore.SelectedIndex
     
        Console::WriteLine("An exception occured during VCore Select")

        

        
}

void SigNAS3NT::CB_VIO_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_VIO.SelectedIndexChanged
{
        Try

        If flag_opened = true Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        If CB_VIO.SelectedIndex < VIO_MIN Then
        myVIO(myLane) = VIO_MIN
        RefreshVIO()
        ElseIf CB_VIO.SelectedIndex > VIO_MAX Then
        myVIO(myLane) = VIO_MAX
        RefreshVIO()
        Else
        myVIO(myLane) = CB_VIO.SelectedIndex
        
    
        Console::WriteLine("An exception occured during VIO Select")

        

        
}
void SigNAS3NT::CX_Vref_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Vref.CheckedChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myVref(myLane) = CX_Vref.Checked

  

        Console::WriteLine("An exception occured during Vref Select")

        

        
}
void SigNAS3NT::CX_Reset_CheckedChanged(sender As Object, e As EventArgs) Handles CX_Reset.CheckedChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myVReset(myLane) = CX_Reset.Checked
    
        Console::WriteLine("An exception occured during Reset after Voltage Set Select")
  
}

//'Test Settings
void SigNAS3NT::TB_NANDID_Leave(sender As Object, e As EventArgs) Handles TB_NANDIDB0.Leave, TB_NANDIDB1.Leave, TB_NANDIDB2.Leave, TB_NANDIDB3.Leave, TB_NANDIDB4.Leave, TB_NANDIDB5.Leave, TB_NANDIDB6.Leave, TB_NANDIDB7.Leave
{
        Try

        If flag_opened Then
        For j = 0 To 7
        If Equals(TB_NANDID(j), sender) Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNANDID(myLane)(j) = HexCheck(TB_NANDID(j).Text, NANDID_LEN, myNANDID(myLane)(j))
        RefreshNANDID(j)
        
        
        j = 7
        
        Next
       

        Console::WriteLine("An exception occured during NANDID Select")


}

void SigNAS3NT::NUD_BBSByteOffset_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BBSByteOffset.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        If NUD_BBSByteOffset.Value < myNandParameter(myLane).PageSize Then
        myBBSByteOffset(myLane) = NUD_BBSByteOffset.Value
        Else
        myBBSByteOffset(myLane) = myNandParameter(myLane).PageSize - 1
        
        RefreshBBSByteOffset()
       

        Console::WriteLine("An exception occured during Bad Block Scan Byte Offset Select")

        
        
}

void SigNAS3NT::NUD_BBSThreshold_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BBSThreshold.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myBBSThreshold(myLane) = NUD_BBSThreshold.Value
        
        
        

        

        Console::WriteLine("An exception occured during Bad Block Scan Threshold Select")

        

        
}

void SigNAS3NT::NUD_BCHCodeLength_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BCHCodeLength.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myBCHCodeLength(myLane) = NUD_BCHCodeLength.Value
        
        
        

        

        Console::WriteLine("An exception occured during BCH Code Length Select")

        

        
}

void SigNAS3NT::NUD_BCHBitCorrectability_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BCHBitCorrectability.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myBCHBitCorrectability(myLane) = NUD_BCHBitCorrectability.Value             

        Console::WriteLine("An exception occured during BCH Bit Correctability Select")
        
}

void SigNAS3NT:: NUD_MaxtErase_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtErase.ValueChanged
{
 
        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myMaxtErase(myLane) = NUD_MaxtErase.Value
        
        Console::WriteLine("An exception occured during Max tErase Select")
        
}
void SigNAS3NT::NUD_MaxtProgram_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtProgram.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myMaxtProgram(myLane) = NUD_MaxtProgram.Value
  
        Console::WriteLine("An exception occured during Max tProgram Select")

}

void SigNAS3NT::NUD_MaxtRead_ValueChanged(sender As Object, e As EventArgs) Handles NUD_MaxtRead.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myMaxtRead(myLane) = NUD_MaxtRead.Value
           
        Console::WriteLine("An exception occured during Max tRead Select")

        

        
}

//'Nand Settings
void SigNAS3NT::CB_Vendor_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Vendor.SelectedIndexChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).Vendor = myVendors(myLane)(CB_Vendor.SelectedIndex)
        myNandParameter(myLane).GetTypeItems(myTypesString(myLane))
        myNandParameter(myLane).GetSubTypeItems(mySubTypesString(myLane))
        myNandParameter(myLane).GetBlocksizeItems(myBlockSizesString(myLane))
        GetTypeCodeFromString(myTypesString(myLane), myTypes(myLane))
        GetSubTypeCodeFromString(mySubTypesString(myLane), mySubTypes(myLane))
        GetBlockSizeFromString(myBlockSizesString(myLane), myBlockSizes(myLane))
        RefreshType()
        
   
        Console::WriteLine("An exception occured during Vendor Select")

        
}
void SigNAS3NT::CB_Type_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Type.SelectedIndexChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).Type = myTypes(myLane)(CB_Type.SelectedIndex)
        myNandParameter(myLane).GetSubTypeItems(mySubTypesString(myLane))
        myNandParameter(myLane).GetBlocksizeItems(myBlockSizesString(myLane))
        GetSubTypeCodeFromString(mySubTypesString(myLane), mySubTypes(myLane))
        GetBlockSizeFromString(myBlockSizesString(myLane), myBlockSizes(myLane))
        RefreshSubType()
 
        Console::WriteLine("An exception occured during Type Select")

      
}
void SigNAS3NT::CB_Subtype_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_Subtype.SelectedIndexChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).SubType = mySubTypes(myLane)(CB_Subtype.SelectedIndex)
        myNandParameter(myLane).GetBlocksizeItems(myBlockSizesString(myLane))
        GetBlockSizeFromString(myBlockSizesString(myLane), myBlockSizes(myLane))
        RefreshBlockSize()

        Console::WriteLine("An exception occured during Subtype Select")
    
}
void SigNAS3NT::CB_IFMode_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_IFMode.SelectedIndexChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).IFMode = myIFModes(myLane)(CB_IFMode.SelectedIndex)
        RefreshEDOMode()
        RefreshBaseClock()   
      
        Console::WriteLine("An exception occured during IFMode Select")

        
}
void SigNAS3NT::CB_BlockSize_SelectedIndexChanged(sender As Object, e As EventArgs) Handles CB_BlockSize.SelectedIndexChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).BlockSize = myBlockSizes(myLane)(CB_BlockSize.SelectedIndex)
 
        Console::WriteLine("An exception occured during Subtype Select")
        
}
void SigNAS3NT::NUD_Pagesize_ValueChanged(sender As Object, e As EventArgs) Handles NUD_Pagesize.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).PageSize = PAGESIZE_INCREMENT * (NUD_Pagesize.Value \ PAGESIZE_INCREMENT)
        If myBBSByteOffset(myLane) >= myNandParameter(myLane).PageSize Then
        myBBSByteOffset(myLane) = myNandParameter(myLane).PageSize - 1
        
        RefreshPageSize()
        RefreshBBSByteOffset()
        
        
        

        

        Console::WriteLine("An exception occured during PageSize Select")

        

        
}
void SigNAS3NT::CX_ED0_CheckedChanged(sender As Object, e As EventArgs) Handles CX_EDO.CheckedChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).EDOMode = CX_EDO.Checked
        
        
        

        

        Console::WriteLine("An exception occured during EDOMode Select")

        

        
}
void SigNAS3NT::NUD_BaseClock_ValueChanged(sender As Object, e As EventArgs) Handles NUD_BaseClock.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).BaseClock = NUD_BaseClock.Value
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = (myNandParameter(myLane).tREH + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = (myNandParameter(myLane).tRP + 1) * myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = ""
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        TB_tWH.Text = ""
        TB_tWP.Text = ""
        TB_tREH.Text = ""
        TB_tRP.Text = ""
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        Case Else
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        TB_tREH.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tRP.Text = myNandParameter(myLane).BaseClock & "ns"
        TB_tDQS.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        
        
        

        

        Console::WriteLine("An exception occured during BaseClock Select")

        

        
}
void SigNAS3NT::NUD_tWH_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tWH.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).tWH = NUD_tWH.Value
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        TB_tWH.Text = ""
        Case Else
        TB_tWH.Text = (myNandParameter(myLane).tWH + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        End Select
        
      

        Console::WriteLine("An exception occured during tWH Select")


        
}

void SigNAS3NT::NUD_tWP_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tWP.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).tWP = NUD_tWP.Value
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        TB_tWP.Text = ""
        Case Else
        TB_tWP.Text = (myNandParameter(myLane).tWP + 1) * 2 * myNandParameter(myLane).BaseClock & "ns"
        End Select
        
        
        Console::WriteLine("An exception occured during tWP Select")
        
}
void SigNAS3NT::NUD_tREH_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tREH.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).tREH = NUD_tREH.Value
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        TB_tREH.Text = (myNandParameter(myLane).tREH + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        TB_tREH.Text = ""
        Case Else
        TB_tREH.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        
        
        

        

        Console::WriteLine("An exception occured during tREH Select")

        

        
}

void SigNAS3NT::NUD_tRP_ValueChanged(sender As Object, e As EventArgs) Handles NUD_tRP.ValueChanged
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        myNandParameter(myLane).tRP = NUD_tRP.Value
        Select Case myNandParameter(myLane).IFMode
        Case SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        TB_tRP.Text = (myNandParameter(myLane).tRP + 1) * myNandParameter(myLane).BaseClock & "ns"
        Case SigNAS3Library.NandParameter.IFModeCode.Synchronous
        TB_tRP.Text = ""
        Case Else
        TB_tRP.Text = myNandParameter(myLane).BaseClock & "ns"
        End Select
        
        
        

        

        Console::WriteLine("An exception occured during tRP Select")

        

        
}

//'Open Result File
void SigNAS3NT::BT_ResultFile_Click(sender As Object, e As EventArgs) Handles BT_ResultFile.Click
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        Dim SaveFileDialog = New SaveFileDialog()
        SaveFileDialog.Filter = "CSV File|*.csv"
        SaveFileDialog.Title = "Save Settings as CSV file"
        SaveFileDialog.ShowDialog()
        If SaveFileDialog.FileName <> "" Then
        myResultFile(myLane) = SaveFileDialog.FileName
        RefreshResultFile()
        RefreshProcessing()
        
              
        Console::WriteLine("An exception occured during ResultFile Select")

        
}

//'Load Settings
void SigNAS3NT::BT_LoadSettings_Click(sender As Object, e As EventArgs) Handles BT_LoadSettings.Click
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then

        Dim tVendor As SigNAS3Library.NandParameter.VendorCode = SigNAS3Library.NandParameter.VendorCode.Micron
        Dim tType As SigNAS3Library.NandParameter.TypeCode = SigNAS3Library.NandParameter.TypeCode.MLC
        Dim tSubType As SigNAS3Library.NandParameter.SubTypeCode = SigNAS3Library.NandParameter.SubTypeCode.Type0
        Dim tIFMode As SigNAS3Library.NandParameter.IFModeCode = SigNAS3Library.NandParameter.IFModeCode.Asynchronous
        Dim tBlockSize As Integer = 256
        Dim tPageSize As Integer = 8192
        Dim tEDOMode As Boolean = false
        Dim tBaseClock As Integer = 50
        Dim ttWH As Integer = 0
        Dim ttWP As Integer = 0
        Dim ttREH As Integer = 0
        Dim ttRP As Integer = 0
        Dim tVCore As Integer = VCORE_MIN
        Dim tVIO As Integer = VIO_MIN
        Dim tVref As Boolean = false
        Dim tVReset As Boolean = false
        Dim tChannelSelect() As Boolean = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false }
        Dim tChipSelect() As Boolean = { false, false, false, false, false, false, false, false }
        Dim tLUNperChip As Integer = LUN_PER_CHIP_MIN
        Dim tBBSByteOffset As Integer = BBS_BYTE_OFFSET_INITIAL
        Dim tBBSThreshold As Integer = BBS_THRESHOLD_INITIAL
        Dim tBlocksperLUN As Integer = BLOCK_PER_LUN_MIN
        Dim tLUNSeperation As Integer = BLOCK_PER_LUN_MIN
        Dim tNANDID() As String = { NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL, NANDID_INITIAL }
        Dim tBCHCodeLength As Integer = BCH_CODE_LENGTH_INITIAL
        Dim tBCHBitCorrectability As Integer = BCH_BIT_CORRECTABILITY_INITIAL
        Dim tMaxtErase As Integer = BUSYTIME_MIN
        Dim tMaxtProgram As Integer = BUSYTIME_MIN
        Dim tMaxtRead As Integer = BUSYTIME_MIN
        Dim tResultFile As String = ""

        Dim str0 As String
        Dim str1 As String
        Dim str2 As String

        Dim pos0 As Integer
        Dim pos1 As Integer
        Dim pos2 As Integer

        Dim OpenFileDialog = New OpenFileDialog()
        OpenFileDialog.Filter = "Text File|*.txt"
        OpenFileDialog.Title = "Open Settings text file"
        OpenFileDialog.ShowDialog()

        If OpenFileDialog.FileName <> "" Then

        Dim fs = My.Computer.FileSystem.OpenTextFileReader(OpenFileDialog.FileName)

        While Not fs.EndOfStream

        str0 = fs.ReadLine
        pos0 = InStr(1, str0, "#", CompareMethod.Text)
        If pos0 = 0 Then
        str1 = ""
        str2 = ""
        Else
        pos1 = InStr(pos0 + 1, str0, "#", CompareMethod.Text)
        If pos1 = 0 Then
        str1 = ""
        str2 = ""
        Else
        pos2 = InStr(pos1 + 1, str0, "#", CompareMethod.Text)
        If pos2 = 0 Then
        str1 = ""
        str2 = ""
        Else
        str1 = str0.Substring(pos0, pos1 - pos0 - 1)
        str2 = str0.Substring(pos1, pos2 - pos1 - 1)
        
        
        

        Select Case str1
        'Address Settings
        Case "CH0"
        Select Case str2
        Case "true"
        tChannelSelect(0) = true
        Case "false"
        tChannelSelect(0) = false
        End Select
        Case "CH1"
        Select Case str2
        Case "true"
        tChannelSelect(1) = true
        Case "false"
        tChannelSelect(1) = false
        End Select
        Case "CH2"
        Select Case str2
        Case "true"
        tChannelSelect(2) = true
        Case "false"
        tChannelSelect(2) = false
        End Select
        Case "CH3"
        Select Case str2
        Case "true"
        tChannelSelect(3) = true
        Case "false"
        tChannelSelect(3) = false
        End Select
        Case "CH4"
        Select Case str2
        Case "true"
        tChannelSelect(4) = true
        Case "false"
        tChannelSelect(4) = false
        End Select
        Case "CH5"
        Select Case str2
        Case "true"
        tChannelSelect(5) = true
        Case "false"
        tChannelSelect(5) = false
        End Select
        Case "CH6"
        Select Case str2
        Case "true"
        tChannelSelect(6) = true
        Case "false"
        tChannelSelect(6) = false
        End Select
        Case "CH7"
        Select Case str2
        Case "true"
        tChannelSelect(7) = true
        Case "false"
        tChannelSelect(7) = false
        End Select
        Case "CH8"
        Select Case str2
        Case "true"
        tChannelSelect(8) = true
        Case "false"
        tChannelSelect(8) = false
        End Select
        Case "CH9"
        Select Case str2
        Case "true"
        tChannelSelect(9) = true
        Case "false"
        tChannelSelect(9) = false
        End Select
        Case "CH10"
        Select Case str2
        Case "true"
        tChannelSelect(10) = true
        Case "false"
        tChannelSelect(10) = false
        End Select
        Case "CH11"
        Select Case str2
        Case "true"
        tChannelSelect(11) = true
        Case "false"
        tChannelSelect(11) = false
        End Select
        Case "CH12"
        Select Case str2
        Case "true"
        tChannelSelect(12) = true
        Case "false"
        tChannelSelect(12) = false
        End Select
        Case "CH13"
        Select Case str2
        Case "true"
        tChannelSelect(13) = true
        Case "false"
        tChannelSelect(13) = false
        End Select
        Case "CH14"
        Select Case str2
        Case "true"
        tChannelSelect(14) = true
        Case "false"
        tChannelSelect(14) = false
        End Select
        Case "CH15"
        Select Case str2
        Case "true"
        tChannelSelect(15) = true
        Case "false"
        tChannelSelect(15) = false
        End Select
        Case "Target0"
        Select Case str2
        Case "true"
        tChipSelect(0) = true
        Case "false"
        tChipSelect(0) = false
        End Select
        Case "Target1"
        Select Case str2
        Case "true"
        tChipSelect(4) = true
        Case "false"
        tChipSelect(4) = false
        End Select
        Case "Target2"
        Select Case str2
        Case "true"
        tChipSelect(1) = true
        Case "false"
        tChipSelect(1) = false
        End Select
        Case "Target3"
        Select Case str2
        Case "true"
        tChipSelect(5) = true
        Case "false"
        tChipSelect(5) = false
        End Select
        Case "Target4"
        Select Case str2
        Case "true"
        tChipSelect(2) = true
        Case "false"
        tChipSelect(2) = false
        End Select
        Case "Target5"
        Select Case str2
        Case "true"
        tChipSelect(6) = true
        Case "false"
        tChipSelect(6) = false
        End Select
        Case "Target6"
        Select Case str2
        Case "true"
        tChipSelect(3) = true
        Case "false"
        tChipSelect(3) = false
        End Select
        Case "Target7"
        Select Case str2
        Case "true"
        tChipSelect(7) = true
        Case "false"
        tChipSelect(7) = false
        End Select
        Case "LUNperTarget"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= LUN_PER_CHIP_MIN Then
        If mytemp <= LUN_PER_CHIP_MAX Then
        tLUNperChip = mytemp
        
        
        
        
        Case "BlocksperLUN"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BLOCK_PER_LUN_MIN Then
        If mytemp <= BLOCK_PER_LUN_MAX Then

        tBlocksperLUN = mytemp
        
        
        
        
        Case "LUNSeperation"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BLOCK_PER_LUN_MIN Then
        If mytemp <= BLOCK_PER_LUN_MAX Then
        tLUNSeperation = mytemp
        
        
        
        
        'Voltage Settings
        Case "VCore"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= VCORE_MIN Then
        If mytemp <= VCORE_MAX Then
        tVCore = mytemp
        
        
        
        
        Case "VIO"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= VIO_MIN Then
        If mytemp <= VIO_MAX Then
        tVIO = mytemp
        
        
        
        
        Case "Vref"
        Select Case str2
        Case "true"
        tVref = true
        Case "false"
        tVref = false
        End Select
        Case "VReset"
        Select Case str2
        Case "true"
        tVReset = true
        Case "false"
        tVReset = false
        End Select
        'Nand Settings
        Case "Vendor"
        Try
        Dim mytemp As SigNAS3Library.NandParameter.VendorCode = DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.VendorCode), str2), SigNAS3Library.NandParameter.VendorCode)
        tVendor = mytemp
        
        
        Case "Type"
        Try
        Dim mytemp As SigNAS3Library.NandParameter.TypeCode = DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.TypeCode), str2), SigNAS3Library.NandParameter.TypeCode)
        tType = mytemp
        
        
        Case "SubType"
        Try
        Dim mytemp As SigNAS3Library.NandParameter.SubTypeCode = DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.SubTypeCode), str2), SigNAS3Library.NandParameter.SubTypeCode)
        tSubType = mytemp
        
        
        Case "IFMode"
        Try
        Dim mytemp As SigNAS3Library.NandParameter.IFModeCode = DirectCast([Enum].Parse(GetType(SigNAS3Library.NandParameter.IFModeCode), str2), SigNAS3Library.NandParameter.IFModeCode)
        tIFMode = mytemp
        
        
        Case "BlockSize"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= SigNAS3Library.S3.PAGE_MIN Then
        If mytemp <= SigNAS3Library.S3.PAGE_MAX Then
        tBlockSize = mytemp
        
        
        
        
        Case "PageSize"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= PAGESIZE_MIN Then
        If mytemp <= PAGESIZE_MAX Then
        tPageSize = mytemp
        
        
        
        
        Case "EDOMode"
        Select Case str2
        Case "true"
        tEDOMode = true
        Case "false"
        tEDOMode = false
        End Select
        Case "BaseClock"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BASECLOCK_MIN Then
        If mytemp <= 2 * BASECLOCK_MAX Then
        tBaseClock = mytemp
        
        
        
        
        Case "tWH"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= t_MIN Then
        If mytemp <= t_MAX Then
        ttWH = mytemp
        
        
        
        
        Case "tWP"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= t_MIN Then
        If mytemp <= t_MAX Then
        ttWP = mytemp
        
        
        
        
        Case "tREH"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= t_MIN Then
        If mytemp <= t_MAX Then
        ttREH = mytemp
        
        
        
        
        Case "tRP"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= t_MIN Then
        If mytemp <= t_MAX Then
        ttRP = mytemp
        
        
        
        
        'Test Settings
        Case "NANDID0"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(0) = Hex(mytemp)
        For j = tNANDID(0).Length To 1
        tNANDID(0) = "0" & tNANDID(0)
        Next
        
        
        
        
        Case "NANDID1"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(1) = Hex(mytemp)
        For j = tNANDID(1).Length To 1
        tNANDID(1) = "0" & tNANDID(1)
        Next
        
        
        
        
        Case "NANDID2"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(2) = Hex(mytemp)
        For j = tNANDID(2).Length To 1
        tNANDID(2) = "0" & tNANDID(2)
        Next
        
        
        
        
        Case "NANDID3"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(3) = Hex(mytemp)
        For j = tNANDID(3).Length To 1
        tNANDID(3) = "0" & tNANDID(3)
        Next
        
        
        
        
        Case "NANDID4"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(4) = Hex(mytemp)
        For j = tNANDID(4).Length To 1
        tNANDID(4) = "0" & tNANDID(4)
        Next
        
        
        
        
        Case "NANDID5"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(5) = Hex(mytemp)
        For j = tNANDID(5).Length To 1
        tNANDID(5) = "0" & tNANDID(5)
        Next
        
        
        
        
        Case "NANDID6"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(6) = Hex(mytemp)
        For j = tNANDID(6).Length To 1
        tNANDID(6) = "0" & tNANDID(6)
        Next
        
        
        
        
        Case "NANDID7"
        Try
        If str2.Length >= 1 Then
        If str2.Length <= 2 Then
        Dim mytemp As UInteger = Convert.ToUInt32(str2, 16)
        tNANDID(7) = Hex(mytemp)
        For j = tNANDID(7).Length To 1
        tNANDID(7) = "0" & tNANDID(7)
        Next
        
        
        
        
        Case "TotalBBThreshold"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BBS_THRESHOLD_MIN Then
        If mytemp <= BBS_THRESHOLD_MAX Then
        tBBSThreshold = mytemp
        
        
        
        
        Case "BBSByteOffset"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BBS_BYTE_OFFSET_MIN Then
        If mytemp <= BBS_BYTE_OFFSET_MAX Then
        tBBSByteOffset = mytemp
        
        
        
        
        Case "BCHCodeLength"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BCH_CODE_LENGTH_MIN Then
        If mytemp <= BCH_CODE_LENGTH_MAX Then
        tBCHCodeLength = mytemp
        
        
        
        
        Case "BCHBitCorrectability"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BCH_BIT_CORRECTABILITY_MIN Then
        If mytemp <= BCH_BIT_CORRECTABILITY_MAX Then
        tBCHBitCorrectability = mytemp
        
        
        
        
        Case "MaxtErase"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BUSYTIME_MIN Then
        If mytemp <= BUSYTIME_MAX Then
        tMaxtErase = mytemp
        
        
        
        
        Case "MaxtProgram"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BUSYTIME_MIN Then
        If mytemp <= BUSYTIME_MAX Then
        tMaxtProgram = mytemp
        
        
        
        
        Case "MaxtRead"
        Try
        Dim mytemp As Integer = Convert.ToInt32(str2)
        If mytemp >= BUSYTIME_MIN Then
        If mytemp <= BUSYTIME_MAX Then
        tMaxtRead = mytemp
        
        
        
        
        Case "ResultFile"
        tResultFile = str2
        End Select

        End While

        fs.Close()

        myNandParameter(myLane).Vendor = tVendor
        myNandParameter(myLane).Type = tType
        myNandParameter(myLane).SubType = tSubType
        myNandParameter(myLane).IFMode = tIFMode
        myNandParameter(myLane).BlockSize = tBlockSize
        myNandParameter(myLane).PageSize = tPageSize
        myNandParameter(myLane).EDOMode = tEDOMode
        myNandParameter(myLane).BaseClock = tBaseClock
        myNandParameter(myLane).tWH = ttWH
        myNandParameter(myLane).tWP = ttWP
        myNandParameter(myLane).tREH = ttREH
        myNandParameter(myLane).tRP = ttRP
        myVCore(myLane) = tVCore
        myVIO(myLane) = tVIO
        myVref(myLane) = tVref
        myVReset(myLane) = tVReset
        For j = 0 To 15
        myChannelSelect(myLane)(j) = tChannelSelect(j)
        Next
        For j = 0 To 7
        myChipSelect(myLane)(j) = tChipSelect(j)
        Next
        myLUNperTarget(myLane) = tLUNperChip
        myBlocksperLUN(myLane) = tBlocksperLUN
        myLUNSeperation(myLane) = tLUNSeperation
        myBBSThreshold(myLane) = tBBSThreshold
        For j = 0 To 7
        myNANDID(myLane)(j) = tNANDID(j)
        Next
        If tBBSByteOffset < myNandParameter(myLane).PageSize Then
        myBBSByteOffset(myLane) = tBBSByteOffset
        Else
        myBBSByteOffset(myLane) = myNandParameter(myLane).PageSize - 1
        
        myBCHCodeLength(myLane) = tBCHCodeLength
        myBCHBitCorrectability(myLane) = tBCHBitCorrectability
        myMaxtErase(myLane) = tMaxtErase
        myMaxtProgram(myLane) = tMaxtProgram
        myMaxtRead(myLane) = tMaxtRead
        myResultFile(myLane) = tResultFile
        myNandParameter(myLane).GetTypeItems(myTypesString(myLane))
        myNandParameter(myLane).GetSubTypeItems(mySubTypesString(myLane))
        myNandParameter(myLane).GetBlocksizeItems(myBlockSizesString(myLane))
        GetTypeCodeFromString(myTypesString(myLane), myTypes(myLane))
        GetSubTypeCodeFromString(mySubTypesString(myLane), mySubTypes(myLane))
        GetBlockSizeFromString(myBlockSizesString(myLane), myBlockSizes(myLane))

        RefreshSettings()
        RefreshProcessing()

        
        
        
        

        

        Console::WriteLine("An exception occured during Load Settings")

        

        
}

void SigNAS3NT::BT_SaveSettings_Click(sender As Object, e As EventArgs) Handles BT_SaveSettings.Click
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then

        Dim str As String = ""

        'Nand Settings

        str &= "#Vendor#" & CType(myNandParameter(myLane).Vendor, SigNAS3Library.NandParameter.VendorCode).ToString() & "#" & vbCrLf
        str &= "#Type#" & CType(myNandParameter(myLane).Type, SigNAS3Library.NandParameter.TypeCode).ToString() & "#" & vbCrLf
        str &= "#SubType#" & CType(myNandParameter(myLane).SubType, SigNAS3Library.NandParameter.SubTypeCode).ToString() & "#" & vbCrLf
        str &= "#IFMode#" & CType(myNandParameter(myLane).IFMode, SigNAS3Library.NandParameter.IFModeCode).ToString() & "#" & vbCrLf
        str &= "#BlockSize#" & myNandParameter(myLane).BlockSize & "#" & vbCrLf
        str &= "#PageSize#" & myNandParameter(myLane).PageSize & "#" & vbCrLf
        str &= "#EDOMode#" & myNandParameter(myLane).EDOMode & "#" & vbCrLf
        str &= "#BaseClock#" & myNandParameter(myLane).BaseClock & "#" & vbCrLf
        str &= "#tWH#" & myNandParameter(myLane).tWH & "#" & vbCrLf
        str &= "#tWP#" & myNandParameter(myLane).tWP & "#" & vbCrLf
        str &= "#tREH#" & myNandParameter(myLane).tREH & "#" & vbCrLf
        str &= "#tRP#" & myNandParameter(myLane).tRP & "#" & vbCrLf

        'Voltage Settings

        str &= "#VCore#" & myVCore(myLane) & "#" & vbCrLf
        str &= "#VIO#" & myVIO(myLane) & "#" & vbCrLf
        str &= "#Vref#" & myVref(myLane) & "#" & vbCrLf
        str &= "#VReset#" & myVReset(myLane) & "#" & vbCrLf

        'Address Settings

        str &= "#CH0#" & myChannelSelect(myLane)(0) & "#" & vbCrLf
        str &= "#CH1#" & myChannelSelect(myLane)(1) & "#" & vbCrLf
        str &= "#CH2#" & myChannelSelect(myLane)(2) & "#" & vbCrLf
        str &= "#CH3#" & myChannelSelect(myLane)(3) & "#" & vbCrLf
        str &= "#CH4#" & myChannelSelect(myLane)(4) & "#" & vbCrLf
        str &= "#CH5#" & myChannelSelect(myLane)(5) & "#" & vbCrLf
        str &= "#CH6#" & myChannelSelect(myLane)(6) & "#" & vbCrLf
        str &= "#CH7#" & myChannelSelect(myLane)(7) & "#" & vbCrLf
        str &= "#CH8#" & myChannelSelect(myLane)(8) & "#" & vbCrLf
        str &= "#CH9#" & myChannelSelect(myLane)(9) & "#" & vbCrLf
        str &= "#CH10#" & myChannelSelect(myLane)(10) & "#" & vbCrLf
        str &= "#CH11#" & myChannelSelect(myLane)(11) & "#" & vbCrLf
        str &= "#CH12#" & myChannelSelect(myLane)(12) & "#" & vbCrLf
        str &= "#CH13#" & myChannelSelect(myLane)(13) & "#" & vbCrLf
        str &= "#CH14#" & myChannelSelect(myLane)(14) & "#" & vbCrLf
        str &= "#CH15#" & myChannelSelect(myLane)(15) & "#" & vbCrLf
        str &= "#Target0#" & myChipSelect(myLane)(0) & "#" & vbCrLf
        str &= "#Target1#" & myChipSelect(myLane)(4) & "#" & vbCrLf
        str &= "#Target2#" & myChipSelect(myLane)(1) & "#" & vbCrLf
        str &= "#Target3#" & myChipSelect(myLane)(5) & "#" & vbCrLf
        str &= "#Target4#" & myChipSelect(myLane)(2) & "#" & vbCrLf
        str &= "#Target5#" & myChipSelect(myLane)(6) & "#" & vbCrLf
        str &= "#Target6#" & myChipSelect(myLane)(3) & "#" & vbCrLf
        str &= "#Target7#" & myChipSelect(myLane)(7) & "#" & vbCrLf
        str &= "#LUNperTarget#" & myLUNperTarget(myLane) & "#" & vbCrLf
        str &= "#BlocksperLUN#" & myBlocksperLUN(myLane) & "#" & vbCrLf
        str &= "#LUNSeperation#" & myLUNSeperation(myLane) & "#" & vbCrLf

        'Test Settings

        str &= "#NANDID0#" & myNANDID(myLane)(0) & "#" & vbCrLf
        str &= "#NANDID1#" & myNANDID(myLane)(1) & "#" & vbCrLf
        str &= "#NANDID2#" & myNANDID(myLane)(2) & "#" & vbCrLf
        str &= "#NANDID3#" & myNANDID(myLane)(3) & "#" & vbCrLf
        str &= "#NANDID4#" & myNANDID(myLane)(4) & "#" & vbCrLf
        str &= "#NANDID5#" & myNANDID(myLane)(5) & "#" & vbCrLf
        str &= "#NANDID6#" & myNANDID(myLane)(6) & "#" & vbCrLf
        str &= "#NANDID7#" & myNANDID(myLane)(7) & "#" & vbCrLf
        str &= "#TotalBBThreshold#" & myBBSThreshold(myLane) & "#" & vbCrLf
        str &= "#BBSByteOffset#" & myBBSByteOffset(myLane) & "#" & vbCrLf
        str &= "#BCHCodeLength#" & myBCHCodeLength(myLane) & "#" & vbCrLf
        str &= "#BCHBitCorrectability#" & myBCHBitCorrectability(myLane) & "#" & vbCrLf
        str &= "#MaxtErase#" & myMaxtErase(myLane) & "#" & vbCrLf
        str &= "#MaxtProgram#" & myMaxtProgram(myLane) & "#" & vbCrLf
        str &= "#MaxtRead#" & myMaxtRead(myLane) & "#" & vbCrLf

        'Result File

        str &= "#ResultFile#" & myResultFile(myLane) & "#" & vbcrlf

        Dim SaveFileDialog = New SaveFileDialog()
        SaveFileDialog.Filter = "Text File|*.txt"
        SaveFileDialog.Title = "Save Settings as text file"
        SaveFileDialog.ShowDialog()

        If SaveFileDialog.FileName <> "" Then

        My.Computer.FileSystem.WriteAllText(SaveFileDialog.FileName, str, false)
        

        Console::WriteLine("An exception occured during Save Settings")
        
}
void SigNAS3NT::BT_Execute_Click(sender As Object, e As EventArgs) Handles BT_Execute.Click
{
        Try

        If flag_opened Then
        If myLane >= 0 Then
        If myLane <= 7 Then
        For k = 0 To 15
        For j = 0 To 7
        myNANDIDCheck(myLane)(k)(j) = true
        For i = 0 To 3
        myLUNStatus(myLane)(k)(j)(i) = 0
        myONFIBB(myLane)(k)(j)(i) = 0
        myEraseSuccessBB(myLane)(k)(j)(i) = 0
        myBlockProgramSuccessBB(myLane)(k)(j)(i) = 0
        myECCFailBB(myLane)(k)(j)(i) = 0
        myEraseBusytimeBB(myLane)(k)(j)(i) = 0
        myProgramBusytimeBB(myLane)(k)(j)(i) = 0
        myReadBusytimeBB(myLane)(k)(j)(i) = 0
        RefreshLUNStatus(k, j, i)
        Next

        Next
        Next
        myLaneProcessing(myLane) = true
        RefreshProcessing()
        myStatus(myLane) = "Retrieving Status of Lane " & myLane & "..."
        RefreshStatus(false)
        Dim r_status(7) As Integer
        For j = 0 To 7
        r_status(j) = 0
        Next
        Dim errcode As Boolean = myS3.GetLaneStatus(r_status)
        If errcode < > 0 Then
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "GetLaneStatus returned error code " & errcode & ": " & SigNAS3Library.Err.GetErrDescription(errcode) & ". Aborted"
        Else
        Select Case r_status(myLane)
        Case 0
        myStatus(myLane) = "Lane " & myLane & " is unconnected. Establishing connection with Lane " & myLane & "..."
        RefreshStatus(false)
        Dim mylanemap(7) As Boolean
        For j = 0 To 7
        mylanemap(j) = false
        Next
        mylanemap(myLane) = true
        errcode = myS3.ConnectLane(mylanemap)
        If errcode < > 0 Then
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "ConnectLane returned error code " & errcode & ": " & SigNAS3Library.Err.GetErrDescription(errcode) & ". Aborted"
        Else
        Dim r_status2(7) As Integer
        For j = 0 To 7
        r_status2(j) = 0
        Next
        errcode = myS3.GetLaneStatus(r_status2)
        If errcode < > 0 Then
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "GetLaneStatus returned error code " & errcode & ": " & SigNAS3Library.Err.GetErrDescription(errcode) & ". Aborted"
        Else
        Select Case r_status2(myLane)
        Case 0
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "Unable to establish connection to Lane " & myLane & ". Aborted."
        Case 1
        Dim r_Lane As Integer = 0
        Dim ExecuteCaller As New ExecuteDelegate(AddressOf Execute)
        Dim result As IAsyncResult = ExecuteCaller.BeginInvoke(myLane, r_Lane, AddressOf ExecuteCallback, Nothing)
        Case Else
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "Lane " & myLane & " is busy. Aborted."
        End Select
        
        
        Case 1
        Dim r_Lane As Integer = 0
        Dim ExecuteCaller As New ExecuteDelegate(AddressOf Execute)
        Dim result As IAsyncResult = ExecuteCaller.BeginInvoke(myLane, r_Lane, AddressOf ExecuteCallback, Nothing)
        Case Else
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "Lane " & myLane & " is busy. Aborted."
        End Select
        
        
        
        

        

        Console::WriteLine("An exception occured during Execute")
        If myLane >= 0 Then
        If myLane <= 7 Then
        myLaneProcessing(myLane) = false
        myStatus(myLane) = "An exception occured during Execute. Aborted"
        
        

        

        If myLane >= 0 Then
        If myLane <= 7 Then
        RefreshStatus(false)
        RefreshProcessing()
        
        

        

        
}
void SigNAS3NT::ExecuteCallback(ar As IAsyncResult)
{
    Dim r_Lane As Integer = -1

        Try

        Dim result As AsyncResult = CType(ar, AsyncResult)
        Dim ExecuteCaller As ExecuteDelegate = CType(result.AsyncDelegate, ExecuteDelegate)
        ExecuteCaller.EndInvoke(r_Lane, result)

        

        Console::WriteLine("An exception occured during Execute")
        If r_Lane >= 0 Then
        If r_Lane <= 7 Then
        myStatus(r_Lane) = "An exception occured during Execute. Aborted"
        
        

        

        If r_Lane >= 0 Then
        If r_Lane <= 7 Then
        myLaneProcessing(r_Lane) = false
        If r_Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), false)
        BeginInvoke(New RefreshProcessingDelegate(AddressOf RefreshProcessing))
        
        
        

        

        
}
        //Private Delegate Function ExecuteDelegate(ByVal Lane As Integer, ByRef r_Lane As Integer) As Boolean
Boolean SigNAS3NT::Execute(Int32 Lane, Int32 &r_Lane)
{
    r_Lane = Lane
        Dim myFile As IO.StreamWriter = Nothing
        Dim file_flag = false

        Try

        myTime(Lane) = 0
        BeginInvoke(New TimerStartDelegate(AddressOf myTimer(Lane).Start))
        myStatus(Lane) = "Preparing test..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        

        Try
        myFile = My.Computer.FileSystem.OpenTextFileWriter(myResultFile(Lane), false)
        file_flag = true
        
        

        If file_flag = false Then
        myStatus(Lane) = "Unable to open Result File " & myResultFile(Lane) & ". Please ensure path exists and file is not being used by some other application"
        Execute = false
        Exit Try
        

        Dim ofst As Integer
        Dim ofst2 As Integer
        Dim myChip As Integer
        Dim booltemp As Boolean

        Dim myAddressParameter As New SigNAS3Library.AddressParameter
        For k = 0 To 15
        If myChannelSelect(Lane)(k) Then
        myAddressParameter.channel(k) = true
        Else
        myAddressParameter.channel(k) = false
        
        Next

        Dim myBlockPatternParameter As New SigNAS3Library.BlockPatternParameter
        myBlockPatternParameter.patternselect = SigNAS3Library.BlockPatternParameter.BlockPatternCode.PseudoRandomOverall
        myBlockPatternParameter.seedvalue = &H456789AB

        Dim errcode_SetVoltage As Integer = 0
        Dim errcode_SetNANDParameter As Integer = 0
        Dim errcode_GetNANDID As Integer
        Dim r_NANDID(7) As Byte

        Dim errcode_ONFIBBS(1) As Integer
        Dim r_ONFIBBS_data(1)() As Byte
        Dim r_ONFIBBS_success(1)() As Boolean
        For k = 0 To 1
        ReDim r_ONFIBBS_data(k)(63)
        ReDim r_ONFIBBS_success(k)(15)
        Next

        Dim errcode_Erase As Integer
        Dim r_Erase_success(15) As Boolean
        Dim r_Erase_busytime(15) As UInteger

        Dim errcode_BlockProgram As Integer
        Dim r_BlockProgram_success(15) As Boolean
        Dim r_BlockProgram_busytime_error(15) As Integer

        Dim errcode_BlockReadErrCnt As Integer
        Dim r_BlockReadErrCnt_errorbitnum(15) As Integer
        Dim r_BlockReadErrCnt_errorhistogram(255 * 16 - 1) As Integer
        Dim r_BlockReadErrCnt_success(15) As Boolean
        Dim r_BlockReadErrCnt_busytime_error(15) As Integer

        If flag_abort(Lane) Then
        myStatus(Lane) = "Preparation complete. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        

        myStatus(Lane) = "Setting Voltage..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        errcode_SetVoltage = myS3.SetVoltage(Lane, myVCore(Lane), myVIO(Lane), myVref(Lane), myVReset(Lane))
        If errcode_SetVoltage < > 0 Then
        myStatus(Lane) = "SetVoltage returned error code " & errcode_SetVoltage & ": " & SigNAS3Library.Err.GetErrDescription(errcode_SetVoltage) & ". Aborted"
        Execute = false
        Exit Try
        

        If flag_abort(Lane) Then
        myStatus(Lane) = "Voltage set. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        

        myStatus(Lane) = "Setting Nand Parameters..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        

        errcode_SetNANDParameter = myS3.SetNANDParameter(Lane, myNandParameter(Lane))
        If errcode_SetNANDParameter < > 0 Then
        myStatus(Lane) = "SetNANDParameter returned error code " & errcode_SetNANDParameter & ": " & SigNAS3Library.Err.GetErrDescription(errcode_SetNANDParameter) & ". Aborted"
        Execute = false
        Exit Try
        

        If flag_abort(Lane) Then
        myStatus(Lane) = "Nand Parameters set. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        

        For k = 0 To 7
        myChip = 4 * (k Mod 2) + k \ 2
        If myChipSelect(Lane)(myChip) Then
        myStatus(Lane) = "Reading NAND ID (Target " & k & ")..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        myAddressParameter.chip = myChip
        For j = 0 To 7
        r_NANDID(j) = CByte(0)
        Next
        errcode_GetNANDID = GetNandID(Lane, myAddressParameter, r_NANDID)
        If errcode_GetNANDID < > 0 Then
        myStatus(Lane) = "GetNANDID (Target " & k & ")  returned error code " & errcode_GetNANDID & ": " & SigNAS3Library.Err.GetErrDescription(errcode_GetNANDID) & ". Aborted"
        For j = 0 To 15
        If myAddressParameter.channel(j) Then
        myNANDIDCheck(Lane)(j)(myChip) = false
        
        For i = 0 To myLUNperTarget(Lane) - 1
        myLUNStatus(Lane)(j)(myChip)(i) = GetLUNStatus(Lane, j, myChip, i)
        If Lane = myLane Then
        BeginInvoke(New RefreshLUNStatusDelegate(AddressOf RefreshLUNStatus), j, myChip, i)
        
        Next
        Next
        Execute = false
        Exit Try
        Else
        ofst = 0
        For j = 0 To 15
        If myAddressParameter.channel(j) Then
        ofst2 = 0
        For i = 0 To 7
        If r_NANDID(ofst) = CByte(Convert.ToInt32(myNANDID(Lane)(i), 16)) Then
        ofst2 += 1
        
        ofst += 1
        Next
        If ofst2 = 8 Then
        myNANDIDCheck(Lane)(j)(myChip) = true
        Else
        myNANDIDCheck(Lane)(j)(myChip) = false
        
        For i = 0 To myLUNperTarget(Lane) - 1
        myLUNStatus(Lane)(j)(myChip)(i) = GetLUNStatus(Lane, j, myChip, i)
        If Lane = myLane Then
        BeginInvoke(New RefreshLUNStatusDelegate(AddressOf RefreshLUNStatus), j, myChip, i)
        
        Next
        
        Next
        
        If flag_abort(Lane) Then
        myStatus(Lane) = "NAND ID (Target " & k & ") read. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        
        
        Next

        For k = 0 To myBlocksperLUN(Lane) - 1
        For j = 0 To myLUNperTarget(Lane) - 1
        myAddressParameter.block = j * myLUNSeperation(Lane) + k
        For i = 0 To 7
        myChip = 4 * (i Mod 2) + i \ 2
        If myChipSelect(Lane)(myChip) Then
        myStatus(Lane) = "ONFI Bad Block Scan (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ")..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        For h = 0 To 15
        If myChannelSelect(Lane)(h) Then
        If myNANDIDCheck(Lane)(h)(myChip) Then
        myAddressParameter.channel(h) = true
        Else
        myAddressParameter.channel(h) = false
        
        Else
        myAddressParameter.channel(h) = false
        
        Next
        myAddressParameter.chip = myChip
        myAddressParameter.page = 0
        For h = 0 To 63
        r_ONFIBBS_data(0)(h) = CByte(0)
        Next
        For h = 0 To 15
        r_ONFIBBS_success(0)(h) = false
        Next
        errcode_ONFIBBS(0) = myS3.PageReadDump(Lane, myAddressParameter, myBBSByteOffset(Lane), 1, r_ONFIBBS_data(0), r_ONFIBBS_success(0))
        If errcode_ONFIBBS(0) < > 0 Then
        myStatus(Lane) = "PageReadDump (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ", Page " & myAddressParameter.page.ToString("X4") & ") returned error code " & errcode_ONFIBBS(0) & ": " & SigNAS3Library.Err.GetErrDescription(errcode_ONFIBBS(0)) & ". Aborted"
        Execute = false
        Exit Try
        
        myAddressParameter.page = myNandParameter(Lane).BlockSize - 1
        For h = 0 To 63
        r_ONFIBBS_data(1)(h) = CByte(0)
        Next
        For h = 0 To 15
        r_ONFIBBS_success(1)(h) = false
        Next
        errcode_ONFIBBS(1) = myS3.PageReadDump(Lane, myAddressParameter, myBBSByteOffset(Lane), 1, r_ONFIBBS_data(1), r_ONFIBBS_success(1))
        If errcode_ONFIBBS(1) < > 0 Then
        myStatus(Lane) = "PageReadDump (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ", Page " & myAddressParameter.page.ToString("X4") & ") returned error code " & errcode_ONFIBBS(1) & ": " & SigNAS3Library.Err.GetErrDescription(errcode_ONFIBBS(1)) & ". Aborted"
        Execute = false
        Exit Try
        
        If flag_abort(Lane) Then
        myStatus(Lane) = "ONFI Bad Block Scan (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") complete. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        
        myStatus(Lane) = "Erase (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ")..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        For h = 0 To 15
        r_Erase_success(h) = false
        r_Erase_busytime(h) = 0
        Next
        errcode_Erase = myS3.BlockErase(Lane, myAddressParameter, r_Erase_success, r_Erase_busytime)
        If errcode_Erase < > 0 Then
        myStatus(Lane) = "BlockErase (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") returned error code " & errcode_Erase & ": " & SigNAS3Library.Err.GetErrDescription(errcode_Erase) & ". Aborted"
        Execute = false
        Exit Try
        
        If flag_abort(Lane) Then
        myStatus(Lane) = "Erase (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") complete. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        
        myStatus(Lane) = "Program (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ")..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        For h = 0 To 15
        r_BlockProgram_success(h) = false
        r_BlockProgram_busytime_error(h) = 0
        Next
        errcode_BlockProgram = myS3.BlockProgram(Lane, myAddressParameter, myBlockPatternParameter, 50 * myMaxtProgram(Lane), r_BlockProgram_success, r_BlockProgram_busytime_error)
        If errcode_BlockProgram < > 0 Then
        myStatus(Lane) = "BlockProgram (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") returned error code " & errcode_BlockProgram & ": " & SigNAS3Library.Err.GetErrDescription(errcode_BlockProgram) & ". Aborted"
        Execute = false
        Exit Try
        
        If flag_abort(Lane) Then
        myStatus(Lane) = "Program (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") complete. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        
        myStatus(Lane) = "Read (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ")..."
        If Lane = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        For h = 0 To 15
        r_BlockReadErrCnt_errorbitnum(h) = 0
        r_BlockReadErrCnt_success(h) = false
        r_BlockReadErrCnt_busytime_error(h) = 0
        Next
        For h = 0 To 255 * 16 - 1
        r_BlockReadErrCnt_errorhistogram(h) = 0
        Next
        errcode_BlockReadErrCnt = myS3.BlockReadErrCnt(Lane, myAddressParameter, myBlockPatternParameter, myBCHCodeLength(Lane), 50 * myMaxtRead(Lane), r_BlockReadErrCnt_errorbitnum, r_BlockReadErrCnt_errorhistogram, r_BlockReadErrCnt_success, r_BlockReadErrCnt_busytime_error)
        If errcode_BlockReadErrCnt < > 0 Then
        myStatus(Lane) = "BlockReadErrCnt (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") returned error code " & errcode_BlockReadErrCnt & ": " & SigNAS3Library.Err.GetErrDescription(errcode_BlockReadErrCnt) & ". Aborted"
        Execute = false
        Exit Try
        
        If flag_abort(Lane) Then
        myStatus(Lane) = "Read (Target " & i & ", LUN" & j & ", Block " & k.ToString("X4") & ") complete. Aborted"
        flag_abort(Lane) = false
        Execute = false
        Exit Try
        

        ofst = 0
        ofst2 = 0
        For h = 0 To 15
        If myAddressParameter.channel(h) Then
        booltemp = true
        If r_ONFIBBS_success(0)(h) Then
        If r_ONFIBBS_data(0)(ofst) = CByte(0) Then
        myONFIBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        Else
        If r_ONFIBBS_success(1)(h) Then
        If r_ONFIBBS_data(1)(ofst) = CByte(0) Then
        myONFIBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        
        
        Else
        If r_ONFIBBS_success(1)(h) Then
        If r_ONFIBBS_data(1)(ofst) = CByte(0) Then
        myONFIBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        Else
        myONFIBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        
        If booltemp Then
        If r_Erase_success(h) = false Then
        myEraseSuccessBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        If booltemp Then
        If r_BlockProgram_success(h) = false Then
        myBlockProgramSuccessBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        If booltemp Then
        If r_BlockReadErrCnt_success(h) = false Then
        myECCFailBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        If booltemp Then
        For g = (myBCHBitCorrectability(Lane) + 1) To 254
        If r_BlockReadErrCnt_errorhistogram(ofst2 + g) > 0 Then
        myECCFailBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        g = 254
        
        Next
        If booltemp Then
        If(CInt(r_Erase_busytime(h)) \ 50) > myMaxtErase(Lane) Then
        myEraseBusytimeBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        If booltemp Then
        If r_BlockProgram_busytime_error(h) > 0 Then
        myProgramBusytimeBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        If booltemp Then
        If r_BlockReadErrCnt_busytime_error(h) > 0 Then
        myReadBusytimeBB(Lane)(h)(myChip)(j) += 1
        booltemp = false
        
        
        
        
        
        
        
        
        If booltemp = false Then
        myLUNStatus(Lane)(h)(myChip)(j) = GetLUNStatus(Lane, h, myChip, j)
        If Lane = myLane Then
        BeginInvoke(New RefreshLUNStatusDelegate(AddressOf RefreshLUNStatus), h, myChip, j)
        
        
        ofst += 4
        ofst2 += 255
        
        Next
        myBlockPatternParameter.seedvalue += 1
        
        Next
        Next
        Next

        myStatus(Lane) = "Execution Successful"
        Execute = true

        

        Console::WriteLine("An exception occured during Execute")
        myStatus(Lane) = "An exception occured during Execute. Aborted"
        Execute = false

        

        If file_flag Then
        Try
        Dim myFileStr As String
        Dim myChip As Integer
        Dim myPackage(15)()() As Boolean
        Dim myPackageOverall(15) As Boolean
        For k = 0 To 15
        ReDim myPackage(k)(7)
        myPackageOverall(k) = true
        For j = 0 To 7
        ReDim myPackage(k)(j)(3)
        For i = 0 To 3
        myPackage(k)(j)(i) = true
        Next
        Next
        Next
        myFileStr = " "
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        myFileStr &= ", CH" & k
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = " "
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        myFileStr &= ", Target" & j
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = " "
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        myFileStr &= ", LUN" & i
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "ID Status"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", Match"
        Else
        myFileStr &= ", Miss"
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Factory BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myONFIBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Erase BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myEraseSuccessBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Program BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myBlockProgramSuccessBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "ECC BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myECCFailBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "tErase BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myEraseBusytimeBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "tProgram BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myProgramBusytimeBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "tRead BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myReadBusytimeBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Total BB"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        myFileStr &= ", " & myONFIBB(Lane)(k)(myChip)(i) + myEraseSuccessBB(Lane)(k)(myChip)(i) + myBlockProgramSuccessBB(Lane)(k)(myChip)(i) + myECCFailBB(Lane)(k)(myChip)(i) + myEraseBusytimeBB(Lane)(k)(myChip)(i) + myProgramBusytimeBB(Lane)(k)(myChip)(i) + myReadBusytimeBB(Lane)(k)(myChip)(i)
        Else
        myFileStr &= ", "
        
        
        
        Next
        Next
        Next

        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myNANDIDCheck(Lane)(k)(myChip) Then
        If(myONFIBB(Lane)(k)(myChip)(i) + myEraseSuccessBB(Lane)(k)(myChip)(i) + myBlockProgramSuccessBB(Lane)(k)(myChip)(i) + myECCFailBB(Lane)(k)(myChip)(i) + myEraseBusytimeBB(Lane)(k)(myChip)(i) + myProgramBusytimeBB(Lane)(k)(myChip)(i) + myReadBusytimeBB(Lane)(k)(myChip)(i)) > myBBSThreshold(Lane) Then
        myPackage(k)(myChip)(i) = false
        myPackageOverall(k) = false
        
        Else
        myPackage(k)(myChip)(i) = false
        myPackageOverall(k) = false
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Die Result"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myPackage(k)(myChip)(i) Then
        myFileStr &= ", Good"
        Else
        myFileStr &= ", Bad"
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        myFileStr = "Result Total"
        For k = 0 To 15
        For j = 0 To 7
        myChip = 4 * (j Mod 2) + j \ 2
        For i = 0 To myLUNperTarget(Lane) - 1
        If myChannelSelect(Lane)(k) Then
        If myChipSelect(Lane)(myChip) Then
        If myPackageOverall(k) Then
        myFileStr &= ", Good"
        Else
        myFileStr &= ", Bad"
        
        
        
        Next
        Next
        Next
        myFile.WriteLine(myFileStr)
        
        myStatus(Lane) &= " (Unable to successfully write to Result File " & myResultFile(Lane) & ")"
        
        myFile.Close()
        
        BeginInvoke(New TimerStopDelegate(AddressOf myTimer(Lane).Stop))
        myStatus(Lane) &= " (" & (myTime(myLane) \ 3600).ToString.PadLeft(2, "0"c) & "h:" & ((myTime(myLane) \ 60) Mod 60).ToString.PadLeft(2, "0"c) & "m:" & (myTime(myLane) Mod 60).ToString.PadLeft(2, "0"c) & "s)"

        

        
}
        //Private Delegate Sub TimerStartDelegate()
        //Private Delegate Sub TimerStopDelegate()

void SigNAS3NT::BT_Abort_Click(sender As Object, e As EventArgs) Handles BT_Abort.Click
{
        Try

        flag_abort(myLane) = true

        

        Console::WriteLine("An exception occured during Abort")

        

        
}
void SigNAS3NT::L_LUN_MouseHover(sender As Object, e As EventArgs) Handles L_CH0Target0LUN0.MouseHover, L_CH0Target0LUN1.MouseHover, L_CH0Target0LUN2.MouseHover, L_CH0Target0LUN3.MouseHover, L_CH0Target2LUN0.MouseHover, L_CH0Target2LUN1.MouseHover, L_CH0Target2LUN2.MouseHover, L_CH0Target2LUN3.MouseHover, L_CH0Target4LUN0.MouseHover, L_CH0Target4LUN1.MouseHover, L_CH0Target4LUN2.MouseHover, L_CH0Target4LUN3.MouseHover, L_CH0Target6LUN0.MouseHover, L_CH0Target6LUN1.MouseHover, L_CH0Target6LUN2.MouseHover, L_CH0Target6LUN3.MouseHover, L_CH0Target1LUN0.MouseHover, L_CH0Target1LUN1.MouseHover, L_CH0Target1LUN2.MouseHover, L_CH0Target1LUN3.MouseHover, L_CH0Target3LUN0.MouseHover, L_CH0Target3LUN1.MouseHover, L_CH0Target3LUN2.MouseHover, L_CH0Target3LUN3.MouseHover, L_CH0Target5LUN0.MouseHover, L_CH0Target5LUN1.MouseHover, L_CH0Target5LUN2.MouseHover, L_CH0Target5LUN3.MouseHover, L_CH0Target7LUN0.MouseHover, L_CH0Target7LUN1.MouseHover, L_CH0Target7LUN2.MouseHover, L_CH0Target7LUN3.MouseHover, L_CH1Target0LUN0.MouseHover, L_CH1Target0LUN1.MouseHover, L_CH1Target0LUN2.MouseHover, L_CH1Target0LUN3.MouseHover, L_CH1Target2LUN0.MouseHover, L_CH1Target2LUN1.MouseHover, L_CH1Target2LUN2.MouseHover, L_CH1Target2LUN3.MouseHover, L_CH1Target4LUN0.MouseHover, L_CH1Target4LUN1.MouseHover, L_CH1Target4LUN2.MouseHover, L_CH1Target4LUN3.MouseHover, L_CH1Target6LUN0.MouseHover, L_CH1Target6LUN1.MouseHover, L_CH1Target6LUN2.MouseHover, L_CH1Target6LUN3.MouseHover, L_CH1Target1LUN0.MouseHover, L_CH1Target1LUN1.MouseHover, L_CH1Target1LUN2.MouseHover, L_CH1Target1LUN3.MouseHover, L_CH1Target3LUN0.MouseHover, L_CH1Target3LUN1.MouseHover, L_CH1Target3LUN2.MouseHover, L_CH1Target3LUN3.MouseHover, L_CH1Target5LUN0.MouseHover, L_CH1Target5LUN1.MouseHover, L_CH1Target5LUN2.MouseHover, L_CH1Target5LUN3.MouseHover, L_CH1Target7LUN0.MouseHover, L_CH1Target7LUN1.MouseHover, L_CH1Target7LUN2.MouseHover, L_CH1Target7LUN3.MouseHover, L_CH2Target0LUN0.MouseHover, L_CH2Target0LUN1.MouseHover, L_CH2Target0LUN2.MouseHover, L_CH2Target0LUN3.MouseHover, L_CH2Target2LUN0.MouseHover, L_CH2Target2LUN1.MouseHover, L_CH2Target2LUN2.MouseHover, L_CH2Target2LUN3.MouseHover, L_CH2Target4LUN0.MouseHover, L_CH2Target4LUN1.MouseHover, L_CH2Target4LUN2.MouseHover, L_CH2Target4LUN3.MouseHover, L_CH2Target6LUN0.MouseHover, L_CH2Target6LUN1.MouseHover, L_CH2Target6LUN2.MouseHover, L_CH2Target6LUN3.MouseHover, L_CH2Target1LUN0.MouseHover, L_CH2Target1LUN1.MouseHover, L_CH2Target1LUN2.MouseHover, L_CH2Target1LUN3.MouseHover, L_CH2Target3LUN0.MouseHover, L_CH2Target3LUN1.MouseHover, L_CH2Target3LUN2.MouseHover, L_CH2Target3LUN3.MouseHover, L_CH2Target5LUN0.MouseHover, L_CH2Target5LUN1.MouseHover, L_CH2Target5LUN2.MouseHover, L_CH2Target5LUN3.MouseHover, L_CH2Target7LUN0.MouseHover, L_CH2Target7LUN1.MouseHover, L_CH2Target7LUN2.MouseHover, L_CH2Target7LUN3.MouseHover, L_CH3Target0LUN0.MouseHover, L_CH3Target0LUN1.MouseHover, L_CH3Target0LUN2.MouseHover, L_CH3Target0LUN3.MouseHover, L_CH3Target2LUN0.MouseHover, L_CH3Target2LUN1.MouseHover, L_CH3Target2LUN2.MouseHover, L_CH3Target2LUN3.MouseHover, L_CH3Target4LUN0.MouseHover, L_CH3Target4LUN1.MouseHover, L_CH3Target4LUN2.MouseHover, L_CH3Target4LUN3.MouseHover, L_CH3Target6LUN0.MouseHover, L_CH3Target6LUN1.MouseHover, L_CH3Target6LUN2.MouseHover, L_CH3Target6LUN3.MouseHover, L_CH3Target1LUN0.MouseHover, L_CH3Target1LUN1.MouseHover, L_CH3Target1LUN2.MouseHover, L_CH3Target1LUN3.MouseHover, L_CH3Target3LUN0.MouseHover, L_CH3Target3LUN1.MouseHover, L_CH3Target3LUN2.MouseHover, L_CH3Target3LUN3.MouseHover, L_CH3Target5LUN0.MouseHover, L_CH3Target5LUN1.MouseHover, L_CH3Target5LUN2.MouseHover, L_CH3Target5LUN3.MouseHover, L_CH3Target7LUN0.MouseHover, L_CH3Target7LUN1.MouseHover, L_CH3Target7LUN2.MouseHover, L_CH3Target7LUN3.MouseHover, L_CH4Target0LUN0.MouseHover, L_CH4Target0LUN1.MouseHover, L_CH4Target0LUN2.MouseHover, L_CH4Target0LUN3.MouseHover, L_CH4Target2LUN0.MouseHover, L_CH4Target2LUN1.MouseHover, L_CH4Target2LUN2.MouseHover, L_CH4Target2LUN3.MouseHover, L_CH4Target4LUN0.MouseHover, L_CH4Target4LUN1.MouseHover, L_CH4Target4LUN2.MouseHover, L_CH4Target4LUN3.MouseHover, L_CH4Target6LUN0.MouseHover, L_CH4Target6LUN1.MouseHover, L_CH4Target6LUN2.MouseHover, L_CH4Target6LUN3.MouseHover, L_CH4Target1LUN0.MouseHover, L_CH4Target1LUN1.MouseHover, L_CH4Target1LUN2.MouseHover, L_CH4Target1LUN3.MouseHover, L_CH4Target3LUN0.MouseHover, L_CH4Target3LUN1.MouseHover, L_CH4Target3LUN2.MouseHover, L_CH4Target3LUN3.MouseHover, L_CH4Target5LUN0.MouseHover, L_CH4Target5LUN1.MouseHover, L_CH4Target5LUN2.MouseHover, L_CH4Target5LUN3.MouseHover, L_CH4Target7LUN0.MouseHover, L_CH4Target7LUN1.MouseHover, L_CH4Target7LUN2.MouseHover, L_CH4Target7LUN3.MouseHover, L_CH5Target0LUN0.MouseHover, L_CH5Target0LUN1.MouseHover, L_CH5Target0LUN2.MouseHover, L_CH5Target0LUN3.MouseHover, L_CH5Target2LUN0.MouseHover, L_CH5Target2LUN1.MouseHover, L_CH5Target2LUN2.MouseHover, L_CH5Target2LUN3.MouseHover, L_CH5Target4LUN0.MouseHover, L_CH5Target4LUN1.MouseHover, L_CH5Target4LUN2.MouseHover, L_CH5Target4LUN3.MouseHover, L_CH5Target6LUN0.MouseHover, L_CH5Target6LUN1.MouseHover, L_CH5Target6LUN2.MouseHover, L_CH5Target6LUN3.MouseHover, L_CH5Target1LUN0.MouseHover, L_CH5Target1LUN1.MouseHover, L_CH5Target1LUN2.MouseHover, L_CH5Target1LUN3.MouseHover, L_CH5Target3LUN0.MouseHover, L_CH5Target3LUN1.MouseHover, L_CH5Target3LUN2.MouseHover, L_CH5Target3LUN3.MouseHover, L_CH5Target5LUN0.MouseHover, L_CH5Target5LUN1.MouseHover, L_CH5Target5LUN2.MouseHover, L_CH5Target5LUN3.MouseHover, L_CH5Target7LUN0.MouseHover, L_CH5Target7LUN1.MouseHover, L_CH5Target7LUN2.MouseHover, L_CH5Target7LUN3.MouseHover, L_CH6Target0LUN0.MouseHover, L_CH6Target0LUN1.MouseHover, L_CH6Target0LUN2.MouseHover, L_CH6Target0LUN3.MouseHover, L_CH6Target2LUN0.MouseHover, L_CH6Target2LUN1.MouseHover, L_CH6Target2LUN2.MouseHover, L_CH6Target2LUN3.MouseHover, L_CH6Target4LUN0.MouseHover, L_CH6Target4LUN1.MouseHover, L_CH6Target4LUN2.MouseHover, L_CH6Target4LUN3.MouseHover, L_CH6Target6LUN0.MouseHover, L_CH6Target6LUN1.MouseHover, L_CH6Target6LUN2.MouseHover, L_CH6Target6LUN3.MouseHover, L_CH6Target1LUN0.MouseHover, L_CH6Target1LUN1.MouseHover, L_CH6Target1LUN2.MouseHover, L_CH6Target1LUN3.MouseHover, L_CH6Target3LUN0.MouseHover, L_CH6Target3LUN1.MouseHover, L_CH6Target3LUN2.MouseHover, L_CH6Target3LUN3.MouseHover, L_CH6Target5LUN0.MouseHover, L_CH6Target5LUN1.MouseHover, L_CH6Target5LUN2.MouseHover, L_CH6Target5LUN3.MouseHover, L_CH6Target7LUN0.MouseHover, L_CH6Target7LUN1.MouseHover, L_CH6Target7LUN2.MouseHover, L_CH6Target7LUN3.MouseHover, L_CH7Target0LUN0.MouseHover, L_CH7Target0LUN1.MouseHover, L_CH7Target0LUN2.MouseHover, L_CH7Target0LUN3.MouseHover, L_CH7Target2LUN0.MouseHover, L_CH7Target2LUN1.MouseHover, L_CH7Target2LUN2.MouseHover, L_CH7Target2LUN3.MouseHover, L_CH7Target4LUN0.MouseHover, L_CH7Target4LUN1.MouseHover, L_CH7Target4LUN2.MouseHover, L_CH7Target4LUN3.MouseHover, L_CH7Target6LUN0.MouseHover, L_CH7Target6LUN1.MouseHover, L_CH7Target6LUN2.MouseHover, L_CH7Target6LUN3.MouseHover, L_CH7Target1LUN0.MouseHover, L_CH7Target1LUN1.MouseHover, L_CH7Target1LUN2.MouseHover, L_CH7Target1LUN3.MouseHover, L_CH7Target3LUN0.MouseHover, L_CH7Target3LUN1.MouseHover, L_CH7Target3LUN2.MouseHover, L_CH7Target3LUN3.MouseHover, L_CH7Target5LUN0.MouseHover, L_CH7Target5LUN1.MouseHover, L_CH7Target5LUN2.MouseHover, L_CH7Target5LUN3.MouseHover, L_CH7Target7LUN0.MouseHover, L_CH7Target7LUN1.MouseHover, L_CH7Target7LUN2.MouseHover, L_CH7Target7LUN3.MouseHover, L_CH8Target0LUN0.MouseHover, L_CH8Target0LUN1.MouseHover, L_CH8Target0LUN2.MouseHover, L_CH8Target0LUN3.MouseHover, L_CH8Target2LUN0.MouseHover, L_CH8Target2LUN1.MouseHover, L_CH8Target2LUN2.MouseHover, L_CH8Target2LUN3.MouseHover, L_CH8Target4LUN0.MouseHover, L_CH8Target4LUN1.MouseHover, L_CH8Target4LUN2.MouseHover, L_CH8Target4LUN3.MouseHover, L_CH8Target6LUN0.MouseHover, L_CH8Target6LUN1.MouseHover, L_CH8Target6LUN2.MouseHover, L_CH8Target6LUN3.MouseHover, L_CH8Target1LUN0.MouseHover, L_CH8Target1LUN1.MouseHover, L_CH8Target1LUN2.MouseHover, L_CH8Target1LUN3.MouseHover, L_CH8Target3LUN0.MouseHover, L_CH8Target3LUN1.MouseHover, L_CH8Target3LUN2.MouseHover, L_CH8Target3LUN3.MouseHover, L_CH8Target5LUN0.MouseHover, L_CH8Target5LUN1.MouseHover, L_CH8Target5LUN2.MouseHover, L_CH8Target5LUN3.MouseHover, L_CH8Target7LUN0.MouseHover, L_CH8Target7LUN1.MouseHover, L_CH8Target7LUN2.MouseHover, L_CH8Target7LUN3.MouseHover, L_CH9Target0LUN0.MouseHover, L_CH9Target0LUN1.MouseHover, L_CH9Target0LUN2.MouseHover, L_CH9Target0LUN3.MouseHover, L_CH9Target2LUN0.MouseHover, L_CH9Target2LUN1.MouseHover, L_CH9Target2LUN2.MouseHover, L_CH9Target2LUN3.MouseHover, L_CH9Target4LUN0.MouseHover, L_CH9Target4LUN1.MouseHover, L_CH9Target4LUN2.MouseHover, L_CH9Target4LUN3.MouseHover, L_CH9Target6LUN0.MouseHover, L_CH9Target6LUN1.MouseHover, L_CH9Target6LUN2.MouseHover, L_CH9Target6LUN3.MouseHover, L_CH9Target1LUN0.MouseHover, L_CH9Target1LUN1.MouseHover, L_CH9Target1LUN2.MouseHover, L_CH9Target1LUN3.MouseHover, L_CH9Target3LUN0.MouseHover, L_CH9Target3LUN1.MouseHover, L_CH9Target3LUN2.MouseHover, L_CH9Target3LUN3.MouseHover, L_CH9Target5LUN0.MouseHover, L_CH9Target5LUN1.MouseHover, L_CH9Target5LUN2.MouseHover, L_CH9Target5LUN3.MouseHover, L_CH9Target7LUN0.MouseHover, L_CH9Target7LUN1.MouseHover, L_CH9Target7LUN2.MouseHover, L_CH9Target7LUN3.MouseHover, L_CH10Target0LUN0.MouseHover, L_CH10Target0LUN1.MouseHover, L_CH10Target0LUN2.MouseHover, L_CH10Target0LUN3.MouseHover, L_CH10Target2LUN0.MouseHover, L_CH10Target2LUN1.MouseHover, L_CH10Target2LUN2.MouseHover, L_CH10Target2LUN3.MouseHover, L_CH10Target4LUN0.MouseHover, L_CH10Target4LUN1.MouseHover, L_CH10Target4LUN2.MouseHover, L_CH10Target4LUN3.MouseHover, L_CH10Target6LUN0.MouseHover, L_CH10Target6LUN1.MouseHover, L_CH10Target6LUN2.MouseHover, L_CH10Target6LUN3.MouseHover, L_CH10Target1LUN0.MouseHover, L_CH10Target1LUN1.MouseHover, L_CH10Target1LUN2.MouseHover, L_CH10Target1LUN3.MouseHover, L_CH10Target3LUN0.MouseHover, L_CH10Target3LUN1.MouseHover, L_CH10Target3LUN2.MouseHover, L_CH10Target3LUN3.MouseHover, L_CH10Target5LUN0.MouseHover, L_CH10Target5LUN1.MouseHover, L_CH10Target5LUN2.MouseHover, L_CH10Target5LUN3.MouseHover, L_CH10Target7LUN0.MouseHover, L_CH10Target7LUN1.MouseHover, L_CH10Target7LUN2.MouseHover, L_CH10Target7LUN3.MouseHover, L_CH11Target0LUN0.MouseHover, L_CH11Target0LUN1.MouseHover, L_CH11Target0LUN2.MouseHover, L_CH11Target0LUN3.MouseHover, L_CH11Target2LUN0.MouseHover, L_CH11Target2LUN1.MouseHover, L_CH11Target2LUN2.MouseHover, L_CH11Target2LUN3.MouseHover, L_CH11Target4LUN0.MouseHover, L_CH11Target4LUN1.MouseHover, L_CH11Target4LUN2.MouseHover, L_CH11Target4LUN3.MouseHover, L_CH11Target6LUN0.MouseHover, L_CH11Target6LUN1.MouseHover, L_CH11Target6LUN2.MouseHover, L_CH11Target6LUN3.MouseHover, L_CH11Target1LUN0.MouseHover, L_CH11Target1LUN1.MouseHover, L_CH11Target1LUN2.MouseHover, L_CH11Target1LUN3.MouseHover, L_CH11Target3LUN0.MouseHover, L_CH11Target3LUN1.MouseHover, L_CH11Target3LUN2.MouseHover, L_CH11Target3LUN3.MouseHover, L_CH11Target5LUN0.MouseHover, L_CH11Target5LUN1.MouseHover, L_CH11Target5LUN2.MouseHover, L_CH11Target5LUN3.MouseHover, L_CH11Target7LUN0.MouseHover, L_CH11Target7LUN1.MouseHover, L_CH11Target7LUN2.MouseHover, L_CH11Target7LUN3.MouseHover, L_CH12Target0LUN0.MouseHover, L_CH12Target0LUN1.MouseHover, L_CH12Target0LUN2.MouseHover, L_CH12Target0LUN3.MouseHover, L_CH12Target2LUN0.MouseHover, L_CH12Target2LUN1.MouseHover, L_CH12Target2LUN2.MouseHover, L_CH12Target2LUN3.MouseHover, L_CH12Target4LUN0.MouseHover, L_CH12Target4LUN1.MouseHover, L_CH12Target4LUN2.MouseHover, L_CH12Target4LUN3.MouseHover, L_CH12Target6LUN0.MouseHover, L_CH12Target6LUN1.MouseHover, L_CH12Target6LUN2.MouseHover, L_CH12Target6LUN3.MouseHover, L_CH12Target1LUN0.MouseHover, L_CH12Target1LUN1.MouseHover, L_CH12Target1LUN2.MouseHover, L_CH12Target1LUN3.MouseHover, L_CH12Target3LUN0.MouseHover, L_CH12Target3LUN1.MouseHover, L_CH12Target3LUN2.MouseHover, L_CH12Target3LUN3.MouseHover, L_CH12Target5LUN0.MouseHover, L_CH12Target5LUN1.MouseHover, L_CH12Target5LUN2.MouseHover, L_CH12Target5LUN3.MouseHover, L_CH12Target7LUN0.MouseHover, L_CH12Target7LUN1.MouseHover, L_CH12Target7LUN2.MouseHover, L_CH12Target7LUN3.MouseHover, L_CH13Target0LUN0.MouseHover, L_CH13Target0LUN1.MouseHover, L_CH13Target0LUN2.MouseHover, L_CH13Target0LUN3.MouseHover, L_CH13Target2LUN0.MouseHover, L_CH13Target2LUN1.MouseHover, L_CH13Target2LUN2.MouseHover, L_CH13Target2LUN3.MouseHover, L_CH13Target4LUN0.MouseHover, L_CH13Target4LUN1.MouseHover, L_CH13Target4LUN2.MouseHover, L_CH13Target4LUN3.MouseHover, L_CH13Target6LUN0.MouseHover, L_CH13Target6LUN1.MouseHover, L_CH13Target6LUN2.MouseHover, L_CH13Target6LUN3.MouseHover, L_CH13Target1LUN0.MouseHover, L_CH13Target1LUN1.MouseHover, L_CH13Target1LUN2.MouseHover, L_CH13Target1LUN3.MouseHover, L_CH13Target3LUN0.MouseHover, L_CH13Target3LUN1.MouseHover, L_CH13Target3LUN2.MouseHover, L_CH13Target3LUN3.MouseHover, L_CH13Target5LUN0.MouseHover, L_CH13Target5LUN1.MouseHover, L_CH13Target5LUN2.MouseHover, L_CH13Target5LUN3.MouseHover, L_CH13Target7LUN0.MouseHover, L_CH13Target7LUN1.MouseHover, L_CH13Target7LUN2.MouseHover, L_CH13Target7LUN3.MouseHover, L_CH14Target0LUN0.MouseHover, L_CH14Target0LUN1.MouseHover, L_CH14Target0LUN2.MouseHover, L_CH14Target0LUN3.MouseHover, L_CH14Target2LUN0.MouseHover, L_CH14Target2LUN1.MouseHover, L_CH14Target2LUN2.MouseHover, L_CH14Target2LUN3.MouseHover, L_CH14Target4LUN0.MouseHover, L_CH14Target4LUN1.MouseHover, L_CH14Target4LUN2.MouseHover, L_CH14Target4LUN3.MouseHover, L_CH14Target6LUN0.MouseHover, L_CH14Target6LUN1.MouseHover, L_CH14Target6LUN2.MouseHover, L_CH14Target6LUN3.MouseHover, L_CH14Target1LUN0.MouseHover, L_CH14Target1LUN1.MouseHover, L_CH14Target1LUN2.MouseHover, L_CH14Target1LUN3.MouseHover, L_CH14Target3LUN0.MouseHover, L_CH14Target3LUN1.MouseHover, L_CH14Target3LUN2.MouseHover, L_CH14Target3LUN3.MouseHover, L_CH14Target5LUN0.MouseHover, L_CH14Target5LUN1.MouseHover, L_CH14Target5LUN2.MouseHover, L_CH14Target5LUN3.MouseHover, L_CH14Target7LUN0.MouseHover, L_CH14Target7LUN1.MouseHover, L_CH14Target7LUN2.MouseHover, L_CH14Target7LUN3.MouseHover, L_CH15Target0LUN0.MouseHover, L_CH15Target0LUN1.MouseHover, L_CH15Target0LUN2.MouseHover, L_CH15Target0LUN3.MouseHover, L_CH15Target2LUN0.MouseHover, L_CH15Target2LUN1.MouseHover, L_CH15Target2LUN2.MouseHover, L_CH15Target2LUN3.MouseHover, L_CH15Target4LUN0.MouseHover, L_CH15Target4LUN1.MouseHover, L_CH15Target4LUN2.MouseHover, L_CH15Target4LUN3.MouseHover, L_CH15Target6LUN0.MouseHover, L_CH15Target6LUN1.MouseHover, L_CH15Target6LUN2.MouseHover, L_CH15Target6LUN3.MouseHover, L_CH15Target1LUN0.MouseHover, L_CH15Target1LUN1.MouseHover, L_CH15Target1LUN2.MouseHover, L_CH15Target1LUN3.MouseHover, L_CH15Target3LUN0.MouseHover, L_CH15Target3LUN1.MouseHover, L_CH15Target3LUN2.MouseHover, L_CH15Target3LUN3.MouseHover, L_CH15Target5LUN0.MouseHover, L_CH15Target5LUN1.MouseHover, L_CH15Target5LUN2.MouseHover, L_CH15Target5LUN3.MouseHover, L_CH15Target7LUN0.MouseHover, L_CH15Target7LUN1.MouseHover, L_CH15Target7LUN2.MouseHover, L_CH15Target7LUN3.MouseHover
{
        Try
        For k = 0 To 15
        For j = 0 To 7
        For i = 0 To 3
        If Equals(L_LUN(k)(j)(i), sender) Then
        If myLUNStatus(myLane)(k)(j)(i) > 0 Then
        Dim myTarget = 2 * (j Mod 4) + j \ 4
        Dim myBB As Integer = myONFIBB(myLane)(k)(j)(i)
        myBB += myEraseSuccessBB(myLane)(k)(j)(i)
        myBB += myBlockProgramSuccessBB(myLane)(k)(j)(i)
        myBB += myECCFailBB(myLane)(k)(j)(i)
        myBB += myEraseBusytimeBB(myLane)(k)(j)(i)
        myBB += myProgramBusytimeBB(myLane)(k)(j)(i)
        myBB += myReadBusytimeBB(myLane)(k)(j)(i)
        Dim myToolTip As New ToolTip
        If myNANDIDCheck(myLane)(k)(j) Then
        myToolTip.SetToolTip(L_LUN(k)(j)(i), "Channel " & k & ", Target " & myTarget & ", LUN" & i & vbCrLf & "ID Status: Match" & vbCrLf & "Total BB: " & myBB & vbCrLf & "Factory BB: " & myONFIBB(myLane)(k)(j)(i) & vbCrLf & "Erase BB: " & myEraseSuccessBB(myLane)(k)(j)(i) & vbCrLf & "Program BB: " & myBlockProgramSuccessBB(myLane)(k)(j)(i) & vbCrLf & "ECC BB: " & myECCFailBB(myLane)(k)(j)(i) & vbCrLf & "tErase BB: " & myEraseBusytimeBB(myLane)(k)(j)(i) & vbCrLf & "tProgram  BB: " & myProgramBusytimeBB(myLane)(k)(j)(i) & vbCrLf & "tRead BB: " & myReadBusytimeBB(myLane)(k)(j)(i))
        Else
        myToolTip.SetToolTip(L_LUN(k)(j)(i), "Channel " & k & ", Target " & myTarget & ", LUN" & i & vbCrLf & "ID Status: Miss")
        
        i = 3
        j = 7
        k = 15
        
        
        Next
        Next
        Next

        
        Console::WriteLine("An exception occured during MouseHover")
        
        
}
void SigNAS3NT::Timer_Tick(sender As Object, e As EventArgs) Handles Timer_L0.Tick, Timer_L1.Tick, Timer_L2.Tick, Timer_L3.Tick, Timer_L4.Tick, Timer_L5.Tick, Timer_L6.Tick, Timer_L7.Tick
{
        Try
        For k = 0 To 7
        If Equals(myTimer(k), sender) Then
        myTime(k) += 1
        If k = myLane Then
        BeginInvoke(New RefreshStatusDelegate(AddressOf RefreshStatus), true)
        
        k = 7
        
        Next

        
        Console::WriteLine("An exception occured during Timer Update")
        

        
}
Int32 SigNAS3NT::GetLUNStatus(Int32 lane, Int32 channel, Int32 chip, Int32 lun)
{
    Try
        GetLUNStatus = 1
        If myNANDIDCheck(lane)(channel)(chip) = false Then
        GetLUNStatus = 2
        Exit Try
        
        Dim myBB As Integer = myONFIBB(lane)(channel)(chip)(lun)
        myBB += myEraseSuccessBB(lane)(channel)(chip)(lun)
        myBB += myBlockProgramSuccessBB(lane)(channel)(chip)(lun)
        myBB += myECCFailBB(lane)(channel)(chip)(lun)
        myBB += myEraseBusytimeBB(lane)(channel)(chip)(lun)
        myBB += myProgramBusytimeBB(lane)(channel)(chip)(lun)
        myBB += myReadBusytimeBB(lane)(channel)(chip)(lun)
        If myBB > myBBSThreshold(lane) Then
        GetLUNStatus = 2
        Exit Try
        
        
        GetLUNStatus = 0
        
        
}
Int32 SigNAS3NT::GetNandID(Int32 Lane, SigNAS3Library.AddressParameter AddressParameter, array <unsigned char> &r_NandID())
{
    Try

        If r_NandID.Length < 128 Then
        ReDim r_NandID(127)
        

        If Lane < 0 Then
        GetNandID = SigNAS3Library.Err.ErrCode.WrongArgument
        Exit Try
        
        If Lane > 7 Then
        GetNandID = SigNAS3Library.Err.ErrCode.WrongArgument
        Exit Try
        

        Dim myAddress(0) As Byte
        Dim r_success(15) As Boolean
        Dim errcode As Integer

        For k = 0 To 15
        r_success(k) = false
        Next
        errcode = myS3.DoCommand(Lane, AddressParameter.channel, AddressParameter.chip, &H90, false, false, r_success)
        If errcode < > 0 Then
        GetNandID = errcode
        Exit Try
        

        myAddress(0) = CByte(0)
        For k = 0 To 15
        r_success(k) = false
        Next
        errcode = myS3.DoAddressSend(Lane, AddressParameter.channel, AddressParameter.chip, 1, myAddress, false, r_success)
        If errcode < > 0 Then
        GetNandID = errcode
        Exit Try
        

        For k = 0 To 127
        r_NandID(k) = CByte(0)
        Next
        For k = 0 To 15
        r_success(k) = false
        Next
        errcode = myS3.DoDataGet(Lane, AddressParameter.channel, AddressParameter.chip, 8, true, r_NandID, r_success)
        If errcode < > 0 Then
        GetNandID = errcode
        Exit Try
        

        GetNandID = SigNAS3Library.Err.ErrCode.NoError

        

        GetNandID = SigNAS3Library.Err.ErrCode.CommandUnexpectedResult

        

        
}*/