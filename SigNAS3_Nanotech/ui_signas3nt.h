#pragma once
#include "ui_settings.h"
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

	private:
        settings objS;
        void InitializeComponent();
        SigNAS3_Nanotech::ui_settings^ objSettings = gcnew ui_settings();

        void ui_signas3nt::settingsClick(System::Object^ sender, System::EventArgs^ e)
        {
            objSettings->ShowDialog();
        }

        void ui_signas3nt::butRun_Click(Object^ Sender, EventArgs^ Args);
        
        System::Windows::Forms::GroupBox^  laneBox;
        System::Windows::Forms::GroupBox^  channelBox;
        System::Windows::Forms::Label^  ln0;
        System::Windows::Forms::Label^  ln1;
        System::Windows::Forms::Label^  ln2;
        System::Windows::Forms::Label^  ln3;
        System::Windows::Forms::Label^  ln4;
    private: System::Windows::Forms::Label^  ln5;
    private: System::Windows::Forms::Label^  ln6;
    private: System::Windows::Forms::Label^  ln7;
    private: System::Windows::Forms::Label^  dLaneAll;
    private: System::Windows::Forms::Label^  eLaneAll;

    private: System::Windows::Forms::Label^  ch0;
    private: System::Windows::Forms::Label^  ch1;    
    private: System::Windows::Forms::Label^  ch2;
    private: System::Windows::Forms::Label^  ch3;
    private: System::Windows::Forms::Label^  ch4;
    private: System::Windows::Forms::Label^  ch5;
    private: System::Windows::Forms::Label^  ch6;
    private: System::Windows::Forms::Label^  ch7;
    private: System::Windows::Forms::Label^  ch8;
    private: System::Windows::Forms::Label^  ch9;
    private: System::Windows::Forms::Label^  ch10;
    private: System::Windows::Forms::Label^  ch11;
    private: System::Windows::Forms::Label^  ch12;
    private: System::Windows::Forms::Label^  ch13;
    private: System::Windows::Forms::Label^  ch14;
    private: System::Windows::Forms::Label^  ch15;
    private: System::Windows::Forms::Label^  eChAll;
    private: System::Windows::Forms::Label^  dChAll;
    private: System::Windows::Forms::CheckBox^  checkBox117;
    private: System::Windows::Forms::CheckBox^  checkBox116;
    private: System::Windows::Forms::CheckBox^  checkBox115;
    private: System::Windows::Forms::CheckBox^  checkBox114;
    private: System::Windows::Forms::CheckBox^  checkBox113;
    private: System::Windows::Forms::CheckBox^  checkBox112;
    private: System::Windows::Forms::CheckBox^  checkBox111;
    private: System::Windows::Forms::CheckBox^  checkBox110;
    private: System::Windows::Forms::CheckBox^  checkBox109;
    private: System::Windows::Forms::CheckBox^  checkBox108;
    private: System::Windows::Forms::CheckBox^  checkBox107;
    private: System::Windows::Forms::CheckBox^  checkBox106;
    private: System::Windows::Forms::CheckBox^  checkBox105;
    private: System::Windows::Forms::CheckBox^  checkBox104;
    private: System::Windows::Forms::CheckBox^  checkBox103;
    private: System::Windows::Forms::CheckBox^  checkBox102;
    private: System::Windows::Forms::CheckBox^  checkBox101;
    private: System::Windows::Forms::CheckBox^  checkBox100;
    private: System::Windows::Forms::CheckBox^  checkBox99;
    private: System::Windows::Forms::CheckBox^  checkBox98;
    private: System::Windows::Forms::CheckBox^  checkBox97;
    private: System::Windows::Forms::CheckBox^  checkBox96;
    private: System::Windows::Forms::CheckBox^  checkBox95;
    private: System::Windows::Forms::CheckBox^  checkBox94;
    private: System::Windows::Forms::CheckBox^  checkBox93;
    private: System::Windows::Forms::CheckBox^  checkBox92;
    private: System::Windows::Forms::CheckBox^  checkBox91;
    private: System::Windows::Forms::CheckBox^  checkBox90;
    private: System::Windows::Forms::CheckBox^  checkBox89;
    private: System::Windows::Forms::CheckBox^  checkBox88;
    private: System::Windows::Forms::CheckBox^  checkBox87;
    private: System::Windows::Forms::CheckBox^  checkBox86;
    private: System::Windows::Forms::CheckBox^  checkBox85;
    private: System::Windows::Forms::CheckBox^  checkBox84;
    private: System::Windows::Forms::CheckBox^  checkBox83;
    private: System::Windows::Forms::CheckBox^  checkBox82;
    private: System::Windows::Forms::CheckBox^  checkBox81;
    private: System::Windows::Forms::CheckBox^  checkBox80;
    private: System::Windows::Forms::CheckBox^  checkBox79;
    private: System::Windows::Forms::CheckBox^  checkBox78;
    private: System::Windows::Forms::CheckBox^  checkBox77;
    private: System::Windows::Forms::CheckBox^  checkBox76;
    private: System::Windows::Forms::CheckBox^  checkBox75;
    private: System::Windows::Forms::CheckBox^  checkBox74;
    private: System::Windows::Forms::CheckBox^  checkBox73;
    private: System::Windows::Forms::CheckBox^  checkBox72;
    private: System::Windows::Forms::CheckBox^  checkBox71;
    private: System::Windows::Forms::CheckBox^  checkBox70;
    private: System::Windows::Forms::CheckBox^  checkBox69;
    private: System::Windows::Forms::CheckBox^  checkBox68;
    private: System::Windows::Forms::CheckBox^  checkBox67;
    private: System::Windows::Forms::CheckBox^  checkBox66;
    private: System::Windows::Forms::CheckBox^  checkBox65;
    private: System::Windows::Forms::CheckBox^  checkBox64;
    private: System::Windows::Forms::CheckBox^  checkBox63;
    private: System::Windows::Forms::CheckBox^  checkBox62;
    private: System::Windows::Forms::CheckBox^  checkBox61;
    private: System::Windows::Forms::CheckBox^  checkBox60;
    private: System::Windows::Forms::CheckBox^  checkBox59;
    private: System::Windows::Forms::CheckBox^  checkBox58;
    private: System::Windows::Forms::CheckBox^  checkBox57;
    private: System::Windows::Forms::CheckBox^  checkBox56;
    private: System::Windows::Forms::CheckBox^  checkBox55;
    private: System::Windows::Forms::CheckBox^  checkBox54;
    private: System::Windows::Forms::CheckBox^  checkBox53;
    private: System::Windows::Forms::CheckBox^  checkBox52;
    private: System::Windows::Forms::CheckBox^  checkBox51;
    private: System::Windows::Forms::CheckBox^  checkBox50;
    private: System::Windows::Forms::CheckBox^  checkBox49;
    private: System::Windows::Forms::CheckBox^  checkBox48;
    private: System::Windows::Forms::CheckBox^  checkBox47;
    private: System::Windows::Forms::CheckBox^  checkBox46;
    private: System::Windows::Forms::CheckBox^  checkBox45;
    private: System::Windows::Forms::CheckBox^  checkBox44;
    private: System::Windows::Forms::CheckBox^  checkBox43;
    private: System::Windows::Forms::CheckBox^  checkBox42;
    private: System::Windows::Forms::CheckBox^  checkBox41;
    private: System::Windows::Forms::CheckBox^  checkBox40;
    private: System::Windows::Forms::CheckBox^  checkBox39;
    private: System::Windows::Forms::CheckBox^  checkBox38;
    private: System::Windows::Forms::CheckBox^  checkBox37;
    private: System::Windows::Forms::CheckBox^  checkBox36;
    private: System::Windows::Forms::CheckBox^  checkBox35;
    private: System::Windows::Forms::CheckBox^  checkBox34;
    private: System::Windows::Forms::CheckBox^  checkBox33;
    private: System::Windows::Forms::CheckBox^  checkBox32;
    private: System::Windows::Forms::CheckBox^  checkBox31;
    private: System::Windows::Forms::CheckBox^  checkBox30;
    private: System::Windows::Forms::CheckBox^  checkBox29;
    private: System::Windows::Forms::CheckBox^  checkBox28;
    private: System::Windows::Forms::CheckBox^  checkBox27;
    private: System::Windows::Forms::CheckBox^  checkBox26;
    private: System::Windows::Forms::CheckBox^  checkBox25;
    private: System::Windows::Forms::CheckBox^  checkBox24;
    private: System::Windows::Forms::CheckBox^  checkBox23;
    private: System::Windows::Forms::CheckBox^  checkBox22;
    private: System::Windows::Forms::CheckBox^  checkBox21;
    private: System::Windows::Forms::CheckBox^  checkBox20;
    private: System::Windows::Forms::CheckBox^  checkBox19;
    private: System::Windows::Forms::CheckBox^  checkBox18;
    private: System::Windows::Forms::CheckBox^  checkBox17;
    private: System::Windows::Forms::CheckBox^  checkBox16;
    private: System::Windows::Forms::CheckBox^  checkBox15;
    private: System::Windows::Forms::CheckBox^  checkBox14;
    private: System::Windows::Forms::CheckBox^  checkBox13;
    private: System::Windows::Forms::CheckBox^  checkBox12;
    private: System::Windows::Forms::CheckBox^  checkBox11;
    private: System::Windows::Forms::CheckBox^  checkBox10;
    private: System::Windows::Forms::CheckBox^  checkBox9;
    private: System::Windows::Forms::CheckBox^  checkBox8;
    private: System::Windows::Forms::CheckBox^  checkBox7;
    private: System::Windows::Forms::CheckBox^  checkBox6;
    private: System::Windows::Forms::CheckBox^  checkBox5;
    private: System::Windows::Forms::CheckBox^  checkBox4;
    private: System::Windows::Forms::CheckBox^  checkBox3;
    private: System::Windows::Forms::CheckBox^  checkBox2;
    private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::CheckBox^  checkBox0;
