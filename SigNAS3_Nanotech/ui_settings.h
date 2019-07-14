#pragma once

#include "settings.h"

namespace SigNAS3_Nanotech
{

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
		    ~ui_settings()
		    {
			    if (components)
			    {
				    delete components;
			    }
		    }
        private:

            settings outSettings;

            void butSet_Click(Object^ Sender, EventArgs^ Args);
            void cbVendor_SelectedIndexChanged(Object^ sender, System::EventArgs^ e);
            void cbIfMode_SelectedIndexChanged(Object^ sender, System::EventArgs^ e);
            void numt_ValueChanged(Object^ sender, System::EventArgs^ e);

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
    
            System::Windows::Forms::Label^  lbBytes;
            System::Windows::Forms::Label^  lbByte;
            System::Windows::Forms::Label^  lbBlocks;
            System::Windows::Forms::Label^  lbRd;
            System::Windows::Forms::Label^  lbProg;
            System::Windows::Forms::Label^  lbEr;
            System::Windows::Forms::Label^  lbBits;

		    System::ComponentModel::Container ^components;

            #pragma region Windows Form Designer generated code
            void InitializeComponent();
            #pragma endregion                    
    };
}
