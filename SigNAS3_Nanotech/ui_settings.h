#pragma once

#include "settings.h"

namespace SigNAS3_Nanotech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    
    

	public ref class ui_settings : public System::Windows::Forms::Form
	{
	public:
        ui_settings();
        settings getNandSettings();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ui_settings()
		{
			if (components)
			{
				delete components;
			}
		}
    private:

        settings outSettings;

        System::Windows::Forms::Button^  butSet;
        
        System::Windows::Forms::CheckBox^  cbEdoMode;
        System::Windows::Forms::CheckBox^  cbReset;
        System::Windows::Forms::CheckBox^  cbVref;
        System::Windows::Forms::CheckBox^  cbTarget4;
        System::Windows::Forms::CheckBox^  cbTarget5;
        System::Windows::Forms::CheckBox^  cbTarget6;
        System::Windows::Forms::CheckBox^  cbTarget2;
        System::Windows::Forms::CheckBox^  cbTarget1;
        System::Windows::Forms::CheckBox^  cbTarget3;
        System::Windows::Forms::CheckBox^  cbTarget7;
        System::Windows::Forms::CheckBox^  cbTarget0;

        System::Windows::Forms::ComboBox^  cbCore;
        System::Windows::Forms::ComboBox^  cbVendor;
        System::Windows::Forms::ComboBox^  cbBlockSize;
        System::Windows::Forms::ComboBox^  cbIfMode;
        System::Windows::Forms::ComboBox^  cbSubType;
        System::Windows::Forms::ComboBox^  cbType;
        System::Windows::Forms::ComboBox^  cbIO;

        System::Windows::Forms::GroupBox^  gbNand;
        System::Windows::Forms::GroupBox^  gbVoltage;
        System::Windows::Forms::GroupBox^  gbTest;
        System::Windows::Forms::GroupBox^  gbNandID;
        System::Windows::Forms::GroupBox^  gbTarget;
        System::Windows::Forms::GroupBox^  gbAddress;
    
        System::Windows::Forms::Label^  lbVendor;
        System::Windows::Forms::Label^  lbType;
        System::Windows::Forms::Label^  lbSubType;
        System::Windows::Forms::Label^  lbIfMode;
        System::Windows::Forms::Label^  lbBlockSize;
        System::Windows::Forms::Label^  lbPageSize;
        System::Windows::Forms::Label^  lbEdoMode;    
        System::Windows::Forms::Label^  lbNs;
        System::Windows::Forms::Label^  lbCore;
        System::Windows::Forms::Label^  lbBaseClock;
        System::Windows::Forms::Label^  lbIO;
        System::Windows::Forms::Label^  lbRead;
        System::Windows::Forms::Label^  lbProgram;
        System::Windows::Forms::Label^  lbErase;
        System::Windows::Forms::Label^  lbBit;
        System::Windows::Forms::Label^  lbCode;
        System::Windows::Forms::Label^  lbScan;
        System::Windows::Forms::Label^  lbTotalBB;
        System::Windows::Forms::Label^  lbLunTar;
        System::Windows::Forms::Label^  lbLunSep;
        System::Windows::Forms::Label^  lbBlocksLun;
        System::Windows::Forms::Label^  lbtWP;
        System::Windows::Forms::Label^  lbtREH;
        System::Windows::Forms::Label^  lbtRP;
        System::Windows::Forms::Label^  lbtWH;
        System::Windows::Forms::Label^  lbtDQS;
        
        System::Windows::Forms::NumericUpDown^  numPageSize;
        System::Windows::Forms::NumericUpDown^  numtWH;
        System::Windows::Forms::NumericUpDown^  numtWP;
        System::Windows::Forms::NumericUpDown^  numtREH;
        System::Windows::Forms::NumericUpDown^  numtRP;
        System::Windows::Forms::NumericUpDown^  numBaseClock;
        System::Windows::Forms::NumericUpDown^  numRead;
        System::Windows::Forms::NumericUpDown^  numProgram;
        System::Windows::Forms::NumericUpDown^  numErase;
        System::Windows::Forms::NumericUpDown^  numBitCorrectability;
        System::Windows::Forms::NumericUpDown^  numCodeLength;
        System::Windows::Forms::NumericUpDown^  numBadBlockByte;
        System::Windows::Forms::NumericUpDown^  numTotalBB;
        System::Windows::Forms::NumericUpDown^  numLunSep;
        System::Windows::Forms::NumericUpDown^  numLunTar;
        System::Windows::Forms::NumericUpDown^  numBlocksLun;
           
        System::Windows::Forms::TextBox^  tb7;
        System::Windows::Forms::TextBox^  tb6;
        System::Windows::Forms::TextBox^  tb5;
        System::Windows::Forms::TextBox^  tb4;
        System::Windows::Forms::TextBox^  tb3;
        System::Windows::Forms::TextBox^  tb2;
        System::Windows::Forms::TextBox^  tb1;
        System::Windows::Forms::TextBox^  tb0;
        System::Windows::Forms::TextBox^  tbtWP;
        System::Windows::Forms::TextBox^  tbtREH;
        System::Windows::Forms::TextBox^  tbtRP;
        System::Windows::Forms::TextBox^  tbtWH;
        System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::Label^  lbBytes;
private: System::Windows::Forms::Label^  lbByte;
private: System::Windows::Forms::Label^  lbBlocks;
private: System::Windows::Forms::Label^  lbRd;
private: System::Windows::Forms::Label^  lbProg;
private: System::Windows::Forms::Label^  lbEr;
private: System::Windows::Forms::Label^  lbBits;

		System::ComponentModel::Container ^components;

        void butSet_Click(Object^ Sender, EventArgs^ Args);
        void cbVendor_SelectedIndexChanged(Object^ sender, System::EventArgs^ e);
        void cbIfMode_SelectedIndexChanged(Object^ sender, System::EventArgs^ e);        
        void numt_ValueChanged(Object^ sender, System::EventArgs^ e);

        #pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{            
            this->cbEdoMode = (gcnew System::Windows::Forms::CheckBox());
            this->cbVref = (gcnew System::Windows::Forms::CheckBox());
            this->cbReset = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget7 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget0 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget3 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget1 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget2 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget6 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget5 = (gcnew System::Windows::Forms::CheckBox());
            this->cbTarget4 = (gcnew System::Windows::Forms::CheckBox());
            this->cbVendor = (gcnew System::Windows::Forms::ComboBox());
            this->cbType = (gcnew System::Windows::Forms::ComboBox());
            this->cbSubType = (gcnew System::Windows::Forms::ComboBox());
            this->cbIfMode = (gcnew System::Windows::Forms::ComboBox());
            this->cbBlockSize = (gcnew System::Windows::Forms::ComboBox());
            this->cbCore = (gcnew System::Windows::Forms::ComboBox());
            this->cbIO = (gcnew System::Windows::Forms::ComboBox());
            this->gbTest = (gcnew System::Windows::Forms::GroupBox());
            this->lbRd = (gcnew System::Windows::Forms::Label());
            this->lbProg = (gcnew System::Windows::Forms::Label());
            this->lbEr = (gcnew System::Windows::Forms::Label());
            this->lbBits = (gcnew System::Windows::Forms::Label());
            this->lbBytes = (gcnew System::Windows::Forms::Label());
            this->lbByte = (gcnew System::Windows::Forms::Label());
            this->lbBlocks = (gcnew System::Windows::Forms::Label());
            this->numRead = (gcnew System::Windows::Forms::NumericUpDown());
            this->numProgram = (gcnew System::Windows::Forms::NumericUpDown());
            this->numErase = (gcnew System::Windows::Forms::NumericUpDown());
            this->numBitCorrectability = (gcnew System::Windows::Forms::NumericUpDown());
            this->numCodeLength = (gcnew System::Windows::Forms::NumericUpDown());
            this->numBadBlockByte = (gcnew System::Windows::Forms::NumericUpDown());
            this->numTotalBB = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbRead = (gcnew System::Windows::Forms::Label());
            this->lbProgram = (gcnew System::Windows::Forms::Label());
            this->lbErase = (gcnew System::Windows::Forms::Label());
            this->lbBit = (gcnew System::Windows::Forms::Label());
            this->lbCode = (gcnew System::Windows::Forms::Label());
            this->lbScan = (gcnew System::Windows::Forms::Label());
            this->lbTotalBB = (gcnew System::Windows::Forms::Label());
            this->gbNandID = (gcnew System::Windows::Forms::GroupBox());
            this->tb7 = (gcnew System::Windows::Forms::TextBox());
            this->tb6 = (gcnew System::Windows::Forms::TextBox());
            this->tb5 = (gcnew System::Windows::Forms::TextBox());
            this->tb4 = (gcnew System::Windows::Forms::TextBox());
            this->tb3 = (gcnew System::Windows::Forms::TextBox());
            this->tb2 = (gcnew System::Windows::Forms::TextBox());
            this->tb1 = (gcnew System::Windows::Forms::TextBox());
            this->tb0 = (gcnew System::Windows::Forms::TextBox());
            this->gbTarget = (gcnew System::Windows::Forms::GroupBox());
            this->gbNand = (gcnew System::Windows::Forms::GroupBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->lbtDQS = (gcnew System::Windows::Forms::Label());
            this->lbtWP = (gcnew System::Windows::Forms::Label());
            this->lbtREH = (gcnew System::Windows::Forms::Label());
            this->lbtRP = (gcnew System::Windows::Forms::Label());
            this->tbtWP = (gcnew System::Windows::Forms::TextBox());
            this->tbtREH = (gcnew System::Windows::Forms::TextBox());
            this->tbtRP = (gcnew System::Windows::Forms::TextBox());
            this->tbtWH = (gcnew System::Windows::Forms::TextBox());
            this->lbtWH = (gcnew System::Windows::Forms::Label());
            this->numPageSize = (gcnew System::Windows::Forms::NumericUpDown());
            this->numtWH = (gcnew System::Windows::Forms::NumericUpDown());
            this->numtWP = (gcnew System::Windows::Forms::NumericUpDown());
            this->numtREH = (gcnew System::Windows::Forms::NumericUpDown());
            this->numtRP = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbNs = (gcnew System::Windows::Forms::Label());
            this->numBaseClock = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbBaseClock = (gcnew System::Windows::Forms::Label());
            this->lbEdoMode = (gcnew System::Windows::Forms::Label());
            this->lbType = (gcnew System::Windows::Forms::Label());
            this->lbSubType = (gcnew System::Windows::Forms::Label());
            this->lbIfMode = (gcnew System::Windows::Forms::Label());
            this->lbBlockSize = (gcnew System::Windows::Forms::Label());
            this->lbPageSize = (gcnew System::Windows::Forms::Label());
            this->lbVendor = (gcnew System::Windows::Forms::Label());
            this->gbAddress = (gcnew System::Windows::Forms::GroupBox());
            this->numLunSep = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbLunSep = (gcnew System::Windows::Forms::Label());
            this->numBlocksLun = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbBlocksLun = (gcnew System::Windows::Forms::Label());
            this->numLunTar = (gcnew System::Windows::Forms::NumericUpDown());
            this->lbLunTar = (gcnew System::Windows::Forms::Label());
            this->gbVoltage = (gcnew System::Windows::Forms::GroupBox());
            this->lbIO = (gcnew System::Windows::Forms::Label());
            this->lbCore = (gcnew System::Windows::Forms::Label());
            this->butSet = (gcnew System::Windows::Forms::Button());
            this->gbTest->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRead))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProgram))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numErase))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBitCorrectability))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCodeLength))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBadBlockByte))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTotalBB))->BeginInit();
            this->gbNandID->SuspendLayout();
            this->gbTarget->SuspendLayout();
            this->gbNand->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPageSize))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtWH))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtWP))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtREH))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtRP))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBaseClock))->BeginInit();
            this->gbAddress->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLunSep))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlocksLun))->BeginInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLunTar))->BeginInit();
            this->gbVoltage->SuspendLayout();
            this->SuspendLayout();
            // 
            // cbEdoMode
            // 
            this->cbEdoMode->AutoSize = true;
            this->cbEdoMode->Location = System::Drawing::Point(103, 235);
            this->cbEdoMode->Name = L"cbEdoMode";
            this->cbEdoMode->Size = System::Drawing::Size(59, 17);
            this->cbEdoMode->TabIndex = 11;
            this->cbEdoMode->Text = L"Enable";
            this->cbEdoMode->UseVisualStyleBackColor = true;
            // 
            // cbVref
            // 
            this->cbVref->AutoSize = true;
            this->cbVref->Location = System::Drawing::Point(116, 16);
            this->cbVref->Name = L"cbVref";
            this->cbVref->Size = System::Drawing::Size(81, 17);
            this->cbVref->TabIndex = 25;
            this->cbVref->Text = L"Vref Enable";
            this->cbVref->UseVisualStyleBackColor = true;
            // 
            // cbReset
            // 
            this->cbReset->AutoSize = true;
            this->cbReset->Checked = true;
            this->cbReset->CheckState = System::Windows::Forms::CheckState::Checked;
            this->cbReset->Location = System::Drawing::Point(116, 48);
            this->cbReset->Name = L"cbReset";
            this->cbReset->Size = System::Drawing::Size(136, 17);
            this->cbReset->TabIndex = 26;
            this->cbReset->Text = L"Reset after Voltage Set";
            this->cbReset->UseVisualStyleBackColor = true;
            // 
            // cbTarget7
            // 
            this->cbTarget7->AutoSize = true;
            this->cbTarget7->Location = System::Drawing::Point(78, 86);
            this->cbTarget7->Name = L"cbTarget7";
            this->cbTarget7->Size = System::Drawing::Size(66, 17);
            this->cbTarget7->TabIndex = 26;
            this->cbTarget7->Text = L"Target 7";
            this->cbTarget7->UseVisualStyleBackColor = true;
            // 
            // cbTarget0
            // 
            this->cbTarget0->AutoSize = true;
            this->cbTarget0->Location = System::Drawing::Point(6, 19);
            this->cbTarget0->Name = L"cbTarget0";
            this->cbTarget0->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->cbTarget0->Size = System::Drawing::Size(66, 17);
            this->cbTarget0->TabIndex = 25;
            this->cbTarget0->Text = L"Target 0";
            this->cbTarget0->UseVisualStyleBackColor = true;
            // 
            // cbTarget3
            // 
            this->cbTarget3->AutoSize = true;
            this->cbTarget3->Location = System::Drawing::Point(6, 86);
            this->cbTarget3->Name = L"cbTarget3";
            this->cbTarget3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->cbTarget3->Size = System::Drawing::Size(66, 17);
            this->cbTarget3->TabIndex = 27;
            this->cbTarget3->Text = L"Target 3";
            this->cbTarget3->UseVisualStyleBackColor = true;
            // 
            // cbTarget1
            // 
            this->cbTarget1->AutoSize = true;
            this->cbTarget1->Location = System::Drawing::Point(6, 40);
            this->cbTarget1->Name = L"cbTarget1";
            this->cbTarget1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->cbTarget1->Size = System::Drawing::Size(66, 17);
            this->cbTarget1->TabIndex = 28;
            this->cbTarget1->Text = L"Target 1";
            this->cbTarget1->UseVisualStyleBackColor = true;
            // 
            // cbTarget2
            // 
            this->cbTarget2->AutoSize = true;
            this->cbTarget2->Location = System::Drawing::Point(6, 63);
            this->cbTarget2->Name = L"cbTarget2";
            this->cbTarget2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
            this->cbTarget2->Size = System::Drawing::Size(66, 17);
            this->cbTarget2->TabIndex = 29;
            this->cbTarget2->Text = L"Target 2";
            this->cbTarget2->UseVisualStyleBackColor = true;
            // 
            // cbTarget6
            // 
            this->cbTarget6->AutoSize = true;
            this->cbTarget6->Location = System::Drawing::Point(78, 63);
            this->cbTarget6->Name = L"cbTarget6";
            this->cbTarget6->Size = System::Drawing::Size(66, 17);
            this->cbTarget6->TabIndex = 30;
            this->cbTarget6->Text = L"Target 6";
            this->cbTarget6->UseVisualStyleBackColor = true;
            // 
            // cbTarget5
            // 
            this->cbTarget5->AutoSize = true;
            this->cbTarget5->Location = System::Drawing::Point(78, 40);
            this->cbTarget5->Name = L"cbTarget5";
            this->cbTarget5->Size = System::Drawing::Size(66, 17);
            this->cbTarget5->TabIndex = 31;
            this->cbTarget5->Text = L"Target 5";
            this->cbTarget5->UseVisualStyleBackColor = true;
            // 
            // cbTarget4
            // 
            this->cbTarget4->AutoSize = true;
            this->cbTarget4->Location = System::Drawing::Point(78, 19);
            this->cbTarget4->Name = L"cbTarget4";
            this->cbTarget4->Size = System::Drawing::Size(66, 17);
            this->cbTarget4->TabIndex = 32;
            this->cbTarget4->Text = L"Target 4";
            this->cbTarget4->UseVisualStyleBackColor = true;
            this->cbTarget4->CheckedChanged += gcnew System::EventHandler(this, &ui_settings::checkBox8_CheckedChanged);
            // 
            // cbVendor
            // 
            this->cbVendor->FormattingEnabled = true;
            this->cbVendor->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
                L"Micron", L"Toshiba", L"Samsung", L"Intel", L"SanDisk",
                    L"Hynix"
            });
            this->cbVendor->Location = System::Drawing::Point(103, 20);
            this->cbVendor->Name = L"cbVendor";
            this->cbVendor->Size = System::Drawing::Size(121, 21);
            this->cbVendor->TabIndex = 0;
            this->cbVendor->SelectedIndexChanged += gcnew System::EventHandler(this, &ui_settings::cbVendor_SelectedIndexChanged);
            // 
            // cbType
            // 
            this->cbType->FormattingEnabled = true;
            this->cbType->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"SLC", L"MLC", L"TLC", L"MLC_3D", L"TLC_3D", L"MLC_3D_SLCMODE" });
            this->cbType->Location = System::Drawing::Point(103, 47);
            this->cbType->Name = L"cbType";
            this->cbType->Size = System::Drawing::Size(121, 21);
            this->cbType->TabIndex = 6;
            // 
            // cbSubType
            // 
            this->cbSubType->FormattingEnabled = true;
            this->cbSubType->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Type0" });
            this->cbSubType->Location = System::Drawing::Point(103, 77);
            this->cbSubType->Name = L"cbSubType";
            this->cbSubType->Size = System::Drawing::Size(121, 21);
            this->cbSubType->TabIndex = 7;
            // 
            // cbIfMode
            // 
            this->cbIfMode->FormattingEnabled = true;
            this->cbIfMode->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
                L"Asynchronous", L"Synchronous", L"Toggle DDR",
                    L"NV-DDR2"
            });
            this->cbIfMode->Location = System::Drawing::Point(103, 113);
            this->cbIfMode->Name = L"cbIfMode";
            this->cbIfMode->Size = System::Drawing::Size(121, 21);
            this->cbIfMode->TabIndex = 8;
            this->cbIfMode->SelectedIndexChanged += gcnew System::EventHandler(this, &ui_settings::cbIfMode_SelectedIndexChanged);
            // 
            // cbBlockSize
            // 
            this->cbBlockSize->FormattingEnabled = true;
            this->cbBlockSize->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"32", L"64", L"128", L"256", L"512", L"1024" });
            this->cbBlockSize->Location = System::Drawing::Point(103, 152);
            this->cbBlockSize->Name = L"cbBlockSize";
            this->cbBlockSize->Size = System::Drawing::Size(121, 21);
            this->cbBlockSize->TabIndex = 9;
            // 
            // cbCore
            // 
            this->cbCore->FormattingEnabled = true;
            this->cbCore->Items->AddRange(gcnew cli::array< System::Object^  >(53) {
                L"0.90V", L"0.95V", L"1.00V", L"1.05V", L"1.10V",
                    L"1.15V", L"1.20V", L"1.25V", L"1.30V", L"1.35V", L"1.40V", L"1.45V", L"1.50V", L"1.55V", L"1.60V", L"1.65V", L"1.70V", L"1.75V",
                    L"1.80V", L"1.85V", L"1.90V", L"1.95V", L"2.00V", L"2.05V", L"2.10V", L"2.15V", L"2.20V", L"2.25V", L"2.30V", L"2.35V", L"2.40V",
                    L"2.45V", L"2.50V", L"2.55V", L"2.60V", L"2.65V", L"2.70V", L"2.75V", L"2.80V", L"2.85V", L"2.90V", L"2.95V", L"3.00V", L"3.05V",
                    L"3.10V", L"3.15V", L"3.20V", L"3.25V", L"3.30V", L"3.35V", L"3.40V", L"3.45V", L"3.50V"
            });
            this->cbCore->Location = System::Drawing::Point(41, 17);
            this->cbCore->Name = L"cbCore";
            this->cbCore->Size = System::Drawing::Size(58, 21);
            this->cbCore->TabIndex = 22;
            // 
            // cbIO
            // 
            this->cbIO->FormattingEnabled = true;
            this->cbIO->Items->AddRange(gcnew cli::array< System::Object^  >(53) {
                L"0.90V", L"0.95V", L"1.00V", L"1.05V", L"1.10V", L"1.15V",
                    L"1.20V", L"1.25V", L"1.30V", L"1.35V", L"1.40V", L"1.45V", L"1.50V", L"1.55V", L"1.60V", L"1.65V", L"1.70V", L"1.75V", L"1.80V",
                    L"1.85V", L"1.90V", L"1.95V", L"2.00V", L"2.05V", L"2.10V", L"2.15V", L"2.20V", L"2.25V", L"2.30V", L"2.35V", L"2.40V", L"2.45V",
                    L"2.50V", L"2.55V", L"2.60V", L"2.65V", L"2.70V", L"2.75V", L"2.80V", L"2.85V", L"2.90V", L"2.95V", L"3.00V", L"3.05V", L"3.10V",
                    L"3.15V", L"3.20V", L"3.25V", L"3.30V", L"3.35V", L"3.40V", L"3.45V", L"3.50V"
            });
            this->cbIO->Location = System::Drawing::Point(41, 44);
            this->cbIO->Name = L"cbIO";
            this->cbIO->Size = System::Drawing::Size(58, 21);
            this->cbIO->TabIndex = 24;
            // 
            // gbTest
            // 
            this->gbTest->Controls->Add(this->lbRd);
            this->gbTest->Controls->Add(this->lbProg);
            this->gbTest->Controls->Add(this->lbEr);
            this->gbTest->Controls->Add(this->lbBits);
            this->gbTest->Controls->Add(this->lbBytes);
            this->gbTest->Controls->Add(this->lbByte);
            this->gbTest->Controls->Add(this->lbBlocks);
            this->gbTest->Controls->Add(this->numRead);
            this->gbTest->Controls->Add(this->numProgram);
            this->gbTest->Controls->Add(this->numErase);
            this->gbTest->Controls->Add(this->numBitCorrectability);
            this->gbTest->Controls->Add(this->numCodeLength);
            this->gbTest->Controls->Add(this->numBadBlockByte);
            this->gbTest->Controls->Add(this->numTotalBB);
            this->gbTest->Controls->Add(this->lbRead);
            this->gbTest->Controls->Add(this->lbProgram);
            this->gbTest->Controls->Add(this->lbErase);
            this->gbTest->Controls->Add(this->lbBit);
            this->gbTest->Controls->Add(this->lbCode);
            this->gbTest->Controls->Add(this->lbScan);
            this->gbTest->Controls->Add(this->lbTotalBB);
            this->gbTest->Controls->Add(this->gbNandID);
            this->gbTest->Location = System::Drawing::Point(269, 251);
            this->gbTest->Name = L"gbTest";
            this->gbTest->Size = System::Drawing::Size(410, 217);
            this->gbTest->TabIndex = 33;
            this->gbTest->TabStop = false;
            this->gbTest->Text = L"Test Settings";
            // 
            // lbRd
            // 
            this->lbRd->AutoSize = true;
            this->lbRd->Location = System::Drawing::Point(386, 94);
            this->lbRd->Name = L"lbRd";
            this->lbRd->Size = System::Drawing::Size(18, 13);
            this->lbRd->TabIndex = 46;
            this->lbRd->Text = L"us";
            // 
            // lbProg
            // 
            this->lbProg->AutoSize = true;
            this->lbProg->Location = System::Drawing::Point(248, 178);
            this->lbProg->Name = L"lbProg";
            this->lbProg->Size = System::Drawing::Size(18, 13);
            this->lbProg->TabIndex = 45;
            this->lbProg->Text = L"us";
            // 
            // lbEr
            // 
            this->lbEr->AutoSize = true;
            this->lbEr->Location = System::Drawing::Point(250, 138);
            this->lbEr->Name = L"lbEr";
            this->lbEr->Size = System::Drawing::Size(18, 13);
            this->lbEr->TabIndex = 44;
            this->lbEr->Text = L"us";
            // 
            // lbBits
            // 
            this->lbBits->AutoSize = true;
            this->lbBits->Location = System::Drawing::Point(250, 94);
            this->lbBits->Name = L"lbBits";
            this->lbBits->Size = System::Drawing::Size(23, 13);
            this->lbBits->TabIndex = 43;
            this->lbBits->Text = L"bits";
            // 
            // lbBytes
            // 
            this->lbBytes->AutoSize = true;
            this->lbBytes->Location = System::Drawing::Point(90, 193);
            this->lbBytes->Name = L"lbBytes";
            this->lbBytes->Size = System::Drawing::Size(32, 13);
            this->lbBytes->TabIndex = 42;
            this->lbBytes->Text = L"bytes";
            // 
            // lbByte
            // 
            this->lbByte->AutoSize = true;
            this->lbByte->Location = System::Drawing::Point(90, 142);
            this->lbByte->Name = L"lbByte";
            this->lbByte->Size = System::Drawing::Size(27, 13);
            this->lbByte->TabIndex = 41;
            this->lbByte->Text = L"byte";
            // 
            // lbBlocks
            // 
            this->lbBlocks->AutoSize = true;
            this->lbBlocks->Location = System::Drawing::Point(90, 92);
            this->lbBlocks->Name = L"lbBlocks";
            this->lbBlocks->Size = System::Drawing::Size(38, 13);
            this->lbBlocks->TabIndex = 32;
            this->lbBlocks->Text = L"blocks";
            // 
            // numRead
            // 
            this->numRead->Location = System::Drawing::Point(313, 90);
            this->numRead->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
            this->numRead->Name = L"numRead";
            this->numRead->Size = System::Drawing::Size(67, 20);
            this->numRead->TabIndex = 40;
            this->numRead->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // numProgram
            // 
            this->numProgram->Location = System::Drawing::Point(175, 176);
            this->numProgram->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
            this->numProgram->Name = L"numProgram";
            this->numProgram->Size = System::Drawing::Size(67, 20);
            this->numProgram->TabIndex = 39;
            this->numProgram->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // numErase
            // 
            this->numErase->Location = System::Drawing::Point(175, 135);
            this->numErase->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000000, 0, 0, 0 });
            this->numErase->Name = L"numErase";
            this->numErase->Size = System::Drawing::Size(69, 20);
            this->numErase->TabIndex = 38;
            this->numErase->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // numBitCorrectability
            // 
            this->numBitCorrectability->Location = System::Drawing::Point(175, 90);
            this->numBitCorrectability->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 253, 0, 0, 0 });
            this->numBitCorrectability->Name = L"numBitCorrectability";
            this->numBitCorrectability->Size = System::Drawing::Size(69, 20);
            this->numBitCorrectability->TabIndex = 37;
            this->numBitCorrectability->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numBitCorrectability->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 32, 0, 0, 0 });
            // 
            // numCodeLength
            // 
            this->numCodeLength->Location = System::Drawing::Point(15, 191);
            this->numCodeLength->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36864, 0, 0, 0 });
            this->numCodeLength->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numCodeLength->Name = L"numCodeLength";
            this->numCodeLength->Size = System::Drawing::Size(69, 20);
            this->numCodeLength->TabIndex = 36;
            this->numCodeLength->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numCodeLength->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1024, 0, 0, 0 });
            // 
            // numBadBlockByte
            // 
            this->numBadBlockByte->Location = System::Drawing::Point(15, 138);
            this->numBadBlockByte->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8191, 0, 0, 0 });
            this->numBadBlockByte->Name = L"numBadBlockByte";
            this->numBadBlockByte->Size = System::Drawing::Size(69, 20);
            this->numBadBlockByte->TabIndex = 35;
            this->numBadBlockByte->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // numTotalBB
            // 
            this->numTotalBB->Location = System::Drawing::Point(15, 90);
            this->numTotalBB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
            this->numTotalBB->Name = L"numTotalBB";
            this->numTotalBB->Size = System::Drawing::Size(69, 20);
            this->numTotalBB->TabIndex = 22;
            this->numTotalBB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numTotalBB->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numTotalBB_ValueChanged);
            // 
            // lbRead
            // 
            this->lbRead->AutoSize = true;
            this->lbRead->Location = System::Drawing::Point(310, 74);
            this->lbRead->Name = L"lbRead";
            this->lbRead->Size = System::Drawing::Size(59, 13);
            this->lbRead->TabIndex = 34;
            this->lbRead->Text = L"Max tRead";
            // 
            // lbProgram
            // 
            this->lbProgram->AutoSize = true;
            this->lbProgram->Location = System::Drawing::Point(180, 158);
            this->lbProgram->Name = L"lbProgram";
            this->lbProgram->Size = System::Drawing::Size(72, 13);
            this->lbProgram->TabIndex = 33;
            this->lbProgram->Text = L"Max tProgram";
            // 
            // lbErase
            // 
            this->lbErase->AutoSize = true;
            this->lbErase->Location = System::Drawing::Point(182, 119);
            this->lbErase->Name = L"lbErase";
            this->lbErase->Size = System::Drawing::Size(60, 13);
            this->lbErase->TabIndex = 32;
            this->lbErase->Text = L"Max tErase";
            // 
            // lbBit
            // 
            this->lbBit->AutoSize = true;
            this->lbBit->Location = System::Drawing::Point(172, 74);
            this->lbBit->Name = L"lbBit";
            this->lbBit->Size = System::Drawing::Size(107, 13);
            this->lbBit->TabIndex = 31;
            this->lbBit->Text = L"BCH Bit Correctability";
            // 
            // lbCode
            // 
            this->lbCode->AutoSize = true;
            this->lbCode->Location = System::Drawing::Point(16, 175);
            this->lbCode->Name = L"lbCode";
            this->lbCode->Size = System::Drawing::Size(93, 13);
            this->lbCode->TabIndex = 30;
            this->lbCode->Text = L"BCH Code Length";
            // 
            // lbScan
            // 
            this->lbScan->AutoSize = true;
            this->lbScan->Location = System::Drawing::Point(14, 122);
            this->lbScan->Name = L"lbScan";
            this->lbScan->Size = System::Drawing::Size(139, 13);
            this->lbScan->TabIndex = 29;
            this->lbScan->Text = L"Bad Block Scan Byte Offset";
            // 
            // lbTotalBB
            // 
            this->lbTotalBB->AutoSize = true;
            this->lbTotalBB->Location = System::Drawing::Point(6, 74);
            this->lbTotalBB->Name = L"lbTotalBB";
            this->lbTotalBB->Size = System::Drawing::Size(127, 13);
            this->lbTotalBB->TabIndex = 28;
            this->lbTotalBB->Text = L"Total Bad Block Treshold";
            // 
            // gbNandID
            // 
            this->gbNandID->Controls->Add(this->tb7);
            this->gbNandID->Controls->Add(this->tb6);
            this->gbNandID->Controls->Add(this->tb5);
            this->gbNandID->Controls->Add(this->tb4);
            this->gbNandID->Controls->Add(this->tb3);
            this->gbNandID->Controls->Add(this->tb2);
            this->gbNandID->Controls->Add(this->tb1);
            this->gbNandID->Controls->Add(this->tb0);
            this->gbNandID->Location = System::Drawing::Point(9, 25);
            this->gbNandID->Name = L"gbNandID";
            this->gbNandID->Size = System::Drawing::Size(395, 46);
            this->gbNandID->TabIndex = 27;
            this->gbNandID->TabStop = false;
            this->gbNandID->Text = L"NAND ID";
            // 
            // tb7
            // 
            this->tb7->Location = System::Drawing::Point(339, 19);
            this->tb7->MaxLength = 2;
            this->tb7->Name = L"tb7";
            this->tb7->Size = System::Drawing::Size(41, 20);
            this->tb7->TabIndex = 14;
            this->tb7->Text = L"00";
            this->tb7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb6
            // 
            this->tb6->Location = System::Drawing::Point(292, 19);
            this->tb6->MaxLength = 2;
            this->tb6->Name = L"tb6";
            this->tb6->Size = System::Drawing::Size(41, 20);
            this->tb6->TabIndex = 13;
            this->tb6->Text = L"00";
            this->tb6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb5
            // 
            this->tb5->Location = System::Drawing::Point(245, 19);
            this->tb5->MaxLength = 2;
            this->tb5->Name = L"tb5";
            this->tb5->Size = System::Drawing::Size(41, 20);
            this->tb5->TabIndex = 12;
            this->tb5->Text = L"00";
            this->tb5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb4
            // 
            this->tb4->Location = System::Drawing::Point(198, 19);
            this->tb4->MaxLength = 2;
            this->tb4->Name = L"tb4";
            this->tb4->Size = System::Drawing::Size(41, 20);
            this->tb4->TabIndex = 11;
            this->tb4->Text = L"00";
            this->tb4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb3
            // 
            this->tb3->Location = System::Drawing::Point(151, 19);
            this->tb3->MaxLength = 2;
            this->tb3->Name = L"tb3";
            this->tb3->Size = System::Drawing::Size(41, 20);
            this->tb3->TabIndex = 10;
            this->tb3->Text = L"00";
            this->tb3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb2
            // 
            this->tb2->Location = System::Drawing::Point(104, 19);
            this->tb2->MaxLength = 2;
            this->tb2->Name = L"tb2";
            this->tb2->Size = System::Drawing::Size(41, 20);
            this->tb2->TabIndex = 9;
            this->tb2->Text = L"00";
            this->tb2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb1
            // 
            this->tb1->Location = System::Drawing::Point(57, 19);
            this->tb1->MaxLength = 2;
            this->tb1->Name = L"tb1";
            this->tb1->Size = System::Drawing::Size(41, 20);
            this->tb1->TabIndex = 8;
            this->tb1->Text = L"00";
            this->tb1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // tb0
            // 
            this->tb0->Location = System::Drawing::Point(10, 19);
            this->tb0->MaxLength = 2;
            this->tb0->Name = L"tb0";
            this->tb0->Size = System::Drawing::Size(41, 20);
            this->tb0->TabIndex = 7;
            this->tb0->Text = L"00";
            this->tb0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            // 
            // gbTarget
            // 
            this->gbTarget->Controls->Add(this->cbTarget4);
            this->gbTarget->Controls->Add(this->cbTarget0);
            this->gbTarget->Controls->Add(this->cbTarget5);
            this->gbTarget->Controls->Add(this->cbTarget7);
            this->gbTarget->Controls->Add(this->cbTarget6);
            this->gbTarget->Controls->Add(this->cbTarget3);
            this->gbTarget->Controls->Add(this->cbTarget2);
            this->gbTarget->Controls->Add(this->cbTarget1);
            this->gbTarget->Location = System::Drawing::Point(9, 25);
            this->gbTarget->Name = L"gbTarget";
            this->gbTarget->Size = System::Drawing::Size(149, 112);
            this->gbTarget->TabIndex = 27;
            this->gbTarget->TabStop = false;
            this->gbTarget->Text = L"Target Select";
            // 
            // gbNand
            // 
            this->gbNand->Controls->Add(this->textBox1);
            this->gbNand->Controls->Add(this->lbtDQS);
            this->gbNand->Controls->Add(this->lbtWP);
            this->gbNand->Controls->Add(this->lbtREH);
            this->gbNand->Controls->Add(this->lbtRP);
            this->gbNand->Controls->Add(this->tbtWP);
            this->gbNand->Controls->Add(this->tbtREH);
            this->gbNand->Controls->Add(this->tbtRP);
            this->gbNand->Controls->Add(this->tbtWH);
            this->gbNand->Controls->Add(this->lbtWH);
            this->gbNand->Controls->Add(this->numPageSize);
            this->gbNand->Controls->Add(this->numtWH);
            this->gbNand->Controls->Add(this->numtWP);
            this->gbNand->Controls->Add(this->numtREH);
            this->gbNand->Controls->Add(this->numtRP);
            this->gbNand->Controls->Add(this->lbNs);
            this->gbNand->Controls->Add(this->numBaseClock);
            this->gbNand->Controls->Add(this->lbBaseClock);
            this->gbNand->Controls->Add(this->lbEdoMode);
            this->gbNand->Controls->Add(this->cbEdoMode);
            this->gbNand->Controls->Add(this->cbBlockSize);
            this->gbNand->Controls->Add(this->cbIfMode);
            this->gbNand->Controls->Add(this->cbSubType);
            this->gbNand->Controls->Add(this->cbType);
            this->gbNand->Controls->Add(this->lbType);
            this->gbNand->Controls->Add(this->lbSubType);
            this->gbNand->Controls->Add(this->lbIfMode);
            this->gbNand->Controls->Add(this->lbBlockSize);
            this->gbNand->Controls->Add(this->lbPageSize);
            this->gbNand->Controls->Add(this->lbVendor);
            this->gbNand->Controls->Add(this->cbVendor);
            this->gbNand->Location = System::Drawing::Point(12, 12);
            this->gbNand->Name = L"gbNand";
            this->gbNand->Size = System::Drawing::Size(239, 456);
            this->gbNand->TabIndex = 1;
            this->gbNand->TabStop = false;
            this->gbNand->Text = L"NAND Settings";
            this->gbNand->Enter += gcnew System::EventHandler(this, &ui_settings::groupBox1_Enter);
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(168, 399);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(55, 20);
            this->textBox1->TabIndex = 31;
            // 
            // lbtDQS
            // 
            this->lbtDQS->AutoSize = true;
            this->lbtDQS->Location = System::Drawing::Point(7, 402);
            this->lbtDQS->Name = L"lbtDQS";
            this->lbtDQS->Size = System::Drawing::Size(33, 13);
            this->lbtDQS->TabIndex = 30;
            this->lbtDQS->Text = L"tDQS";
            // 
            // lbtWP
            // 
            this->lbtWP->AutoSize = true;
            this->lbtWP->Location = System::Drawing::Point(7, 324);
            this->lbtWP->Name = L"lbtWP";
            this->lbtWP->Size = System::Drawing::Size(28, 13);
            this->lbtWP->TabIndex = 29;
            this->lbtWP->Text = L"tWP";
            // 
            // lbtREH
            // 
            this->lbtREH->AutoSize = true;
            this->lbtREH->Location = System::Drawing::Point(7, 348);
            this->lbtREH->Name = L"lbtREH";
            this->lbtREH->Size = System::Drawing::Size(33, 13);
            this->lbtREH->TabIndex = 28;
            this->lbtREH->Text = L"tREH";
            // 
            // lbtRP
            // 
            this->lbtRP->AutoSize = true;
            this->lbtRP->Location = System::Drawing::Point(7, 376);
            this->lbtRP->Name = L"lbtRP";
            this->lbtRP->Size = System::Drawing::Size(25, 13);
            this->lbtRP->TabIndex = 27;
            this->lbtRP->Text = L"tRP";
            // 
            // tbtWP
            // 
            this->tbtWP->Location = System::Drawing::Point(168, 322);
            this->tbtWP->Name = L"tbtWP";
            this->tbtWP->Size = System::Drawing::Size(55, 20);
            this->tbtWP->TabIndex = 26;
            this->tbtWP->Text = L"50ns";
            // 
            // tbtREH
            // 
            this->tbtREH->Location = System::Drawing::Point(168, 348);
            this->tbtREH->Name = L"tbtREH";
            this->tbtREH->Size = System::Drawing::Size(55, 20);
            this->tbtREH->TabIndex = 25;
            this->tbtREH->Text = L"50ns";
            // 
            // tbtRP
            // 
            this->tbtRP->Location = System::Drawing::Point(168, 374);
            this->tbtRP->Name = L"tbtRP";
            this->tbtRP->Size = System::Drawing::Size(55, 20);
            this->tbtRP->TabIndex = 24;
            this->tbtRP->Text = L"50ns";
            // 
            // tbtWH
            // 
            this->tbtWH->Location = System::Drawing::Point(168, 295);
            this->tbtWH->Name = L"tbtWH";
            this->tbtWH->Size = System::Drawing::Size(55, 20);
            this->tbtWH->TabIndex = 23;
            this->tbtWH->Text = L"50ns";            
            // 
            // lbtWH
            // 
            this->lbtWH->AutoSize = true;
            this->lbtWH->Location = System::Drawing::Point(7, 298);
            this->lbtWH->Name = L"lbtWH";
            this->lbtWH->Size = System::Drawing::Size(29, 13);
            this->lbtWH->TabIndex = 22;
            this->lbtWH->Text = L"tWH";
            // 
            // numPageSize
            // 
            this->numPageSize->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
            this->numPageSize->Location = System::Drawing::Point(103, 195);
            this->numPageSize->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 36864, 0, 0, 0 });
            this->numPageSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
            this->numPageSize->Name = L"numPageSize";
            this->numPageSize->Size = System::Drawing::Size(87, 20);
            this->numPageSize->TabIndex = 20;
            this->numPageSize->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numPageSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8192, 0, 0, 0 });
            // 
            // numtWH
            // 
            this->numtWH->Location = System::Drawing::Point(103, 296);
            this->numtWH->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
            this->numtWH->Name = L"numtWH";
            this->numtWH->Size = System::Drawing::Size(59, 20);
            this->numtWH->TabIndex = 19;
            this->numtWH->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numtWH->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numt_ValueChanged);
            // 
            // numtWP
            // 
            this->numtWP->Location = System::Drawing::Point(103, 322);
            this->numtWP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
            this->numtWP->Name = L"numtWP";
            this->numtWP->Size = System::Drawing::Size(59, 20);
            this->numtWP->TabIndex = 18;
            this->numtWP->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numtWP->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numt_ValueChanged);
            // 
            // numtREH
            // 
            this->numtREH->Location = System::Drawing::Point(103, 348);
            this->numtREH->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
            this->numtREH->Name = L"numtREH";
            this->numtREH->Size = System::Drawing::Size(59, 20);
            this->numtREH->TabIndex = 17;
            this->numtREH->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numtREH->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numt_ValueChanged);
            // 
            // numtRP
            // 
            this->numtRP->Location = System::Drawing::Point(103, 374);
            this->numtRP->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
            this->numtRP->Name = L"numtRP";
            this->numtRP->Size = System::Drawing::Size(59, 20);
            this->numtRP->TabIndex = 16;
            this->numtRP->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numtRP->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numt_ValueChanged);
            // 
            // lbNs
            // 
            this->lbNs->AutoSize = true;
            this->lbNs->Location = System::Drawing::Point(206, 273);
            this->lbNs->Name = L"lbNs";
            this->lbNs->Size = System::Drawing::Size(18, 13);
            this->lbNs->TabIndex = 15;
            this->lbNs->Text = L"ns";
            // 
            // numBaseClock
            // 
            this->numBaseClock->Location = System::Drawing::Point(103, 270);
            this->numBaseClock->Name = L"numBaseClock";
            this->numBaseClock->Size = System::Drawing::Size(97, 20);
            this->numBaseClock->TabIndex = 14;
            this->numBaseClock->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numBaseClock->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
            this->numBaseClock->ValueChanged += gcnew System::EventHandler(this, &ui_settings::numt_ValueChanged);
            // 
            // lbBaseClock
            // 
            this->lbBaseClock->AutoSize = true;
            this->lbBaseClock->Location = System::Drawing::Point(7, 272);
            this->lbBaseClock->Name = L"lbBaseClock";
            this->lbBaseClock->Size = System::Drawing::Size(61, 13);
            this->lbBaseClock->TabIndex = 13;
            this->lbBaseClock->Text = L"Base Clock";
            // 
            // lbEdoMode
            // 
            this->lbEdoMode->AutoSize = true;
            this->lbEdoMode->Location = System::Drawing::Point(7, 235);
            this->lbEdoMode->Name = L"lbEdoMode";
            this->lbEdoMode->Size = System::Drawing::Size(60, 13);
            this->lbEdoMode->TabIndex = 12;
            this->lbEdoMode->Text = L"EDO Mode";
            // 
            // lbType
            // 
            this->lbType->AutoSize = true;
            this->lbType->Location = System::Drawing::Point(7, 47);
            this->lbType->Name = L"lbType";
            this->lbType->Size = System::Drawing::Size(31, 13);
            this->lbType->TabIndex = 5;
            this->lbType->Text = L"Type";
            this->lbType->Click += gcnew System::EventHandler(this, &ui_settings::lbType_Click);
            // 
            // lbSubType
            // 
            this->lbSubType->AutoSize = true;
            this->lbSubType->Location = System::Drawing::Point(7, 77);
            this->lbSubType->Name = L"lbSubType";
            this->lbSubType->Size = System::Drawing::Size(46, 13);
            this->lbSubType->TabIndex = 4;
            this->lbSubType->Text = L"Subtype";
            // 
            // lbIfMode
            // 
            this->lbIfMode->AutoSize = true;
            this->lbIfMode->Location = System::Drawing::Point(7, 113);
            this->lbIfMode->Name = L"lbIfMode";
            this->lbIfMode->Size = System::Drawing::Size(46, 13);
            this->lbIfMode->TabIndex = 3;
            this->lbIfMode->Text = L"IF Mode";
            // 
            // lbBlockSize
            // 
            this->lbBlockSize->AutoSize = true;
            this->lbBlockSize->Location = System::Drawing::Point(7, 152);
            this->lbBlockSize->Name = L"lbBlockSize";
            this->lbBlockSize->Size = System::Drawing::Size(57, 13);
            this->lbBlockSize->TabIndex = 2;
            this->lbBlockSize->Text = L"Block Size";
            // 
            // lbPageSize
            // 
            this->lbPageSize->AutoSize = true;
            this->lbPageSize->Location = System::Drawing::Point(7, 197);
            this->lbPageSize->Name = L"lbPageSize";
            this->lbPageSize->Size = System::Drawing::Size(55, 13);
            this->lbPageSize->TabIndex = 1;
            this->lbPageSize->Text = L"Page Size";
            // 
            // lbVendor
            // 
            this->lbVendor->AutoSize = true;
            this->lbVendor->Location = System::Drawing::Point(7, 20);
            this->lbVendor->Name = L"lbVendor";
            this->lbVendor->Size = System::Drawing::Size(41, 13);
            this->lbVendor->TabIndex = 0;
            this->lbVendor->Text = L"Vendor";
            // 
            // gbAddress
            // 
            this->gbAddress->Controls->Add(this->numLunSep);
            this->gbAddress->Controls->Add(this->lbLunSep);
            this->gbAddress->Controls->Add(this->numBlocksLun);
            this->gbAddress->Controls->Add(this->lbBlocksLun);
            this->gbAddress->Controls->Add(this->numLunTar);
            this->gbAddress->Controls->Add(this->gbTarget);
            this->gbAddress->Controls->Add(this->lbLunTar);
            this->gbAddress->Location = System::Drawing::Point(269, 100);
            this->gbAddress->Name = L"gbAddress";
            this->gbAddress->Size = System::Drawing::Size(410, 145);
            this->gbAddress->TabIndex = 27;
            this->gbAddress->TabStop = false;
            this->gbAddress->Text = L"Address Settings";
            // 
            // numLunSep
            // 
            this->numLunSep->Location = System::Drawing::Point(266, 91);
            this->numLunSep->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
            this->numLunSep->Name = L"numLunSep";
            this->numLunSep->Size = System::Drawing::Size(97, 20);
            this->numLunSep->TabIndex = 32;
            this->numLunSep->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lbLunSep
            // 
            this->lbLunSep->AutoSize = true;
            this->lbLunSep->Location = System::Drawing::Point(177, 93);
            this->lbLunSep->Name = L"lbLunSep";
            this->lbLunSep->Size = System::Drawing::Size(83, 13);
            this->lbLunSep->TabIndex = 31;
            this->lbLunSep->Text = L"LUN Separation";
            // 
            // numBlocksLun
            // 
            this->numBlocksLun->Location = System::Drawing::Point(266, 64);
            this->numBlocksLun->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65535, 0, 0, 0 });
            this->numBlocksLun->Name = L"numBlocksLun";
            this->numBlocksLun->Size = System::Drawing::Size(97, 20);
            this->numBlocksLun->TabIndex = 30;
            this->numBlocksLun->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            // 
            // lbBlocksLun
            // 
            this->lbBlocksLun->AutoSize = true;
            this->lbBlocksLun->Location = System::Drawing::Point(177, 67);
            this->lbBlocksLun->Name = L"lbBlocksLun";
            this->lbBlocksLun->Size = System::Drawing::Size(66, 13);
            this->lbBlocksLun->TabIndex = 29;
            this->lbBlocksLun->Text = L"Blocks/LUN";
            // 
            // numLunTar
            // 
            this->numLunTar->Location = System::Drawing::Point(266, 38);
            this->numLunTar->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
            this->numLunTar->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            this->numLunTar->Name = L"numLunTar";
            this->numLunTar->Size = System::Drawing::Size(97, 20);
            this->numLunTar->TabIndex = 28;
            this->numLunTar->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->numLunTar->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
            // 
            // lbLunTar
            // 
            this->lbLunTar->AutoSize = true;
            this->lbLunTar->Location = System::Drawing::Point(177, 45);
            this->lbLunTar->Name = L"lbLunTar";
            this->lbLunTar->Size = System::Drawing::Size(65, 13);
            this->lbLunTar->TabIndex = 1;
            this->lbLunTar->Text = L"LUN/Target";
            // 
            // gbVoltage
            // 
            this->gbVoltage->Controls->Add(this->cbReset);
            this->gbVoltage->Controls->Add(this->cbVref);
            this->gbVoltage->Controls->Add(this->cbIO);
            this->gbVoltage->Controls->Add(this->lbIO);
            this->gbVoltage->Controls->Add(this->cbCore);
            this->gbVoltage->Controls->Add(this->lbCore);
            this->gbVoltage->Location = System::Drawing::Point(269, 12);
            this->gbVoltage->Name = L"gbVoltage";
            this->gbVoltage->Size = System::Drawing::Size(410, 77);
            this->gbVoltage->TabIndex = 2;
            this->gbVoltage->TabStop = false;
            this->gbVoltage->Text = L"Voltage Settings";
            // 
            // lbIO
            // 
            this->lbIO->AutoSize = true;
            this->lbIO->Location = System::Drawing::Point(6, 47);
            this->lbIO->Name = L"lbIO";
            this->lbIO->Size = System::Drawing::Size(18, 13);
            this->lbIO->TabIndex = 23;
            this->lbIO->Text = L"IO";
            // 
            // lbCore
            // 
            this->lbCore->AutoSize = true;
            this->lbCore->Location = System::Drawing::Point(6, 20);
            this->lbCore->Name = L"lbCore";
            this->lbCore->Size = System::Drawing::Size(29, 13);
            this->lbCore->TabIndex = 1;
            this->lbCore->Text = L"Core";
            // 
            // butSet
            // 
            this->butSet->Location = System::Drawing::Point(570, 486);
            this->butSet->Name = L"butSet";
            this->butSet->Size = System::Drawing::Size(109, 23);
            this->butSet->TabIndex = 34;
            this->butSet->Text = L"Set";
            this->butSet->UseVisualStyleBackColor = true;
            this->butSet->Click += gcnew System::EventHandler(this, &ui_settings::butSet_Click);
            // 
            // ui_settings
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(696, 519);
            this->Controls->Add(this->butSet);
            this->Controls->Add(this->gbTest);
            this->Controls->Add(this->gbAddress);
            this->Controls->Add(this->gbVoltage);
            this->Controls->Add(this->gbNand);
            this->Name = L"ui_settings";
            this->Text = L"Settings";
            this->gbTest->ResumeLayout(false);
            this->gbTest->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRead))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numProgram))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numErase))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBitCorrectability))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numCodeLength))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBadBlockByte))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numTotalBB))->EndInit();
            this->gbNandID->ResumeLayout(false);
            this->gbNandID->PerformLayout();
            this->gbTarget->ResumeLayout(false);
            this->gbTarget->PerformLayout();
            this->gbNand->ResumeLayout(false);
            this->gbNand->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numPageSize))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtWH))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtWP))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtREH))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numtRP))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBaseClock))->EndInit();
            this->gbAddress->ResumeLayout(false);
            this->gbAddress->PerformLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLunSep))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlocksLun))->EndInit();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numLunTar))->EndInit();
            this->gbVoltage->ResumeLayout(false);
            this->gbVoltage->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
    private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void lbType_Click(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void checkBox8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void numTotalBB_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