private: System::Windows::Forms::CheckBox^  checkBox179;
private: System::Windows::Forms::CheckBox^  checkBox177;
private: System::Windows::Forms::CheckBox^  checkBox176;
private: System::Windows::Forms::CheckBox^  checkBox175;
private: System::Windows::Forms::CheckBox^  checkBox174;
private: System::Windows::Forms::CheckBox^  checkBox173;
private: System::Windows::Forms::CheckBox^  checkBox172;
private: System::Windows::Forms::CheckBox^  checkBox171;
private: System::Windows::Forms::CheckBox^  checkBox170;
private: System::Windows::Forms::CheckBox^  checkBox169;
private: System::Windows::Forms::CheckBox^  checkBox168;
private: System::Windows::Forms::CheckBox^  checkBox167;
private: System::Windows::Forms::CheckBox^  checkBox166;
private: System::Windows::Forms::CheckBox^  checkBox165;
private: System::Windows::Forms::CheckBox^  checkBox164;
private: System::Windows::Forms::CheckBox^  checkBox163;
private: System::Windows::Forms::CheckBox^  checkBox162;
private: System::Windows::Forms::CheckBox^  checkBox160;
private: System::Windows::Forms::CheckBox^  checkBox159;
private: System::Windows::Forms::CheckBox^  checkBox158;
private: System::Windows::Forms::CheckBox^  checkBox157;
private: System::Windows::Forms::CheckBox^  checkBox156;
private: System::Windows::Forms::CheckBox^  checkBox155;
private: System::Windows::Forms::CheckBox^  checkBox154;
private: System::Windows::Forms::CheckBox^  checkBox153;
private: System::Windows::Forms::CheckBox^  checkBox152;
private: System::Windows::Forms::CheckBox^  checkBox151;
private: System::Windows::Forms::CheckBox^  checkBox150;
private: System::Windows::Forms::CheckBox^  checkBox149;
private: System::Windows::Forms::CheckBox^  checkBox148;
private: System::Windows::Forms::CheckBox^  checkBox147;
private: System::Windows::Forms::CheckBox^  checkBox146;
private: System::Windows::Forms::CheckBox^  checkBox145;
private: System::Windows::Forms::CheckBox^  checkBox144;
private: System::Windows::Forms::CheckBox^  checkBox143;
private: System::Windows::Forms::CheckBox^  checkBox142;
private: System::Windows::Forms::CheckBox^  checkBox141;
private: System::Windows::Forms::CheckBox^  checkBox140;
private: System::Windows::Forms::CheckBox^  checkBox139;
private: System::Windows::Forms::CheckBox^  checkBox138;
private: System::Windows::Forms::CheckBox^  checkBox137;
private: System::Windows::Forms::CheckBox^  checkBox136;
private: System::Windows::Forms::CheckBox^  checkBox135;
private: System::Windows::Forms::CheckBox^  checkBox134;
private: System::Windows::Forms::CheckBox^  checkBox133;
private: System::Windows::Forms::CheckBox^  checkBox132;
private: System::Windows::Forms::CheckBox^  checkBox131;
private: System::Windows::Forms::CheckBox^  checkBox130;
private: System::Windows::Forms::CheckBox^  checkBox129;
private: System::Windows::Forms::CheckBox^  checkBox128;
private: System::Windows::Forms::CheckBox^  checkBox127;
private: System::Windows::Forms::CheckBox^  checkBox126;
private: System::Windows::Forms::CheckBox^  checkBox125;
private: System::Windows::Forms::CheckBox^  checkBox124;
private: System::Windows::Forms::CheckBox^  checkBox123;
private: System::Windows::Forms::CheckBox^  checkBox122;
private: System::Windows::Forms::CheckBox^  checkBox121;
private: System::Windows::Forms::CheckBox^  checkBox120;
private: System::Windows::Forms::CheckBox^  checkBox119;
private: System::Windows::Forms::CheckBox^  cbLn7;
private: System::Windows::Forms::CheckBox^  cbLn6;
private: System::Windows::Forms::CheckBox^  cbLn5;
private: System::Windows::Forms::CheckBox^  cbLn4;
private: System::Windows::Forms::CheckBox^  cbLn3;
private: System::Windows::Forms::CheckBox^  cbLn2;
private: System::Windows::Forms::CheckBox^  cbLn1;
private: System::Windows::Forms::CheckBox^  cbLn0;
private: System::Windows::Forms::Label^  lbLn7;
private: System::Windows::Forms::Label^  lbLn6;
private: System::Windows::Forms::Label^  lbLn5;
private: System::Windows::Forms::Label^  lbLn1;
private: System::Windows::Forms::Label^  lbLn2;
private: System::Windows::Forms::Label^  lbLn3;
private: System::Windows::Forms::Label^  lbLn4;
private: System::Windows::Forms::Label^  lbLn0;
private: System::Windows::Forms::MenuStrip^  menuStrip1;
private: System::Windows::Forms::ToolStripMenuItem^  nandSettings;

