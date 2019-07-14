#pragma once

namespace SigNAS3_Nanotech
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
    using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class ui_results : public System::Windows::Forms::Form
	{
	public:
        ui_results(Dictionary<int, List<int>^ >% results);

	protected:
		~ui_results()
		{
			if (components)
			{
				delete components;
			}
		}

    private:
        Dictionary<int, List<int>^ > m_results;

        void lane0_Click(System::Object^ sender, System::EventArgs^ e);
        void lane1_Click(System::Object^ sender, System::EventArgs^ e);
        void lane2_Click(System::Object^ sender, System::EventArgs^ e);
        void lane3_Click(System::Object^ sender, System::EventArgs^ e);
        void lane4_Click(System::Object^ sender, System::EventArgs^ e);
        void lane5_Click(System::Object^ sender, System::EventArgs^ e);
        void lane6_Click(System::Object^ sender, System::EventArgs^ e);
        void lane7_Click(System::Object^ sender, System::EventArgs^ e);

        System::Windows::Forms::GroupBox^  gbLaneSelect;

        System::Windows::Forms::RadioButton^  rbLane0;            
        System::Windows::Forms::RadioButton^  rbLane7;
        System::Windows::Forms::RadioButton^  rbLane6;
        System::Windows::Forms::RadioButton^  rbLane5;
        System::Windows::Forms::RadioButton^  rbLane4;
        System::Windows::Forms::RadioButton^  rbLane3;
        System::Windows::Forms::RadioButton^  rbLane2;
        System::Windows::Forms::RadioButton^  rbLane1;

        System::Windows::Forms::TextBox^  tbRes4;
        System::Windows::Forms::TextBox^  tbRes0;
        System::Windows::Forms::TextBox^  tbRes1;
        System::Windows::Forms::TextBox^  tbRes2;
        System::Windows::Forms::TextBox^  tbRes3;
        System::Windows::Forms::TextBox^  tbRes5;
        System::Windows::Forms::TextBox^  tbRes6;
        System::Windows::Forms::TextBox^  tbRes7;
        System::Windows::Forms::TextBox^  tbRes8;
        System::Windows::Forms::TextBox^  tbRes9;
        System::Windows::Forms::TextBox^  tbRes10;
        System::Windows::Forms::TextBox^  tbRes11;
        System::Windows::Forms::TextBox^  tbRes12;
        System::Windows::Forms::TextBox^  tbRes13;
        System::Windows::Forms::TextBox^  tbRes14;
        System::Windows::Forms::TextBox^  tbRes15;

        System::ComponentModel::Container ^components;

        #pragma region Windows Form Designer generated code		
        void InitializeComponent();
        #pragma endregion    
    };
}
