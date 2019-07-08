#pragma once
#include "ui_settings.h"
#include "ui_results.h"
#include "settings.h"

namespace SigNAS3_Nanotech {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    

	public ref class ui_signas3nt : public System::Windows::Forms::Form
	{
	    public:
            ui_signas3nt(void);

	    protected:
        

		    ~ui_signas3nt()
		    {
			    if (components)
			    {
				    delete components;
			    }
		    }
    private: System::Windows::Forms::Button^  butConnect;
    protected:

	    private:
            Dictionary<int, bool> connectedLanes;
            settings objS;
            void InitializeComponent();
            SigNAS3_Nanotech::ui_settings^ objSettings = gcnew ui_settings();

            void ui_signas3nt::settingsClick(System::Object^ sender, System::EventArgs^ e);
            void ui_signas3nt::butRun_Click(Object^ Sender, EventArgs^ Args);
            void ui_signas3nt::butConnect_Click(Object^ Sender, EventArgs^ Args);
        

            System::Windows::Forms::Button^  butRun;

            System::Windows::Forms::CheckBox^  checkBox117;
            System::Windows::Forms::CheckBox^  checkBox116;
            System::Windows::Forms::CheckBox^  checkBox115;
            System::Windows::Forms::CheckBox^  checkBox114;
            System::Windows::Forms::CheckBox^  checkBox113;
            System::Windows::Forms::CheckBox^  checkBox112;
            System::Windows::Forms::CheckBox^  checkBox111;
            System::Windows::Forms::CheckBox^  checkBox110;
            System::Windows::Forms::CheckBox^  checkBox109;
            System::Windows::Forms::CheckBox^  checkBox108;
            System::Windows::Forms::CheckBox^  checkBox107;
            System::Windows::Forms::CheckBox^  checkBox106;
            System::Windows::Forms::CheckBox^  checkBox105;
            System::Windows::Forms::CheckBox^  checkBox104;
            System::Windows::Forms::CheckBox^  checkBox103;
            System::Windows::Forms::CheckBox^  checkBox102;
            System::Windows::Forms::CheckBox^  checkBox101;
            System::Windows::Forms::CheckBox^  checkBox100;
            System::Windows::Forms::CheckBox^  checkBox99;
            System::Windows::Forms::CheckBox^  checkBox98;
            System::Windows::Forms::CheckBox^  checkBox97;
            System::Windows::Forms::CheckBox^  checkBox96;
            System::Windows::Forms::CheckBox^  checkBox95;
            System::Windows::Forms::CheckBox^  checkBox94;
            System::Windows::Forms::CheckBox^  checkBox93;
            System::Windows::Forms::CheckBox^  checkBox92;
            System::Windows::Forms::CheckBox^  checkBox91;
            System::Windows::Forms::CheckBox^  checkBox90;
            System::Windows::Forms::CheckBox^  checkBox89;
            System::Windows::Forms::CheckBox^  checkBox88;
            System::Windows::Forms::CheckBox^  checkBox87;
            System::Windows::Forms::CheckBox^  checkBox86;
            System::Windows::Forms::CheckBox^  checkBox85;
            System::Windows::Forms::CheckBox^  checkBox84;
            System::Windows::Forms::CheckBox^  checkBox83;
            System::Windows::Forms::CheckBox^  checkBox82;
            System::Windows::Forms::CheckBox^  checkBox81;
            System::Windows::Forms::CheckBox^  checkBox80;
            System::Windows::Forms::CheckBox^  checkBox79;
            System::Windows::Forms::CheckBox^  checkBox78;
            System::Windows::Forms::CheckBox^  checkBox77;
            System::Windows::Forms::CheckBox^  checkBox76;
            System::Windows::Forms::CheckBox^  checkBox75;
            System::Windows::Forms::CheckBox^  checkBox74;
            System::Windows::Forms::CheckBox^  checkBox73;
            System::Windows::Forms::CheckBox^  checkBox72;
            System::Windows::Forms::CheckBox^  checkBox71;
            System::Windows::Forms::CheckBox^  checkBox70;
            System::Windows::Forms::CheckBox^  checkBox69;
            System::Windows::Forms::CheckBox^  checkBox68;
            System::Windows::Forms::CheckBox^  checkBox67;
            System::Windows::Forms::CheckBox^  checkBox66;
            System::Windows::Forms::CheckBox^  checkBox65;
            System::Windows::Forms::CheckBox^  checkBox64;
            System::Windows::Forms::CheckBox^  checkBox63;
            System::Windows::Forms::CheckBox^  checkBox62;
            System::Windows::Forms::CheckBox^  checkBox61;
            System::Windows::Forms::CheckBox^  checkBox60;
            System::Windows::Forms::CheckBox^  checkBox59;
            System::Windows::Forms::CheckBox^  checkBox58;
            System::Windows::Forms::CheckBox^  checkBox57;
            System::Windows::Forms::CheckBox^  checkBox56;
            System::Windows::Forms::CheckBox^  checkBox55;
            System::Windows::Forms::CheckBox^  checkBox54;
            System::Windows::Forms::CheckBox^  checkBox53;
            System::Windows::Forms::CheckBox^  checkBox52;
            System::Windows::Forms::CheckBox^  checkBox51;
            System::Windows::Forms::CheckBox^  checkBox50;
            System::Windows::Forms::CheckBox^  checkBox49;
            System::Windows::Forms::CheckBox^  checkBox48;
            System::Windows::Forms::CheckBox^  checkBox47;
            System::Windows::Forms::CheckBox^  checkBox46;
            System::Windows::Forms::CheckBox^  checkBox45;
            System::Windows::Forms::CheckBox^  checkBox44;
            System::Windows::Forms::CheckBox^  checkBox43;
            System::Windows::Forms::CheckBox^  checkBox42;
            System::Windows::Forms::CheckBox^  checkBox41;
            System::Windows::Forms::CheckBox^  checkBox40;
            System::Windows::Forms::CheckBox^  checkBox39;
            System::Windows::Forms::CheckBox^  checkBox38;
            System::Windows::Forms::CheckBox^  checkBox37;
            System::Windows::Forms::CheckBox^  checkBox36;
            System::Windows::Forms::CheckBox^  checkBox35;
            System::Windows::Forms::CheckBox^  checkBox34;
            System::Windows::Forms::CheckBox^  checkBox33;
            System::Windows::Forms::CheckBox^  checkBox32;
            System::Windows::Forms::CheckBox^  checkBox31;
            System::Windows::Forms::CheckBox^  checkBox30;
            System::Windows::Forms::CheckBox^  checkBox29;
            System::Windows::Forms::CheckBox^  checkBox28;
            System::Windows::Forms::CheckBox^  checkBox27;
            System::Windows::Forms::CheckBox^  checkBox26;
            System::Windows::Forms::CheckBox^  checkBox25;
            System::Windows::Forms::CheckBox^  checkBox24;
            System::Windows::Forms::CheckBox^  checkBox23;
            System::Windows::Forms::CheckBox^  checkBox22;
            System::Windows::Forms::CheckBox^  checkBox21;
            System::Windows::Forms::CheckBox^  checkBox20;
            System::Windows::Forms::CheckBox^  checkBox19;
            System::Windows::Forms::CheckBox^  checkBox18;
            System::Windows::Forms::CheckBox^  checkBox17;
            System::Windows::Forms::CheckBox^  checkBox16;
            System::Windows::Forms::CheckBox^  checkBox15;
            System::Windows::Forms::CheckBox^  checkBox14;
            System::Windows::Forms::CheckBox^  checkBox13;
            System::Windows::Forms::CheckBox^  checkBox12;
            System::Windows::Forms::CheckBox^  checkBox11;
            System::Windows::Forms::CheckBox^  checkBox10;
            System::Windows::Forms::CheckBox^  checkBox9;
            System::Windows::Forms::CheckBox^  checkBox8;
            System::Windows::Forms::CheckBox^  checkBox7;
            System::Windows::Forms::CheckBox^  checkBox6;
            System::Windows::Forms::CheckBox^  checkBox5;
            System::Windows::Forms::CheckBox^  checkBox4;
            System::Windows::Forms::CheckBox^  checkBox3;
            System::Windows::Forms::CheckBox^  checkBox2;
            System::Windows::Forms::CheckBox^  checkBox1;
            System::Windows::Forms::CheckBox^  checkBox0;
            System::Windows::Forms::CheckBox^  checkBox179;
            System::Windows::Forms::CheckBox^  checkBox177;
            System::Windows::Forms::CheckBox^  checkBox176;
            System::Windows::Forms::CheckBox^  checkBox175;
            System::Windows::Forms::CheckBox^  checkBox174;
            System::Windows::Forms::CheckBox^  checkBox173;
            System::Windows::Forms::CheckBox^  checkBox172;
            System::Windows::Forms::CheckBox^  checkBox171;
            System::Windows::Forms::CheckBox^  checkBox170;
            System::Windows::Forms::CheckBox^  checkBox169;
            System::Windows::Forms::CheckBox^  checkBox168;
            System::Windows::Forms::CheckBox^  checkBox167;
            System::Windows::Forms::CheckBox^  checkBox166;
            System::Windows::Forms::CheckBox^  checkBox165;
            System::Windows::Forms::CheckBox^  checkBox164;
            System::Windows::Forms::CheckBox^  checkBox163;
            System::Windows::Forms::CheckBox^  checkBox162;
            System::Windows::Forms::CheckBox^  checkBox160;
            System::Windows::Forms::CheckBox^  checkBox159;
            System::Windows::Forms::CheckBox^  checkBox158;
            System::Windows::Forms::CheckBox^  checkBox157;
            System::Windows::Forms::CheckBox^  checkBox156;
            System::Windows::Forms::CheckBox^  checkBox155;
            System::Windows::Forms::CheckBox^  checkBox154;
            System::Windows::Forms::CheckBox^  checkBox153;
            System::Windows::Forms::CheckBox^  checkBox152;
            System::Windows::Forms::CheckBox^  checkBox151;
            System::Windows::Forms::CheckBox^  checkBox150;
            System::Windows::Forms::CheckBox^  checkBox149;
            System::Windows::Forms::CheckBox^  checkBox148;
            System::Windows::Forms::CheckBox^  checkBox147;
            System::Windows::Forms::CheckBox^  checkBox146;
            System::Windows::Forms::CheckBox^  checkBox145;
            System::Windows::Forms::CheckBox^  checkBox144;
            System::Windows::Forms::CheckBox^  checkBox143;
            System::Windows::Forms::CheckBox^  checkBox142;
            System::Windows::Forms::CheckBox^  checkBox141;
            System::Windows::Forms::CheckBox^  checkBox140;
            System::Windows::Forms::CheckBox^  checkBox139;
            System::Windows::Forms::CheckBox^  checkBox138;
            System::Windows::Forms::CheckBox^  checkBox137;
            System::Windows::Forms::CheckBox^  checkBox136;
            System::Windows::Forms::CheckBox^  checkBox135;
            System::Windows::Forms::CheckBox^  checkBox134;
            System::Windows::Forms::CheckBox^  checkBox133;
            System::Windows::Forms::CheckBox^  checkBox132;
            System::Windows::Forms::CheckBox^  checkBox131;
            System::Windows::Forms::CheckBox^  checkBox130;
            System::Windows::Forms::CheckBox^  checkBox129;
            System::Windows::Forms::CheckBox^  checkBox128;
            System::Windows::Forms::CheckBox^  checkBox127;
            System::Windows::Forms::CheckBox^  checkBox126;
            System::Windows::Forms::CheckBox^  checkBox125;
            System::Windows::Forms::CheckBox^  checkBox124;
            System::Windows::Forms::CheckBox^  checkBox123;
            System::Windows::Forms::CheckBox^  checkBox122;
            System::Windows::Forms::CheckBox^  checkBox121;
            System::Windows::Forms::CheckBox^  checkBox120;
            System::Windows::Forms::CheckBox^  checkBox118;
            System::Windows::Forms::CheckBox^  checkBox119;
            System::Windows::Forms::CheckBox^  cbLn7;
            System::Windows::Forms::CheckBox^  cbLn6;
            System::Windows::Forms::CheckBox^  cbLn5;
            System::Windows::Forms::CheckBox^  cbLn4;
            System::Windows::Forms::CheckBox^  cbLn3;
            System::Windows::Forms::CheckBox^  cbLn2;
            System::Windows::Forms::CheckBox^  cbLn1;
            System::Windows::Forms::CheckBox^  cbLn0;

            System::Windows::Forms::GroupBox^  laneBox;
            System::Windows::Forms::GroupBox^  channelBox;
            
            System::Windows::Forms::Label^  lbLn7;
            System::Windows::Forms::Label^  lbLn6;
            System::Windows::Forms::Label^  lbLn5;
            System::Windows::Forms::Label^  lbLn1;
            System::Windows::Forms::Label^  lbLn2;
            System::Windows::Forms::Label^  lbLn3;
            System::Windows::Forms::Label^  lbLn4;
            System::Windows::Forms::Label^  lbLn0;
            System::Windows::Forms::Label^  ln0;
            System::Windows::Forms::Label^  ln1;
            System::Windows::Forms::Label^  ln2;
            System::Windows::Forms::Label^  ln3;
            System::Windows::Forms::Label^  ln4;
            System::Windows::Forms::Label^  ln5;
            System::Windows::Forms::Label^  ln6;
            System::Windows::Forms::Label^  ln7;
            System::Windows::Forms::Label^  dLaneAll;
            System::Windows::Forms::Label^  eLaneAll;
            System::Windows::Forms::Label^  ch0;
            System::Windows::Forms::Label^  ch1;
            System::Windows::Forms::Label^  ch2;
            System::Windows::Forms::Label^  ch3;
            System::Windows::Forms::Label^  ch4;
            System::Windows::Forms::Label^  ch5;
            System::Windows::Forms::Label^  ch6;
            System::Windows::Forms::Label^  ch7;
            System::Windows::Forms::Label^  ch8;
            System::Windows::Forms::Label^  ch9;
            System::Windows::Forms::Label^  ch10;
            System::Windows::Forms::Label^  ch11;
            System::Windows::Forms::Label^  ch12;
            System::Windows::Forms::Label^  ch13;
            System::Windows::Forms::Label^  ch14;
            System::Windows::Forms::Label^  ch15;
            System::Windows::Forms::Label^  eChAll;
            System::Windows::Forms::Label^  dChAll;
                        
            System::Windows::Forms::MenuStrip^  menuStrip1;

            System::Windows::Forms::ToolStripMenuItem^  nandSettings;
            System::Windows::Forms::ToolStripMenuItem^  settings;
           

            void cbLn0Click(Object^ Sender, EventArgs^ Args);
            void cbLn1Click(Object^ Sender, EventArgs^ Args);         
            void cbLn2Click(Object^ Sender, EventArgs^ Args);
            void cbLn3Click(Object^ Sender, EventArgs^ Args);
            void cbLn4Click(Object^ Sender, EventArgs^ Args);
            void cbLn5Click(Object^ Sender, EventArgs^ Args);
            void cbLn6Click(Object^ Sender, EventArgs^ Args);
            void cbLn7Click(Object^ Sender, EventArgs^ Args);         
            void checkBox16Click(Object^ Sender, EventArgs^ Args);
            void checkBox17Click(Object^ Sender, EventArgs^ Args);
            void checkBox34Click(Object^ Sender, EventArgs^ Args);
            void checkBox35Click(Object^ Sender, EventArgs^ Args);
            void checkBox52Click(Object^ Sender, EventArgs^ Args);
            void checkBox53Click(Object^ Sender, EventArgs^ Args);
            void checkBox70Click(Object^ Sender, EventArgs^ Args);
            void checkBox71Click(Object^ Sender, EventArgs^ Args);
            void checkBox88Click(Object^ Sender, EventArgs^ Args);
            void checkBox89Click(Object^ Sender, EventArgs^ Args);
            void checkBox106Click(Object^ Sender, EventArgs^ Args);
            void checkBox107Click(Object^ Sender, EventArgs^ Args);
            void checkBox124Click(Object^ Sender, EventArgs^ Args);
            void checkBox125Click(Object^ Sender, EventArgs^ Args);
            void checkBox142Click(Object^ Sender, EventArgs^ Args);
            void checkBox143Click(Object^ Sender, EventArgs^ Args);
            void checkBox144Click(Object^ Sender, EventArgs^ Args);
            void checkBox145Click(Object^ Sender, EventArgs^ Args);
            void checkBox146Click(Object^ Sender, EventArgs^ Args);
            void checkBox147Click(Object^ Sender, EventArgs^ Args);
            void checkBox148Click(Object^ Sender, EventArgs^ Args);
            void checkBox149Click(Object^ Sender, EventArgs^ Args);
            void checkBox150Click(Object^ Sender, EventArgs^ Args);
            void checkBox151Click(Object^ Sender, EventArgs^ Args);
            void checkBox152Click(Object^ Sender, EventArgs^ Args);
            void checkBox153Click(Object^ Sender, EventArgs^ Args);
            void checkBox154Click(Object^ Sender, EventArgs^ Args);
            void checkBox155Click(Object^ Sender, EventArgs^ Args);
            void checkBox156Click(Object^ Sender, EventArgs^ Args);
            void checkBox157Click(Object^ Sender, EventArgs^ Args);
            void checkBox158Click(Object^ Sender, EventArgs^ Args);
            void checkBox159Click(Object^ Sender, EventArgs^ Args);
            void checkBox162Click(Object^ Sender, EventArgs^ Args);
            void checkBox163Click(Object^ Sender, EventArgs^ Args);
            void checkBox164Click(Object^ Sender, EventArgs^ Args);
            void checkBox165Click(Object^ Sender, EventArgs^ Args);
            void checkBox166Click(Object^ Sender, EventArgs^ Args);
            void checkBox167Click(Object^ Sender, EventArgs^ Args);
            void checkBox168Click(Object^ Sender, EventArgs^ Args);
            void checkBox169Click(Object^ Sender, EventArgs^ Args);
            void checkBox170Click(Object^ Sender, EventArgs^ Args);
            void checkBox171Click(Object^ Sender, EventArgs^ Args);
            void checkBox172Click(Object^ Sender, EventArgs^ Args);
            void checkBox173Click(Object^ Sender, EventArgs^ Args);
            void checkBox174Click(Object^ Sender, EventArgs^ Args);
            void checkBox175Click(Object^ Sender, EventArgs^ Args);
            void checkBox176Click(Object^ Sender, EventArgs^ Args);
            void checkBox177Click(Object^ Sender, EventArgs^ Args);
            void checkBox160Click(Object^ Sender, EventArgs^ Args);
            void checkBox179Click(Object^ Sender, EventArgs^ Args);
  
        

    System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		
#pragma endregion
    private: System::Void ui_signas3nt_Load(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
    }

    private: System::Void settingsToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
    }
    private: System::Void channelBox_Enter(System::Object^  sender, System::EventArgs^  e) {
    }
    };
}