private: System::Windows::Forms::ToolStripMenuItem^  settings;
private: System::Windows::Forms::Button^  butRun;






private: System::Windows::Forms::CheckBox^  checkBox118;


         void cbLn0Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn0->Checked)
             {
                 lbLn0->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn0->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn1Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn1->Checked)
             {
                 lbLn1->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn1->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn2Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn2->Checked)
             {
                 lbLn2->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn2->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn3Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn3->Checked)
             {
                 lbLn3->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn3->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn4Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn4->Checked)
             {
                 lbLn4->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn4->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn5Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn5->Checked)
             {
                 lbLn5->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn5->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn6Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn6->Checked)
             {
                 lbLn6->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn6->BackColor = System::Drawing::Color::Red;
             }
         }

         void cbLn7Click(Object^ Sender, EventArgs^ Args)
         {
             if (cbLn7->Checked)
             {
                 lbLn7->BackColor = System::Drawing::Color::Green;

             }
             else
             {
                 lbLn7->BackColor = System::Drawing::Color::Red;
             }
         }

private:
    void checkBox16Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox16->Checked)
        {
            checkBox0->Checked = true;
            checkBox1->Checked = true;
            checkBox2->Checked = true;
            checkBox3->Checked = true;
            checkBox4->Checked = true;
            checkBox5->Checked = true;
            checkBox6->Checked = true;
            checkBox7->Checked = true;
            checkBox8->Checked = true;
            checkBox9->Checked = true;
            checkBox10->Checked = true;
            checkBox11->Checked = true;
            checkBox12->Checked = true;
            checkBox13->Checked = true;
            checkBox14->Checked = true;
            checkBox15->Checked = true;
            checkBox17->Checked = false;
        }        
    }

private:
    void checkBox17Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox17->Checked)
        {
            checkBox0->Checked = false;
            checkBox1->Checked = false;
            checkBox2->Checked = false;
            checkBox3->Checked = false;
            checkBox4->Checked = false;
            checkBox5->Checked = false;
            checkBox6->Checked = false;
            checkBox7->Checked = false;
            checkBox8->Checked = false;
            checkBox9->Checked = false;
            checkBox10->Checked = false;
            checkBox11->Checked = false;
            checkBox12->Checked = false;
            checkBox13->Checked = false;
            checkBox14->Checked = false;
            checkBox15->Checked = false;
            checkBox16->Checked = false;
        }

    }

private:
    void checkBox34Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox34->Checked)
        {
            checkBox18->Checked = true;
            checkBox19->Checked = true;
            checkBox20->Checked = true;
            checkBox21->Checked = true;
            checkBox22->Checked = true;
            checkBox23->Checked = true;
            checkBox24->Checked = true;
            checkBox25->Checked = true;
            checkBox26->Checked = true;
            checkBox27->Checked = true;
            checkBox28->Checked = true;
            checkBox29->Checked = true;
            checkBox30->Checked = true;
            checkBox31->Checked = true;
            checkBox32->Checked = true;
            checkBox33->Checked = true;
            checkBox35->Checked = false;
        }

    }

    void checkBox35Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox35->Checked)
        {
            checkBox18->Checked = false;
            checkBox19->Checked = false;
            checkBox20->Checked = false;
            checkBox21->Checked = false;
            checkBox22->Checked = false;
            checkBox23->Checked = false;
            checkBox24->Checked = false;
            checkBox25->Checked = false;
            checkBox26->Checked = false;
            checkBox27->Checked = false;
            checkBox28->Checked = false;
            checkBox29->Checked = false;
            checkBox30->Checked = false;
            checkBox31->Checked = false;
            checkBox32->Checked = false;
            checkBox33->Checked = false;
            checkBox34->Checked = false;
        }

    }

