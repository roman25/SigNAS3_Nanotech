#pragma once

namespace SigNAS3_Nanotech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ui_results
	/// </summary>
	public ref class ui_results : public System::Windows::Forms::Form
	{
	public:
		ui_results(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ui_results()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::RadioButton^  rbLane0;
    protected:
    private: System::Windows::Forms::GroupBox^  gbLaneSelect;
    private: System::Windows::Forms::RadioButton^  rbLane7;
    private: System::Windows::Forms::RadioButton^  rbLane6;
    private: System::Windows::Forms::RadioButton^  rbLane5;
    private: System::Windows::Forms::RadioButton^  rbLane4;
    private: System::Windows::Forms::RadioButton^  rbLane3;
    private: System::Windows::Forms::RadioButton^  rbLane2;
    private: System::Windows::Forms::RadioButton^  rbLane1;
    private: System::Windows::Forms::TextBox^  tbRes4;




    private: System::Windows::Forms::TextBox^  tbRes0;
    private: System::Windows::Forms::TextBox^  tbRes1;
    private: System::Windows::Forms::TextBox^  tbRes2;
    private: System::Windows::Forms::TextBox^  tbRes3;
    private: System::Windows::Forms::TextBox^  tbRes5;
    private: System::Windows::Forms::TextBox^  tbRes6;
    private: System::Windows::Forms::TextBox^  tbRes7;
    private: System::Windows::Forms::TextBox^  tbRes8;
    private: System::Windows::Forms::TextBox^  tbRes9;
    private: System::Windows::Forms::TextBox^  tbRes10;
    private: System::Windows::Forms::TextBox^  tbRes11;
    private: System::Windows::Forms::TextBox^  tbRes12;
    private: System::Windows::Forms::TextBox^  tbRes13;
    private: System::Windows::Forms::TextBox^  tbRes14;
    private: System::Windows::Forms::TextBox^  tbRes15;











































	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->rbLane0 = (gcnew System::Windows::Forms::RadioButton());
            this->gbLaneSelect = (gcnew System::Windows::Forms::GroupBox());
            this->rbLane7 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane6 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane5 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane4 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane3 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane2 = (gcnew System::Windows::Forms::RadioButton());
            this->rbLane1 = (gcnew System::Windows::Forms::RadioButton());
            this->tbRes4 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes0 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes1 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes2 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes3 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes5 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes6 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes7 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes8 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes9 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes10 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes11 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes12 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes13 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes14 = (gcnew System::Windows::Forms::TextBox());
            this->tbRes15 = (gcnew System::Windows::Forms::TextBox());
            this->gbLaneSelect->SuspendLayout();
            this->SuspendLayout();
            // 
            // rbLane0
            // 
            this->rbLane0->AutoSize = true;
            this->rbLane0->Checked = true;
            this->rbLane0->Location = System::Drawing::Point(6, 19);
            this->rbLane0->Name = L"rbLane0";
            this->rbLane0->Size = System::Drawing::Size(58, 17);
            this->rbLane0->TabIndex = 0;
            this->rbLane0->TabStop = true;
            this->rbLane0->Text = L"Lane 0";
            this->rbLane0->UseVisualStyleBackColor = true;
            // 
            // gbLaneSelect
            // 
            this->gbLaneSelect->Controls->Add(this->rbLane7);
            this->gbLaneSelect->Controls->Add(this->rbLane6);
            this->gbLaneSelect->Controls->Add(this->rbLane5);
            this->gbLaneSelect->Controls->Add(this->rbLane4);
            this->gbLaneSelect->Controls->Add(this->rbLane3);
            this->gbLaneSelect->Controls->Add(this->rbLane2);
            this->gbLaneSelect->Controls->Add(this->rbLane1);
            this->gbLaneSelect->Controls->Add(this->rbLane0);
            this->gbLaneSelect->Location = System::Drawing::Point(22, 22);
            this->gbLaneSelect->Name = L"gbLaneSelect";
            this->gbLaneSelect->Size = System::Drawing::Size(663, 54);
            this->gbLaneSelect->TabIndex = 1;
            this->gbLaneSelect->TabStop = false;
            this->gbLaneSelect->Text = L"Lane Select";
            // 
            // rbLane7
            // 
            this->rbLane7->AutoSize = true;
            this->rbLane7->Location = System::Drawing::Point(592, 19);
            this->rbLane7->Name = L"rbLane7";
            this->rbLane7->Size = System::Drawing::Size(58, 17);
            this->rbLane7->TabIndex = 7;
            this->rbLane7->Text = L"Lane 7";
            this->rbLane7->UseVisualStyleBackColor = true;
            // 
            // rbLane6
            // 
            this->rbLane6->AutoSize = true;
            this->rbLane6->Location = System::Drawing::Point(514, 19);
            this->rbLane6->Name = L"rbLane6";
            this->rbLane6->Size = System::Drawing::Size(58, 17);
            this->rbLane6->TabIndex = 6;
            this->rbLane6->Text = L"Lane 6";
            this->rbLane6->UseVisualStyleBackColor = true;
            // 
            // rbLane5
            // 
            this->rbLane5->AutoSize = true;
            this->rbLane5->Location = System::Drawing::Point(439, 19);
            this->rbLane5->Name = L"rbLane5";
            this->rbLane5->Size = System::Drawing::Size(58, 17);
            this->rbLane5->TabIndex = 5;
            this->rbLane5->Text = L"Lane 5";
            this->rbLane5->UseVisualStyleBackColor = true;
            // 
            // rbLane4
            // 
            this->rbLane4->AutoSize = true;
            this->rbLane4->Location = System::Drawing::Point(355, 19);
            this->rbLane4->Name = L"rbLane4";
            this->rbLane4->Size = System::Drawing::Size(58, 17);
            this->rbLane4->TabIndex = 4;
            this->rbLane4->Text = L"Lane 4";
            this->rbLane4->UseVisualStyleBackColor = true;
            // 
            // rbLane3
            // 
            this->rbLane3->AutoSize = true;
            this->rbLane3->Location = System::Drawing::Point(272, 19);
            this->rbLane3->Name = L"rbLane3";
            this->rbLane3->Size = System::Drawing::Size(58, 17);
            this->rbLane3->TabIndex = 3;
            this->rbLane3->Text = L"Lane 3";
            this->rbLane3->UseVisualStyleBackColor = true;
            // 
            // rbLane2
            // 
            this->rbLane2->AutoSize = true;
            this->rbLane2->Location = System::Drawing::Point(183, 19);
            this->rbLane2->Name = L"rbLane2";
            this->rbLane2->Size = System::Drawing::Size(58, 17);
            this->rbLane2->TabIndex = 2;
            this->rbLane2->Text = L"Lane 2";
            this->rbLane2->UseVisualStyleBackColor = true;
            // 
            // rbLane1
            // 
            this->rbLane1->AutoSize = true;
            this->rbLane1->Location = System::Drawing::Point(92, 19);
            this->rbLane1->Name = L"rbLane1";
            this->rbLane1->Size = System::Drawing::Size(58, 17);
            this->rbLane1->TabIndex = 1;
            this->rbLane1->Text = L"Lane 1";
            this->rbLane1->UseVisualStyleBackColor = true;
            // 
            // tbRes4
            // 
            this->tbRes4->Location = System::Drawing::Point(39, 149);
            this->tbRes4->Multiline = true;
            this->tbRes4->Name = L"tbRes4";
            this->tbRes4->Size = System::Drawing::Size(149, 61);
            this->tbRes4->TabIndex = 21;
            // 
            // tbRes0
            // 
            this->tbRes0->Location = System::Drawing::Point(39, 82);
            this->tbRes0->Multiline = true;
            this->tbRes0->Name = L"tbRes0";
            this->tbRes0->Size = System::Drawing::Size(149, 56);
            this->tbRes0->TabIndex = 33;
            this->tbRes0->TextChanged += gcnew System::EventHandler(this, &ui_results::textBox16_TextChanged);
            // 
            // tbRes1
            // 
            this->tbRes1->Location = System::Drawing::Point(205, 82);
            this->tbRes1->Multiline = true;
            this->tbRes1->Name = L"tbRes1";
            this->tbRes1->Size = System::Drawing::Size(149, 56);
            this->tbRes1->TabIndex = 34;
            this->tbRes1->TextChanged += gcnew System::EventHandler(this, &ui_results::textBox1_TextChanged);
            // 
            // tbRes2
            // 
            this->tbRes2->Location = System::Drawing::Point(370, 82);
            this->tbRes2->Multiline = true;
            this->tbRes2->Name = L"tbRes2";
            this->tbRes2->Size = System::Drawing::Size(149, 56);
            this->tbRes2->TabIndex = 35;
            // 
            // tbRes3
            // 
            this->tbRes3->Location = System::Drawing::Point(536, 82);
            this->tbRes3->Multiline = true;
            this->tbRes3->Name = L"tbRes3";
            this->tbRes3->Size = System::Drawing::Size(149, 61);
            this->tbRes3->TabIndex = 36;
            // 
            // tbRes5
            // 
            this->tbRes5->Location = System::Drawing::Point(203, 149);
            this->tbRes5->Multiline = true;
            this->tbRes5->Name = L"tbRes5";
            this->tbRes5->Size = System::Drawing::Size(149, 61);
            this->tbRes5->TabIndex = 37;
            // 
            // tbRes6
            // 
            this->tbRes6->Location = System::Drawing::Point(370, 149);
            this->tbRes6->Multiline = true;
            this->tbRes6->Name = L"tbRes6";
            this->tbRes6->Size = System::Drawing::Size(149, 61);
            this->tbRes6->TabIndex = 38;
            // 
            // tbRes7
            // 
            this->tbRes7->Location = System::Drawing::Point(536, 149);
            this->tbRes7->Multiline = true;
            this->tbRes7->Name = L"tbRes7";
            this->tbRes7->Size = System::Drawing::Size(149, 61);
            this->tbRes7->TabIndex = 39;
            // 
            // tbRes8
            // 
            this->tbRes8->Location = System::Drawing::Point(39, 216);
            this->tbRes8->Multiline = true;
            this->tbRes8->Name = L"tbRes8";
            this->tbRes8->Size = System::Drawing::Size(149, 61);
            this->tbRes8->TabIndex = 40;
            // 
            // tbRes9
            // 
            this->tbRes9->Location = System::Drawing::Point(203, 216);
            this->tbRes9->Multiline = true;
            this->tbRes9->Name = L"tbRes9";
            this->tbRes9->Size = System::Drawing::Size(149, 61);
            this->tbRes9->TabIndex = 41;
            // 
            // tbRes10
            // 
            this->tbRes10->Location = System::Drawing::Point(370, 216);
            this->tbRes10->Multiline = true;
            this->tbRes10->Name = L"tbRes10";
            this->tbRes10->Size = System::Drawing::Size(149, 61);
            this->tbRes10->TabIndex = 42;
            // 
            // tbRes11
            // 
            this->tbRes11->Location = System::Drawing::Point(536, 216);
            this->tbRes11->Multiline = true;
            this->tbRes11->Name = L"tbRes11";
            this->tbRes11->Size = System::Drawing::Size(149, 61);
            this->tbRes11->TabIndex = 43;
            // 
            // tbRes12
            // 
            this->tbRes12->Location = System::Drawing::Point(39, 283);
            this->tbRes12->Multiline = true;
            this->tbRes12->Name = L"tbRes12";
            this->tbRes12->Size = System::Drawing::Size(149, 61);
            this->tbRes12->TabIndex = 44;
            // 
            // tbRes13
            // 
            this->tbRes13->Location = System::Drawing::Point(203, 283);
            this->tbRes13->Multiline = true;
            this->tbRes13->Name = L"tbRes13";
            this->tbRes13->Size = System::Drawing::Size(149, 61);
            this->tbRes13->TabIndex = 45;
            // 
            // tbRes14
            // 
            this->tbRes14->Location = System::Drawing::Point(370, 283);
            this->tbRes14->Multiline = true;
            this->tbRes14->Name = L"tbRes14";
            this->tbRes14->Size = System::Drawing::Size(149, 61);
            this->tbRes14->TabIndex = 46;
            // 
            // tbRes15
            // 
            this->tbRes15->Location = System::Drawing::Point(536, 283);
            this->tbRes15->Multiline = true;
            this->tbRes15->Name = L"tbRes15";
            this->tbRes15->Size = System::Drawing::Size(149, 61);
            this->tbRes15->TabIndex = 47;
            // 
            // ui_results
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(697, 367);
            this->Controls->Add(this->tbRes15);
            this->Controls->Add(this->tbRes14);
            this->Controls->Add(this->tbRes13);
            this->Controls->Add(this->tbRes12);
            this->Controls->Add(this->tbRes11);
            this->Controls->Add(this->tbRes10);
            this->Controls->Add(this->tbRes9);
            this->Controls->Add(this->tbRes8);
            this->Controls->Add(this->tbRes7);
            this->Controls->Add(this->tbRes6);
            this->Controls->Add(this->tbRes5);
            this->Controls->Add(this->tbRes3);
            this->Controls->Add(this->tbRes2);
            this->Controls->Add(this->tbRes1);
            this->Controls->Add(this->tbRes0);
            this->Controls->Add(this->tbRes4);
            this->Controls->Add(this->gbLaneSelect);
            this->Name = L"ui_results";
            this->Text = L"ui_results";
            this->gbLaneSelect->ResumeLayout(false);
            this->gbLaneSelect->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void textBox16_TextChanged(System::Object^  sender, System::EventArgs^  e) {
    }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