private:
    void checkBox52Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox52->Checked)
        {
            checkBox36->Checked = true;
            checkBox37->Checked = true;
            checkBox38->Checked = true;
            checkBox39->Checked = true;
            checkBox40->Checked = true;
            checkBox41->Checked = true;
            checkBox42->Checked = true;
            checkBox43->Checked = true;
            checkBox44->Checked = true;
            checkBox45->Checked = true;
            checkBox46->Checked = true;
            checkBox47->Checked = true;
            checkBox48->Checked = true;
            checkBox49->Checked = true;
            checkBox50->Checked = true;
            checkBox51->Checked = true;
            checkBox53->Checked = false;
        }

    }
    void checkBox53Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox53->Checked)
        {
            checkBox36->Checked = false;
            checkBox37->Checked = false;
            checkBox38->Checked = false;
            checkBox39->Checked = false;
            checkBox40->Checked = false;
            checkBox41->Checked = false;
            checkBox42->Checked = false;
            checkBox43->Checked = false;
            checkBox44->Checked = false;
            checkBox45->Checked = false;
            checkBox46->Checked = false;
            checkBox47->Checked = false;
            checkBox48->Checked = false;
            checkBox49->Checked = false;
            checkBox50->Checked = false;
            checkBox51->Checked = false;
            checkBox52->Checked = false;
        }

    }

private:
    void checkBox70Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox70->Checked)
        {
            checkBox54->Checked = true;
            checkBox55->Checked = true;
            checkBox56->Checked = true;
            checkBox57->Checked = true;
            checkBox58->Checked = true;
            checkBox59->Checked = true;
            checkBox60->Checked = true;
            checkBox61->Checked = true;
            checkBox62->Checked = true;
            checkBox63->Checked = true;
            checkBox64->Checked = true;
            checkBox65->Checked = true;
            checkBox66->Checked = true;
            checkBox67->Checked = true;
            checkBox68->Checked = true;
            checkBox69->Checked = true;
            checkBox71->Checked = false;
        }

    }
    void checkBox71Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox71->Checked)
        {
            checkBox54->Checked = false;
            checkBox55->Checked = false;
            checkBox56->Checked = false;
            checkBox57->Checked = false;
            checkBox58->Checked = false;
            checkBox59->Checked = false;
            checkBox60->Checked = false;
            checkBox61->Checked = false;
            checkBox62->Checked = false;
            checkBox63->Checked = false;
            checkBox64->Checked = false;
            checkBox65->Checked = false;
            checkBox66->Checked = false;
            checkBox67->Checked = false;
            checkBox68->Checked = false;
            checkBox69->Checked = false;            
            checkBox70->Checked = false;
        }

    }

private:
    void checkBox88Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox88->Checked)
        {
            checkBox72->Checked = true;
            checkBox73->Checked = true;
            checkBox74->Checked = true;
            checkBox75->Checked = true;
            checkBox76->Checked = true;
            checkBox77->Checked = true;
            checkBox78->Checked = true;
            checkBox79->Checked = true;
            checkBox80->Checked = true;
            checkBox81->Checked = true;
            checkBox82->Checked = true;
            checkBox83->Checked = true;
            checkBox84->Checked = true;
            checkBox85->Checked = true;
            checkBox86->Checked = true;
            checkBox87->Checked = true;
            checkBox89->Checked = false;
        }

    }
    void checkBox89Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox89->Checked)
        {
            checkBox72->Checked = false;
            checkBox73->Checked = false;
            checkBox74->Checked = false;
            checkBox75->Checked = false;
            checkBox76->Checked = false;
            checkBox77->Checked = false;
            checkBox78->Checked = false;
            checkBox79->Checked = false;
            checkBox80->Checked = false;
            checkBox81->Checked = false;
            checkBox82->Checked = false;
            checkBox83->Checked = false;
            checkBox84->Checked = false;
            checkBox85->Checked = false;
            checkBox86->Checked = false;
            checkBox87->Checked = false;
            checkBox88->Checked = false;
        }

    }

private:
    void checkBox106Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox106->Checked)
        {
            checkBox90->Checked = true;
            checkBox91->Checked = true;
            checkBox92->Checked = true;
            checkBox93->Checked = true;
            checkBox94->Checked = true;
            checkBox95->Checked = true;
            checkBox96->Checked = true;
            checkBox97->Checked = true;
            checkBox98->Checked = true;
            checkBox99->Checked = true;
            checkBox100->Checked = true;
            checkBox101->Checked = true;
            checkBox102->Checked = true;
            checkBox103->Checked = true;
            checkBox104->Checked = true;
            checkBox105->Checked = true;
            checkBox107->Checked = false;
        }

    }
    void checkBox107Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox107->Checked)
        {
            checkBox90->Checked = false;
            checkBox91->Checked = false;
            checkBox92->Checked = false;
            checkBox93->Checked = false;
            checkBox94->Checked = false;
            checkBox95->Checked = false;
            checkBox96->Checked = false;
            checkBox97->Checked = false;
            checkBox98->Checked = false;
            checkBox99->Checked = false;
            checkBox100->Checked = false;
            checkBox101->Checked = false;
            checkBox102->Checked = false;
            checkBox103->Checked = false;
            checkBox104->Checked = false;
            checkBox105->Checked = false;
            checkBox106->Checked = false;
        }

    }

    void checkBox124Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox124->Checked)
        {
            checkBox108->Checked = true;
            checkBox109->Checked = true;
            checkBox110->Checked = true;
            checkBox111->Checked = true;
            checkBox112->Checked = true;
            checkBox113->Checked = true;
            checkBox114->Checked = true;
            checkBox115->Checked = true;
            checkBox116->Checked = true;
            checkBox117->Checked = true;
            checkBox118->Checked = true;
            checkBox119->Checked = true;
            checkBox120->Checked = true;
            checkBox121->Checked = true;
            checkBox122->Checked = true;
            checkBox123->Checked = true;
            checkBox125->Checked = false;
        }

    }
    void checkBox125Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox125->Checked)
        {
            checkBox108->Checked = false;
            checkBox109->Checked = false;
            checkBox110->Checked = false;
            checkBox111->Checked = false;
            checkBox112->Checked = false;
            checkBox113->Checked = false;
            checkBox114->Checked = false;
            checkBox115->Checked = false;
            checkBox116->Checked = false;
            checkBox117->Checked = false;
            checkBox118->Checked = false;
            checkBox119->Checked = false;
            checkBox120->Checked = false;
            checkBox121->Checked = false;
            checkBox122->Checked = false;
            checkBox123->Checked = false;
            checkBox124->Checked = false;
        }

    }

    void checkBox142Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox142->Checked)
        {
            checkBox126->Checked = true;
            checkBox127->Checked = true;
            checkBox128->Checked = true;
            checkBox129->Checked = true;
            checkBox130->Checked = true;
            checkBox131->Checked = true;
            checkBox132->Checked = true;
            checkBox133->Checked = true;
            checkBox134->Checked = true;
            checkBox135->Checked = true;
            checkBox136->Checked = true;
            checkBox137->Checked = true;
            checkBox138->Checked = true;
            checkBox139->Checked = true;
            checkBox140->Checked = true;
            checkBox141->Checked = true;
            checkBox143->Checked = false;
        }

    }
    void checkBox143Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox143->Checked)
        {
            checkBox126->Checked = false;
            checkBox127->Checked = false;
            checkBox128->Checked = false;
            checkBox129->Checked = false;
            checkBox130->Checked = false;
            checkBox131->Checked = false;
            checkBox132->Checked = false;
            checkBox133->Checked = false;
            checkBox134->Checked = false;
            checkBox135->Checked = false;
            checkBox136->Checked = false;
            checkBox137->Checked = false;
            checkBox138->Checked = false;
            checkBox139->Checked = false;
            checkBox140->Checked = false;
            checkBox141->Checked = false;
            checkBox142->Checked = false;
        }

    }

    void checkBox144Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox144->Checked)
        {
            checkBox0->Checked = true;
            checkBox18->Checked = true;
            checkBox36->Checked = true;
            checkBox54->Checked = true;
            checkBox72->Checked = true;
            checkBox90->Checked = true;
            checkBox108->Checked = true;
            checkBox126->Checked = true;
            checkBox162->Checked = false;
        }
    }
    void checkBox145Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox145->Checked)
        {
            checkBox1->Checked = true;
            checkBox19->Checked = true;
            checkBox37->Checked = true;
            checkBox55->Checked = true;
            checkBox73->Checked = true;
            checkBox91->Checked = true;
            checkBox109->Checked = true;
            checkBox127->Checked = true;
            checkBox163->Checked = false;
        }
    }

    void checkBox146Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox146->Checked)
        {
            checkBox2->Checked = true;
            checkBox20->Checked = true;
            checkBox38->Checked = true;
            checkBox56->Checked = true;
            checkBox74->Checked = true;
            checkBox92->Checked = true;
            checkBox110->Checked = true;
            checkBox128->Checked = true;
            checkBox164->Checked = false;
        }
    }

    void checkBox147Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox147->Checked)
        {
            checkBox3->Checked = true;
            checkBox21->Checked = true;
            checkBox39->Checked = true;
            checkBox57->Checked = true;
            checkBox75->Checked = true;
            checkBox93->Checked = true;
            checkBox111->Checked = true;
            checkBox129->Checked = true;
            checkBox165->Checked = false;
        }
    }

    void checkBox148Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox148->Checked)
        {
            checkBox4->Checked = true;
            checkBox22->Checked = true;
            checkBox40->Checked = true;
            checkBox58->Checked = true;
            checkBox76->Checked = true;
            checkBox94->Checked = true;
            checkBox112->Checked = true;
            checkBox130->Checked = true;
            checkBox166->Checked = false;
        }
    }

    void checkBox149Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox149->Checked)
        {
            checkBox5->Checked = true;
            checkBox23->Checked = true;
            checkBox41->Checked = true;
            checkBox59->Checked = true;
            checkBox77->Checked = true;
            checkBox95->Checked = true;
            checkBox113->Checked = true;
            checkBox131->Checked = true;
            checkBox167->Checked = false;
        }
    }

    void checkBox150Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox150->Checked)
        {
            checkBox6->Checked = true;
            checkBox24->Checked = true;
            checkBox42->Checked = true;
            checkBox60->Checked = true;
            checkBox78->Checked = true;
            checkBox96->Checked = true;
            checkBox114->Checked = true;
            checkBox132->Checked = true;
            checkBox168->Checked = false;
        }
    }
    void checkBox151Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox151->Checked)
        {
            checkBox7->Checked = true;
            checkBox25->Checked = true;
            checkBox43->Checked = true;
            checkBox61->Checked = true;
            checkBox79->Checked = true;
            checkBox97->Checked = true;
            checkBox115->Checked = true;
            checkBox133->Checked = true;
            checkBox169->Checked = false;
        }
    }
    void checkBox152Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox152->Checked)
        {
            checkBox8->Checked = true;
            checkBox26->Checked = true;
            checkBox44->Checked = true;
            checkBox62->Checked = true;
            checkBox80->Checked = true;
            checkBox98->Checked = true;
            checkBox116->Checked = true;
            checkBox134->Checked = true;
            checkBox170->Checked = false;
        }
    }

    void checkBox153Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox153->Checked)
        {
            checkBox9->Checked = true;
            checkBox27->Checked = true;
            checkBox45->Checked = true;
            checkBox63->Checked = true;
            checkBox81->Checked = true;
            checkBox99->Checked = true;
            checkBox117->Checked = true;
            checkBox135->Checked = true;
            checkBox171->Checked = false;
        }
    }

    void checkBox154Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox154->Checked)
        {
            checkBox10->Checked = true;
            checkBox28->Checked = true;
            checkBox46->Checked = true;
            checkBox64->Checked = true;
            checkBox82->Checked = true;
            checkBox100->Checked = true;
            checkBox118->Checked = true;
            checkBox136->Checked = true;
            checkBox172->Checked = false;
        }
    }

    void checkBox155Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox155->Checked)
        {
            checkBox11->Checked = true;
            checkBox29->Checked = true;
            checkBox47->Checked = true;
            checkBox65->Checked = true;
            checkBox83->Checked = true;
            checkBox101->Checked = true;
            checkBox119->Checked = true;
            checkBox137->Checked = true;
            checkBox173->Checked = false;
        }
    }

    void checkBox156Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox156->Checked)
        {
            checkBox12->Checked = true;
            checkBox30->Checked = true;
            checkBox48->Checked = true;
            checkBox66->Checked = true;
            checkBox84->Checked = true;
            checkBox102->Checked = true;
            checkBox120->Checked = true;
            checkBox138->Checked = true;
            checkBox174->Checked = false;
        }
    }

    void checkBox157Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox157->Checked)
        {
            checkBox13->Checked = true;
            checkBox31->Checked = true;
            checkBox49->Checked = true;
            checkBox67->Checked = true;
            checkBox85->Checked = true;
            checkBox103->Checked = true;
            checkBox121->Checked = true;
            checkBox139->Checked = true;
            checkBox175->Checked = false;
        }
    }

    void checkBox158Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox158->Checked)
        {
            checkBox14->Checked = true;
            checkBox32->Checked = true;
            checkBox50->Checked = true;
            checkBox68->Checked = true;
            checkBox86->Checked = true;
            checkBox104->Checked = true;
            checkBox122->Checked = true;
            checkBox140->Checked = true;
            checkBox176->Checked = false;
        }
    }

    void checkBox159Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox159->Checked)
        {
            checkBox15->Checked = true;
            checkBox33->Checked = true;
            checkBox51->Checked = true;
            checkBox69->Checked = true;
            checkBox87->Checked = true;
            checkBox105->Checked = true;
            checkBox123->Checked = true;
            checkBox141->Checked = true;
            checkBox177->Checked = false;
        }
    }
  
    void checkBox162Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox162->Checked)
        {
            checkBox0->Checked = false;
            checkBox18->Checked = false;
            checkBox36->Checked = false;
            checkBox54->Checked = false;
            checkBox72->Checked = false;
            checkBox90->Checked = false;
            checkBox108->Checked = false;
            checkBox126->Checked = false;
            checkBox144->Checked = false;
        }
    }
    void checkBox163Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox163->Checked)
        {
            checkBox1->Checked = false;
            checkBox19->Checked = false;
            checkBox37->Checked = false;
            checkBox55->Checked = false;
            checkBox73->Checked = false;
            checkBox91->Checked = false;
            checkBox109->Checked = false;
            checkBox127->Checked = false;
            checkBox145->Checked = false;
        }
    }
    void checkBox164Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox164->Checked)
        {
            checkBox2->Checked = false;
            checkBox20->Checked = false;
            checkBox38->Checked = false;
            checkBox56->Checked = false;
            checkBox74->Checked = false;
            checkBox92->Checked = false;
            checkBox110->Checked = false;
            checkBox128->Checked = false;
            checkBox146->Checked = false;
        }
    }
    void checkBox165Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox165->Checked)
        {
            checkBox3->Checked = false;
            checkBox21->Checked = false;
            checkBox39->Checked = false;
            checkBox57->Checked = false;
            checkBox75->Checked = false;
            checkBox93->Checked = false;
            checkBox111->Checked = false;
            checkBox129->Checked = false;
            checkBox147->Checked = false;
        }
    }
    void checkBox166Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox166->Checked)
        {
            checkBox4->Checked = false;
            checkBox22->Checked = false;
            checkBox40->Checked = false;
            checkBox58->Checked = false;
            checkBox76->Checked = false;
            checkBox94->Checked = false;
            checkBox112->Checked = false;
            checkBox130->Checked = false;
            checkBox148->Checked = false;
        }
    }
    void checkBox167Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox167->Checked)
        {
            checkBox5->Checked = false;
            checkBox23->Checked = false;
            checkBox41->Checked = false;
            checkBox59->Checked = false;
            checkBox77->Checked = false;
            checkBox95->Checked = false;
            checkBox113->Checked = false;
            checkBox131->Checked = false;
            checkBox149->Checked = false;
        }
    }
    void checkBox168Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox168->Checked)
        {
            checkBox6->Checked = false;
            checkBox24->Checked = false;
            checkBox42->Checked = false;
            checkBox60->Checked = false;
            checkBox78->Checked = false;
            checkBox96->Checked = false;
            checkBox114->Checked = false;
            checkBox132->Checked = false;
            checkBox150->Checked = false;
        }
    }
    void checkBox169Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox169->Checked)
        {
            checkBox7->Checked = false;
            checkBox25->Checked = false;
            checkBox43->Checked = false;
            checkBox61->Checked = false;
            checkBox79->Checked = false;
            checkBox97->Checked = false;
            checkBox115->Checked = false;
            checkBox133->Checked = false;
            checkBox151->Checked = false;
        }
    }
    void checkBox170Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox170->Checked)
        {
            checkBox8->Checked = false;
            checkBox26->Checked = false;
            checkBox44->Checked = false;
            checkBox62->Checked = false;
            checkBox80->Checked = false;
            checkBox98->Checked = false;
            checkBox116->Checked = false;
            checkBox134->Checked = false;
            checkBox152->Checked = false;
        }
    }
    void checkBox171Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox171->Checked)
        {
            checkBox9->Checked = false;
            checkBox27->Checked = false;
            checkBox45->Checked = false;
            checkBox63->Checked = false;
            checkBox81->Checked = false;
            checkBox99->Checked = false;
            checkBox117->Checked = false;
            checkBox135->Checked = false;
            checkBox153->Checked = false;
        }
    }
    void checkBox172Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox172->Checked)
        {
            checkBox10->Checked = false;
            checkBox28->Checked = false;
            checkBox46->Checked = false;
            checkBox64->Checked = false;
            checkBox82->Checked = false;
            checkBox100->Checked = false;
            checkBox118->Checked = false;
            checkBox136->Checked = false;
            checkBox154->Checked = false;
        }
    }
    void checkBox173Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox173->Checked)
        {
            checkBox11->Checked = false;
            checkBox29->Checked = false;
            checkBox47->Checked = false;
            checkBox65->Checked = false;
            checkBox83->Checked = false;
            checkBox101->Checked = false;
            checkBox119->Checked = false;
            checkBox137->Checked = false;
            checkBox155->Checked = false;
        }
    }
    void checkBox174Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox174->Checked)
        {
            checkBox12->Checked = false;
            checkBox30->Checked = false;
            checkBox48->Checked = false;
            checkBox66->Checked = false;
            checkBox84->Checked = false;
            checkBox102->Checked = false;
            checkBox120->Checked = false;
            checkBox138->Checked = false;
            checkBox156->Checked = false;
        }
    }
    void checkBox175Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox175->Checked)
        {
            checkBox13->Checked = false;
            checkBox31->Checked = false;
            checkBox49->Checked = false;
            checkBox67->Checked = false;
            checkBox85->Checked = false;
            checkBox103->Checked = false;
            checkBox121->Checked = false;
            checkBox139->Checked = false;
            checkBox157->Checked = false;
        }
    }
    void checkBox176Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox176->Checked)
        {
            checkBox14->Checked = false;
            checkBox32->Checked = false;
            checkBox50->Checked = false;
            checkBox68->Checked = false;
            checkBox86->Checked = false;
            checkBox104->Checked = false;
            checkBox122->Checked = false;
            checkBox140->Checked = false;
            checkBox158->Checked = false;
        }
    }
    void checkBox177Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox177->Checked)
        {
            checkBox15->Checked = false;
            checkBox33->Checked = false;
            checkBox51->Checked = false;
            checkBox69->Checked = false;
            checkBox87->Checked = false;
            checkBox105->Checked = false;
            checkBox123->Checked = false;
            checkBox141->Checked = false;
            checkBox159->Checked = false;
        }
    }

    void checkBox160Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox160->Checked)
        {
            checkBox0->Checked = true;
            checkBox1->Checked = true;
            checkBox2->Checked = true;
            checkBox3->Checked = true;
            checkBox4->Checked = true;
            checkBox5->Checked = true;
            checkBox6->Checked = true;
            checkBox7->Checked = true;
            checkBox8->Checked = true;
            checkBox9->Checked = true;
            checkBox10->Checked = true;
            checkBox11->Checked = true;
            checkBox12->Checked = true;
            checkBox13->Checked = true;
            checkBox14->Checked = true;
            checkBox15->Checked = true;
            
            checkBox18->Checked = true;
            checkBox19->Checked = true;
            checkBox20->Checked = true;
            checkBox21->Checked = true;
            checkBox22->Checked = true;
            checkBox23->Checked = true;
            checkBox24->Checked = true;
            checkBox25->Checked = true;
            checkBox26->Checked = true;
            checkBox27->Checked = true;
            checkBox28->Checked = true;
            checkBox29->Checked = true;
            checkBox30->Checked = true;
            checkBox31->Checked = true;
            checkBox32->Checked = true;
            checkBox33->Checked = true;            

            checkBox36->Checked = true;
            checkBox37->Checked = true;
            checkBox38->Checked = true;
            checkBox39->Checked = true;
            checkBox40->Checked = true;
            checkBox41->Checked = true;
            checkBox42->Checked = true;
            checkBox43->Checked = true;
            checkBox44->Checked = true;
            checkBox45->Checked = true;
            checkBox46->Checked = true;
            checkBox47->Checked = true;
            checkBox48->Checked = true;
            checkBox49->Checked = true;
            checkBox50->Checked = true;
            checkBox51->Checked = true;

            checkBox54->Checked = true;
            checkBox55->Checked = true;
            checkBox56->Checked = true;
            checkBox57->Checked = true;
            checkBox58->Checked = true;
            checkBox59->Checked = true;
            checkBox60->Checked = true;
            checkBox61->Checked = true;
            checkBox62->Checked = true;
            checkBox63->Checked = true;
            checkBox64->Checked = true;
            checkBox65->Checked = true;
            checkBox66->Checked = true;
            checkBox67->Checked = true;
            checkBox68->Checked = true;
            checkBox69->Checked = true;

            checkBox72->Checked = true;
            checkBox73->Checked = true;
            checkBox74->Checked = true;
            checkBox75->Checked = true;
            checkBox76->Checked = true;
            checkBox77->Checked = true;
            checkBox78->Checked = true;
            checkBox79->Checked = true;
            checkBox80->Checked = true;
            checkBox81->Checked = true;
            checkBox82->Checked = true;
            checkBox83->Checked = true;
            checkBox84->Checked = true;
            checkBox85->Checked = true;
            checkBox86->Checked = true;
            checkBox87->Checked = true;

            checkBox90->Checked = true;
            checkBox91->Checked = true;
            checkBox92->Checked = true;
            checkBox93->Checked = true;
            checkBox94->Checked = true;
            checkBox95->Checked = true;
            checkBox96->Checked = true;
            checkBox97->Checked = true;
            checkBox98->Checked = true;
            checkBox99->Checked = true;
            checkBox100->Checked = true;
            checkBox101->Checked = true;
            checkBox102->Checked = true;
            checkBox103->Checked = true;
            checkBox104->Checked = true;
            checkBox105->Checked = true;

            checkBox108->Checked = true;
            checkBox109->Checked = true;
            checkBox110->Checked = true;
            checkBox111->Checked = true;
            checkBox112->Checked = true;
            checkBox113->Checked = true;
            checkBox114->Checked = true;
            checkBox115->Checked = true;
            checkBox116->Checked = true;
            checkBox117->Checked = true;
            checkBox118->Checked = true;
            checkBox119->Checked = true;
            checkBox120->Checked = true;
            checkBox121->Checked = true;
            checkBox122->Checked = true;
            checkBox123->Checked = true;

            checkBox126->Checked = true;
            checkBox127->Checked = true;
            checkBox128->Checked = true;
            checkBox129->Checked = true;
            checkBox130->Checked = true;
            checkBox131->Checked = true;
            checkBox132->Checked = true;
            checkBox133->Checked = true;
            checkBox134->Checked = true;
            checkBox135->Checked = true;
            checkBox136->Checked = true;
            checkBox137->Checked = true;
            checkBox138->Checked = true;
            checkBox139->Checked = true;
            checkBox140->Checked = true;
            checkBox141->Checked = true;

            checkBox162->Checked = false;
            checkBox163->Checked = false;
            checkBox164->Checked = false;
            checkBox165->Checked = false;
            checkBox166->Checked = false;
            checkBox167->Checked = false;
            checkBox168->Checked = false;
            checkBox169->Checked = false;
            checkBox170->Checked = false;
            checkBox171->Checked = false;
            checkBox172->Checked = false;
            checkBox173->Checked = false;
            checkBox174->Checked = false;
            checkBox175->Checked = false;
            checkBox176->Checked = false;
            checkBox177->Checked = false;
            checkBox179->Checked = false;
        }
    }
    void checkBox179Click(Object^ Sender, EventArgs^ Args)
    {
        if (checkBox179->Checked)
        {
            checkBox160->Checked = false;

            checkBox0->Checked = false;
            checkBox1->Checked = false;
            checkBox2->Checked = false;
            checkBox3->Checked = false;
            checkBox4->Checked = false;
            checkBox5->Checked = false;
            checkBox6->Checked = false;
            checkBox7->Checked = false;
            checkBox8->Checked = false;
            checkBox9->Checked = false;
            checkBox10->Checked = false;
            checkBox11->Checked = false;
            checkBox12->Checked = false;
            checkBox13->Checked = false;
            checkBox14->Checked = false;
            checkBox15->Checked = false;
            checkBox16->Checked = false;
            checkBox17->Checked = false;
            checkBox18->Checked = false;
            checkBox19->Checked = false;
            checkBox20->Checked = false;
            checkBox21->Checked = false;
            checkBox22->Checked = false;
            checkBox23->Checked = false;
            checkBox24->Checked = false;
            checkBox25->Checked = false;
            checkBox26->Checked = false;
            checkBox27->Checked = false;
            checkBox28->Checked = false;
            checkBox29->Checked = false;
            checkBox30->Checked = false;
            checkBox31->Checked = false;
            checkBox32->Checked = false;
            checkBox33->Checked = false;
            checkBox34->Checked = false;
            checkBox35->Checked = false;
            checkBox36->Checked = false;
            checkBox37->Checked = false;
            checkBox38->Checked = false;
            checkBox39->Checked = false;
            checkBox40->Checked = false;
            checkBox41->Checked = false;
            checkBox42->Checked = false;
            checkBox43->Checked = false;
            checkBox44->Checked = false;
            checkBox45->Checked = false;
            checkBox46->Checked = false;
            checkBox47->Checked = false;
            checkBox48->Checked = false;
            checkBox49->Checked = false;
            checkBox50->Checked = false;
            checkBox51->Checked = false;
            checkBox52->Checked = false;
            checkBox53->Checked = false;
            checkBox54->Checked = false;
            checkBox55->Checked = false;
            checkBox56->Checked = false;
            checkBox57->Checked = false;
            checkBox58->Checked = false;
            checkBox59->Checked = false;
            checkBox60->Checked = false;
            checkBox61->Checked = false;
            checkBox62->Checked = false;
            checkBox63->Checked = false;
            checkBox64->Checked = false;
            checkBox65->Checked = false;
            checkBox66->Checked = false;
            checkBox67->Checked = false;
            checkBox68->Checked = false;
            checkBox69->Checked = false;
            checkBox70->Checked = false;
            checkBox71->Checked = false;
            checkBox72->Checked = false;
            checkBox73->Checked = false;
            checkBox74->Checked = false;
            checkBox75->Checked = false;
            checkBox76->Checked = false;
            checkBox77->Checked = false;
            checkBox78->Checked = false;
            checkBox79->Checked = false;
            checkBox80->Checked = false;
            checkBox81->Checked = false;
            checkBox82->Checked = false;
            checkBox83->Checked = false;
            checkBox84->Checked = false;
            checkBox85->Checked = false;
            checkBox86->Checked = false;
            checkBox87->Checked = false;
            checkBox88->Checked = false;
            checkBox89->Checked = false;
            checkBox90->Checked = false;
            checkBox91->Checked = false;
            checkBox92->Checked = false;
            checkBox93->Checked = false;
            checkBox94->Checked = false;
            checkBox95->Checked = false;
            checkBox96->Checked = false;
            checkBox97->Checked = false;
            checkBox98->Checked = false;
            checkBox99->Checked = false;
            checkBox100->Checked = false;
            checkBox101->Checked = false;
            checkBox102->Checked = false;
            checkBox103->Checked = false;
            checkBox104->Checked = false;
            checkBox105->Checked = false;
            checkBox106->Checked = false;
            checkBox107->Checked = false;
            checkBox108->Checked = false;
            checkBox109->Checked = false;
            checkBox110->Checked = false;
            checkBox111->Checked = false;
            checkBox112->Checked = false;
            checkBox113->Checked = false;
            checkBox114->Checked = false;
            checkBox115->Checked = false;
            checkBox116->Checked = false;
            checkBox117->Checked = false;
            checkBox118->Checked = false;
            checkBox119->Checked = false;
            checkBox120->Checked = false;
            checkBox121->Checked = false;
            checkBox122->Checked = false;
            checkBox123->Checked = false;
            checkBox124->Checked = false;
            checkBox125->Checked = false;
            checkBox126->Checked = false;
            checkBox127->Checked = false;
            checkBox128->Checked = false;
            checkBox129->Checked = false;
            checkBox130->Checked = false;
            checkBox131->Checked = false;
            checkBox132->Checked = false;
            checkBox133->Checked = false;
            checkBox134->Checked = false;
            checkBox135->Checked = false;
            checkBox136->Checked = false;
            checkBox137->Checked = false;
            checkBox138->Checked = false;
            checkBox139->Checked = false;
            checkBox140->Checked = false;
            checkBox141->Checked = false;
            checkBox142->Checked = false;
            checkBox143->Checked = false;
            checkBox144->Checked = false;
            checkBox145->Checked = false;
            checkBox146->Checked = false;
            checkBox147->Checked = false;
            checkBox148->Checked = false;
            checkBox149->Checked = false;
            checkBox150->Checked = false;
            checkBox151->Checked = false;
            checkBox152->Checked = false;
            checkBox153->Checked = false;
            checkBox153->Checked = false;
            checkBox155->Checked = false;
            checkBox156->Checked = false;
            checkBox157->Checked = false;
            checkBox158->Checked = false;
            checkBox159->Checked = false;

            checkBox162->Checked = false;
            checkBox163->Checked = false;
            checkBox164->Checked = false;
            checkBox165->Checked = false;
            checkBox166->Checked = false;
            checkBox167->Checked = false;
            checkBox168->Checked = false;
            checkBox169->Checked = false;
            checkBox170->Checked = false;
            checkBox171->Checked = false;
            checkBox172->Checked = false;
            checkBox173->Checked = false;
            checkBox174->Checked = false;
            checkBox175->Checked = false;
            checkBox176->Checked = false;
            checkBox177->Checked = false;
            checkBox179->Checked = false;
        }
    }

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
