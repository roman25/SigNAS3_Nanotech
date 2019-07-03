#include "ui_signas3nt.h"

SigNAS3_Nanotech::ui_signas3nt::ui_signas3nt()
{
    InitializeComponent();

}

void SigNAS3_Nanotech::ui_signas3nt::butRun_Click(System::Object^ Sender, System::EventArgs^ Args)
{
    SigNAS3_Nanotech::settings s;
    s = objSettings->getNandSettings();

    Console::WriteLine(s.vendor);
    Console::WriteLine(s.blockLun);
    Console::WriteLine(s.core);
}

void SigNAS3_Nanotech::ui_signas3nt::checkBox16Click(System::Object^ Sender, System::EventArgs^ Args)
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


void SigNAS3_Nanotech::ui_signas3nt::checkBox17Click(System::Object^ Sender, System::EventArgs^ Args)
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


void SigNAS3_Nanotech::ui_signas3nt::checkBox34Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox35Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox52Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox53Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox70Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox71Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox88Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox89Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox106Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox107Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox124Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox125Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox142Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox143Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox144Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox145Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox146Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox147Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox148Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox149Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox150Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox151Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox152Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox153Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox154Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox155Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox156Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox157Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox158Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox159Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox162Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox163Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox164Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox165Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox166Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox167Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox168Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox169Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox170Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox171Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox172Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox173Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox174Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox175Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox176Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox177Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::checkBox160Click(System::Object^ Sender, System::EventArgs^ Args)
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
void SigNAS3_Nanotech::ui_signas3nt::checkBox179Click(System::Object^ Sender, System::EventArgs^ Args)
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


void SigNAS3_Nanotech::ui_signas3nt::cbLn2Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::cbLn3Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::cbLn4Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::cbLn5Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::cbLn6Click(System::Object^ Sender, System::EventArgs^ Args)
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

void SigNAS3_Nanotech::ui_signas3nt::cbLn7Click(System::Object^ Sender, System::EventArgs^ Args)
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


void SigNAS3_Nanotech::ui_signas3nt::cbLn1Click(System::Object^ Sender, System::EventArgs^ Args)
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



void SigNAS3_Nanotech::ui_signas3nt::cbLn0Click(System::Object^ Sender, System::EventArgs^ Args)
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


void SigNAS3_Nanotech::ui_signas3nt::settingsClick(System::Object^ Sender, System::EventArgs^ e)
{
    objSettings->ShowDialog();
}


void SigNAS3_Nanotech::ui_signas3nt::InitializeComponent()
{
    this->laneBox = (gcnew System::Windows::Forms::GroupBox());
    this->cbLn7 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn6 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn5 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn4 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn3 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn2 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn1 = (gcnew System::Windows::Forms::CheckBox());
    this->cbLn0 = (gcnew System::Windows::Forms::CheckBox());
    this->lbLn7 = (gcnew System::Windows::Forms::Label());
    this->lbLn6 = (gcnew System::Windows::Forms::Label());
    this->lbLn5 = (gcnew System::Windows::Forms::Label());
    this->lbLn1 = (gcnew System::Windows::Forms::Label());
    this->lbLn2 = (gcnew System::Windows::Forms::Label());
    this->lbLn3 = (gcnew System::Windows::Forms::Label());
    this->lbLn4 = (gcnew System::Windows::Forms::Label());
    this->lbLn0 = (gcnew System::Windows::Forms::Label());
    this->channelBox = (gcnew System::Windows::Forms::GroupBox());
    this->checkBox0 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox179 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox177 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox176 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox175 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox174 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox173 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox172 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox171 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox170 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox169 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox168 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox167 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox166 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox165 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox164 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox163 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox162 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox160 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox159 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox158 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox157 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox156 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox155 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox154 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox153 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox152 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox151 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox150 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox149 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox148 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox147 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox146 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox145 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox144 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox143 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox142 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox141 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox140 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox139 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox138 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox137 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox136 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox135 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox134 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox133 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox132 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox131 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox130 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox129 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox128 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox127 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox126 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox125 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox124 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox123 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox122 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox121 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox120 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox119 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox118 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox117 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox116 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox115 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox114 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox113 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox112 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox111 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox110 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox109 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox108 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox107 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox106 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox105 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox104 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox103 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox102 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox101 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox100 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox99 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox98 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox97 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox96 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox95 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox94 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox93 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox92 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox91 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox90 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox89 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox88 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox87 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox86 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox85 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox84 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox83 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox82 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox81 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox80 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox79 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox78 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox77 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox76 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox75 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox74 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox73 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox72 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox71 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox70 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox69 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox68 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox67 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox66 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox65 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox64 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox63 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox62 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox61 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox60 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox59 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox58 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox57 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox56 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox55 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox54 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox53 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox52 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox51 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox50 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox49 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox48 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox47 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox46 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox45 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox44 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox43 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox42 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox41 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox40 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox39 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox38 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox37 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox36 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox35 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox34 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox33 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox32 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox31 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox30 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox29 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox28 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox27 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox26 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox25 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox24 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox23 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox22 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox21 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox20 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox19 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
    this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
    this->eChAll = (gcnew System::Windows::Forms::Label());
    this->dChAll = (gcnew System::Windows::Forms::Label());
    this->ln1 = (gcnew System::Windows::Forms::Label());
    this->ln2 = (gcnew System::Windows::Forms::Label());
    this->ln3 = (gcnew System::Windows::Forms::Label());
    this->ln5 = (gcnew System::Windows::Forms::Label());
    this->ln6 = (gcnew System::Windows::Forms::Label());
    this->ln7 = (gcnew System::Windows::Forms::Label());
    this->ln4 = (gcnew System::Windows::Forms::Label());
    this->ln0 = (gcnew System::Windows::Forms::Label());
    this->ch11 = (gcnew System::Windows::Forms::Label());
    this->ch10 = (gcnew System::Windows::Forms::Label());
    this->ch1 = (gcnew System::Windows::Forms::Label());
    this->ch2 = (gcnew System::Windows::Forms::Label());
    this->ch3 = (gcnew System::Windows::Forms::Label());
    this->ch4 = (gcnew System::Windows::Forms::Label());
    this->ch5 = (gcnew System::Windows::Forms::Label());
    this->ch6 = (gcnew System::Windows::Forms::Label());
    this->dLaneAll = (gcnew System::Windows::Forms::Label());
    this->eLaneAll = (gcnew System::Windows::Forms::Label());
    this->ch15 = (gcnew System::Windows::Forms::Label());
    this->ch14 = (gcnew System::Windows::Forms::Label());
    this->ch13 = (gcnew System::Windows::Forms::Label());
    this->ch12 = (gcnew System::Windows::Forms::Label());
    this->ch9 = (gcnew System::Windows::Forms::Label());
    this->ch8 = (gcnew System::Windows::Forms::Label());
    this->ch7 = (gcnew System::Windows::Forms::Label());
    this->ch0 = (gcnew System::Windows::Forms::Label());
    this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
    this->nandSettings = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->settings = (gcnew System::Windows::Forms::ToolStripMenuItem());
    this->butRun = (gcnew System::Windows::Forms::Button());
    this->laneBox->SuspendLayout();
    this->channelBox->SuspendLayout();
    this->menuStrip1->SuspendLayout();
    this->SuspendLayout();
    // 
    // laneBox
    // 
    this->laneBox->Controls->Add(this->cbLn7);
    this->laneBox->Controls->Add(this->cbLn6);
    this->laneBox->Controls->Add(this->cbLn5);
    this->laneBox->Controls->Add(this->cbLn4);
    this->laneBox->Controls->Add(this->cbLn3);
    this->laneBox->Controls->Add(this->cbLn2);
    this->laneBox->Controls->Add(this->cbLn1);
    this->laneBox->Controls->Add(this->cbLn0);
    this->laneBox->Controls->Add(this->lbLn7);
    this->laneBox->Controls->Add(this->lbLn6);
    this->laneBox->Controls->Add(this->lbLn5);
    this->laneBox->Controls->Add(this->lbLn1);
    this->laneBox->Controls->Add(this->lbLn2);
    this->laneBox->Controls->Add(this->lbLn3);
    this->laneBox->Controls->Add(this->lbLn4);
    this->laneBox->Controls->Add(this->lbLn0);
    this->laneBox->Location = System::Drawing::Point(13, 28);
    this->laneBox->Name = L"laneBox";
    this->laneBox->Size = System::Drawing::Size(822, 74);
    this->laneBox->TabIndex = 0;
    this->laneBox->TabStop = false;
    this->laneBox->Text = L"Lane Connection";
    // 
    // cbLn7
    // 
    this->cbLn7->AutoSize = true;
    this->cbLn7->Location = System::Drawing::Point(512, 54);
    this->cbLn7->Name = L"cbLn7";
    this->cbLn7->Size = System::Drawing::Size(15, 14);
    this->cbLn7->TabIndex = 215;
    this->cbLn7->UseVisualStyleBackColor = true;
    this->cbLn7->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn7Click);
    // 
    // cbLn6
    // 
    this->cbLn6->AutoSize = true;
    this->cbLn6->Location = System::Drawing::Point(444, 54);
    this->cbLn6->Name = L"cbLn6";
    this->cbLn6->Size = System::Drawing::Size(15, 14);
    this->cbLn6->TabIndex = 214;
    this->cbLn6->UseVisualStyleBackColor = true;
    this->cbLn6->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn6Click);
    // 
    // cbLn5
    // 
    this->cbLn5->AutoSize = true;
    this->cbLn5->Location = System::Drawing::Point(379, 54);
    this->cbLn5->Name = L"cbLn5";
    this->cbLn5->Size = System::Drawing::Size(15, 14);
    this->cbLn5->TabIndex = 213;
    this->cbLn5->UseVisualStyleBackColor = true;
    this->cbLn5->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn5Click);
    // 
    // cbLn4
    // 
    this->cbLn4->AutoSize = true;
    this->cbLn4->Location = System::Drawing::Point(312, 54);
    this->cbLn4->Name = L"cbLn4";
    this->cbLn4->Size = System::Drawing::Size(15, 14);
    this->cbLn4->TabIndex = 212;
    this->cbLn4->UseVisualStyleBackColor = true;
    this->cbLn4->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn4Click);
    // 
    // cbLn3
    // 
    this->cbLn3->AutoSize = true;
    this->cbLn3->Location = System::Drawing::Point(240, 54);
    this->cbLn3->Name = L"cbLn3";
    this->cbLn3->Size = System::Drawing::Size(15, 14);
    this->cbLn3->TabIndex = 211;
    this->cbLn3->UseVisualStyleBackColor = true;
    this->cbLn3->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn3Click);
    // 
    // cbLn2
    // 
    this->cbLn2->AutoSize = true;
    this->cbLn2->Location = System::Drawing::Point(162, 54);
    this->cbLn2->Name = L"cbLn2";
    this->cbLn2->Size = System::Drawing::Size(15, 14);
    this->cbLn2->TabIndex = 210;
    this->cbLn2->UseVisualStyleBackColor = true;
    this->cbLn2->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn2Click);
    // 
    // cbLn1
    // 
    this->cbLn1->AutoSize = true;
    this->cbLn1->Location = System::Drawing::Point(89, 54);
    this->cbLn1->Name = L"cbLn1";
    this->cbLn1->Size = System::Drawing::Size(15, 14);
    this->cbLn1->TabIndex = 209;
    this->cbLn1->UseVisualStyleBackColor = true;
    this->cbLn1->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn1Click);
    // 
    // cbLn0
    // 
    this->cbLn0->AutoSize = true;
    this->cbLn0->Location = System::Drawing::Point(28, 54);
    this->cbLn0->Name = L"cbLn0";
    this->cbLn0->Size = System::Drawing::Size(15, 14);
    this->cbLn0->TabIndex = 208;
    this->cbLn0->UseVisualStyleBackColor = true;
    this->cbLn0->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::cbLn0Click);
    // 
    // lbLn7
    // 
    this->lbLn7->AutoSize = true;
    this->lbLn7->Location = System::Drawing::Point(514, 28);
    this->lbLn7->Name = L"lbLn7";
    this->lbLn7->Size = System::Drawing::Size(13, 13);
    this->lbLn7->TabIndex = 8;
    this->lbLn7->Text = L"7";
    // 
    // lbLn6
    // 
    this->lbLn6->AutoSize = true;
    this->lbLn6->Location = System::Drawing::Point(446, 28);
    this->lbLn6->Name = L"lbLn6";
    this->lbLn6->Size = System::Drawing::Size(13, 13);
    this->lbLn6->TabIndex = 7;
    this->lbLn6->Text = L"6";
    // 
    // lbLn5
    // 
    this->lbLn5->AutoSize = true;
    this->lbLn5->Location = System::Drawing::Point(381, 28);
    this->lbLn5->Name = L"lbLn5";
    this->lbLn5->Size = System::Drawing::Size(13, 13);
    this->lbLn5->TabIndex = 6;
    this->lbLn5->Text = L"5";
    // 
    // lbLn1
    // 
    this->lbLn1->AutoSize = true;
    this->lbLn1->Location = System::Drawing::Point(91, 28);
    this->lbLn1->Name = L"lbLn1";
    this->lbLn1->Size = System::Drawing::Size(13, 13);
    this->lbLn1->TabIndex = 5;
    this->lbLn1->Text = L"1";
    // 
    // lbLn2
    // 
    this->lbLn2->AutoSize = true;
    this->lbLn2->Location = System::Drawing::Point(164, 28);
    this->lbLn2->Name = L"lbLn2";
    this->lbLn2->Size = System::Drawing::Size(13, 13);
    this->lbLn2->TabIndex = 4;
    this->lbLn2->Text = L"2";
    // 
    // lbLn3
    // 
    this->lbLn3->AutoSize = true;
    this->lbLn3->Location = System::Drawing::Point(242, 28);
    this->lbLn3->Name = L"lbLn3";
    this->lbLn3->Size = System::Drawing::Size(13, 13);
    this->lbLn3->TabIndex = 3;
    this->lbLn3->Text = L"3";
    // 
    // lbLn4
    // 
    this->lbLn4->AutoSize = true;
    this->lbLn4->Location = System::Drawing::Point(314, 28);
    this->lbLn4->Name = L"lbLn4";
    this->lbLn4->Size = System::Drawing::Size(13, 13);
    this->lbLn4->TabIndex = 2;
    this->lbLn4->Text = L"4";
    // 
    // lbLn0
    // 
    this->lbLn0->AutoSize = true;
    this->lbLn0->BackColor = System::Drawing::SystemColors::Control;
    this->lbLn0->Location = System::Drawing::Point(30, 28);
    this->lbLn0->Name = L"lbLn0";
    this->lbLn0->Size = System::Drawing::Size(13, 13);
    this->lbLn0->TabIndex = 1;
    this->lbLn0->Text = L"0";
    // 
    // channelBox
    // 
    this->channelBox->AutoSize = true;
    this->channelBox->Controls->Add(this->checkBox0);
    this->channelBox->Controls->Add(this->checkBox179);
    this->channelBox->Controls->Add(this->checkBox177);
    this->channelBox->Controls->Add(this->checkBox176);
    this->channelBox->Controls->Add(this->checkBox175);
    this->channelBox->Controls->Add(this->checkBox174);
    this->channelBox->Controls->Add(this->checkBox173);
    this->channelBox->Controls->Add(this->checkBox172);
    this->channelBox->Controls->Add(this->checkBox171);
    this->channelBox->Controls->Add(this->checkBox170);
    this->channelBox->Controls->Add(this->checkBox169);
    this->channelBox->Controls->Add(this->checkBox168);
    this->channelBox->Controls->Add(this->checkBox167);
    this->channelBox->Controls->Add(this->checkBox166);
    this->channelBox->Controls->Add(this->checkBox165);
    this->channelBox->Controls->Add(this->checkBox164);
    this->channelBox->Controls->Add(this->checkBox163);
    this->channelBox->Controls->Add(this->checkBox162);
    this->channelBox->Controls->Add(this->checkBox160);
    this->channelBox->Controls->Add(this->checkBox159);
    this->channelBox->Controls->Add(this->checkBox158);
    this->channelBox->Controls->Add(this->checkBox157);
    this->channelBox->Controls->Add(this->checkBox156);
    this->channelBox->Controls->Add(this->checkBox155);
    this->channelBox->Controls->Add(this->checkBox154);
    this->channelBox->Controls->Add(this->checkBox153);
    this->channelBox->Controls->Add(this->checkBox152);
    this->channelBox->Controls->Add(this->checkBox151);
    this->channelBox->Controls->Add(this->checkBox150);
    this->channelBox->Controls->Add(this->checkBox149);
    this->channelBox->Controls->Add(this->checkBox148);
    this->channelBox->Controls->Add(this->checkBox147);
    this->channelBox->Controls->Add(this->checkBox146);
    this->channelBox->Controls->Add(this->checkBox145);
    this->channelBox->Controls->Add(this->checkBox144);
    this->channelBox->Controls->Add(this->checkBox143);
    this->channelBox->Controls->Add(this->checkBox142);
    this->channelBox->Controls->Add(this->checkBox141);
    this->channelBox->Controls->Add(this->checkBox140);
    this->channelBox->Controls->Add(this->checkBox139);
    this->channelBox->Controls->Add(this->checkBox138);
    this->channelBox->Controls->Add(this->checkBox137);
    this->channelBox->Controls->Add(this->checkBox136);
    this->channelBox->Controls->Add(this->checkBox135);
    this->channelBox->Controls->Add(this->checkBox134);
    this->channelBox->Controls->Add(this->checkBox133);
    this->channelBox->Controls->Add(this->checkBox132);
    this->channelBox->Controls->Add(this->checkBox131);
    this->channelBox->Controls->Add(this->checkBox130);
    this->channelBox->Controls->Add(this->checkBox129);
    this->channelBox->Controls->Add(this->checkBox128);
    this->channelBox->Controls->Add(this->checkBox127);
    this->channelBox->Controls->Add(this->checkBox126);
    this->channelBox->Controls->Add(this->checkBox125);
    this->channelBox->Controls->Add(this->checkBox124);
    this->channelBox->Controls->Add(this->checkBox123);
    this->channelBox->Controls->Add(this->checkBox122);
    this->channelBox->Controls->Add(this->checkBox121);
    this->channelBox->Controls->Add(this->checkBox120);
    this->channelBox->Controls->Add(this->checkBox119);
    this->channelBox->Controls->Add(this->checkBox118);
    this->channelBox->Controls->Add(this->checkBox117);
    this->channelBox->Controls->Add(this->checkBox116);
    this->channelBox->Controls->Add(this->checkBox115);
    this->channelBox->Controls->Add(this->checkBox114);
    this->channelBox->Controls->Add(this->checkBox113);
    this->channelBox->Controls->Add(this->checkBox112);
    this->channelBox->Controls->Add(this->checkBox111);
    this->channelBox->Controls->Add(this->checkBox110);
    this->channelBox->Controls->Add(this->checkBox109);
    this->channelBox->Controls->Add(this->checkBox108);
    this->channelBox->Controls->Add(this->checkBox107);
    this->channelBox->Controls->Add(this->checkBox106);
    this->channelBox->Controls->Add(this->checkBox105);
    this->channelBox->Controls->Add(this->checkBox104);
    this->channelBox->Controls->Add(this->checkBox103);
    this->channelBox->Controls->Add(this->checkBox102);
    this->channelBox->Controls->Add(this->checkBox101);
    this->channelBox->Controls->Add(this->checkBox100);
    this->channelBox->Controls->Add(this->checkBox99);
    this->channelBox->Controls->Add(this->checkBox98);
    this->channelBox->Controls->Add(this->checkBox97);
    this->channelBox->Controls->Add(this->checkBox96);
    this->channelBox->Controls->Add(this->checkBox95);
    this->channelBox->Controls->Add(this->checkBox94);
    this->channelBox->Controls->Add(this->checkBox93);
    this->channelBox->Controls->Add(this->checkBox92);
    this->channelBox->Controls->Add(this->checkBox91);
    this->channelBox->Controls->Add(this->checkBox90);
    this->channelBox->Controls->Add(this->checkBox89);
    this->channelBox->Controls->Add(this->checkBox88);
    this->channelBox->Controls->Add(this->checkBox87);
    this->channelBox->Controls->Add(this->checkBox86);
    this->channelBox->Controls->Add(this->checkBox85);
    this->channelBox->Controls->Add(this->checkBox84);
    this->channelBox->Controls->Add(this->checkBox83);
    this->channelBox->Controls->Add(this->checkBox82);
    this->channelBox->Controls->Add(this->checkBox81);
    this->channelBox->Controls->Add(this->checkBox80);
    this->channelBox->Controls->Add(this->checkBox79);
    this->channelBox->Controls->Add(this->checkBox78);
    this->channelBox->Controls->Add(this->checkBox77);
    this->channelBox->Controls->Add(this->checkBox76);
    this->channelBox->Controls->Add(this->checkBox75);
    this->channelBox->Controls->Add(this->checkBox74);
    this->channelBox->Controls->Add(this->checkBox73);
    this->channelBox->Controls->Add(this->checkBox72);
    this->channelBox->Controls->Add(this->checkBox71);
    this->channelBox->Controls->Add(this->checkBox70);
    this->channelBox->Controls->Add(this->checkBox69);
    this->channelBox->Controls->Add(this->checkBox68);
    this->channelBox->Controls->Add(this->checkBox67);
    this->channelBox->Controls->Add(this->checkBox66);
    this->channelBox->Controls->Add(this->checkBox65);
    this->channelBox->Controls->Add(this->checkBox64);
    this->channelBox->Controls->Add(this->checkBox63);
    this->channelBox->Controls->Add(this->checkBox62);
    this->channelBox->Controls->Add(this->checkBox61);
    this->channelBox->Controls->Add(this->checkBox60);
    this->channelBox->Controls->Add(this->checkBox59);
    this->channelBox->Controls->Add(this->checkBox58);
    this->channelBox->Controls->Add(this->checkBox57);
    this->channelBox->Controls->Add(this->checkBox56);
    this->channelBox->Controls->Add(this->checkBox55);
    this->channelBox->Controls->Add(this->checkBox54);
    this->channelBox->Controls->Add(this->checkBox53);
    this->channelBox->Controls->Add(this->checkBox52);
    this->channelBox->Controls->Add(this->checkBox51);
    this->channelBox->Controls->Add(this->checkBox50);
    this->channelBox->Controls->Add(this->checkBox49);
    this->channelBox->Controls->Add(this->checkBox48);
    this->channelBox->Controls->Add(this->checkBox47);
    this->channelBox->Controls->Add(this->checkBox46);
    this->channelBox->Controls->Add(this->checkBox45);
    this->channelBox->Controls->Add(this->checkBox44);
    this->channelBox->Controls->Add(this->checkBox43);
    this->channelBox->Controls->Add(this->checkBox42);
    this->channelBox->Controls->Add(this->checkBox41);
    this->channelBox->Controls->Add(this->checkBox40);
    this->channelBox->Controls->Add(this->checkBox39);
    this->channelBox->Controls->Add(this->checkBox38);
    this->channelBox->Controls->Add(this->checkBox37);
    this->channelBox->Controls->Add(this->checkBox36);
    this->channelBox->Controls->Add(this->checkBox35);
    this->channelBox->Controls->Add(this->checkBox34);
    this->channelBox->Controls->Add(this->checkBox33);
    this->channelBox->Controls->Add(this->checkBox32);
    this->channelBox->Controls->Add(this->checkBox31);
    this->channelBox->Controls->Add(this->checkBox30);
    this->channelBox->Controls->Add(this->checkBox29);
    this->channelBox->Controls->Add(this->checkBox28);
    this->channelBox->Controls->Add(this->checkBox27);
    this->channelBox->Controls->Add(this->checkBox26);
    this->channelBox->Controls->Add(this->checkBox25);
    this->channelBox->Controls->Add(this->checkBox24);
    this->channelBox->Controls->Add(this->checkBox23);
    this->channelBox->Controls->Add(this->checkBox22);
    this->channelBox->Controls->Add(this->checkBox21);
    this->channelBox->Controls->Add(this->checkBox20);
    this->channelBox->Controls->Add(this->checkBox19);
    this->channelBox->Controls->Add(this->checkBox18);
    this->channelBox->Controls->Add(this->checkBox17);
    this->channelBox->Controls->Add(this->checkBox16);
    this->channelBox->Controls->Add(this->checkBox15);
    this->channelBox->Controls->Add(this->checkBox14);
    this->channelBox->Controls->Add(this->checkBox13);
    this->channelBox->Controls->Add(this->checkBox12);
    this->channelBox->Controls->Add(this->checkBox11);
    this->channelBox->Controls->Add(this->checkBox10);
    this->channelBox->Controls->Add(this->checkBox9);
    this->channelBox->Controls->Add(this->checkBox8);
    this->channelBox->Controls->Add(this->checkBox7);
    this->channelBox->Controls->Add(this->checkBox6);
    this->channelBox->Controls->Add(this->checkBox5);
    this->channelBox->Controls->Add(this->checkBox4);
    this->channelBox->Controls->Add(this->checkBox3);
    this->channelBox->Controls->Add(this->checkBox2);
    this->channelBox->Controls->Add(this->checkBox1);
    this->channelBox->Controls->Add(this->eChAll);
    this->channelBox->Controls->Add(this->dChAll);
    this->channelBox->Controls->Add(this->ln1);
    this->channelBox->Controls->Add(this->ln2);
    this->channelBox->Controls->Add(this->ln3);
    this->channelBox->Controls->Add(this->ln5);
    this->channelBox->Controls->Add(this->ln6);
    this->channelBox->Controls->Add(this->ln7);
    this->channelBox->Controls->Add(this->ln4);
    this->channelBox->Controls->Add(this->ln0);
    this->channelBox->Controls->Add(this->ch11);
    this->channelBox->Controls->Add(this->ch10);
    this->channelBox->Controls->Add(this->ch1);
    this->channelBox->Controls->Add(this->ch2);
    this->channelBox->Controls->Add(this->ch3);
    this->channelBox->Controls->Add(this->ch4);
    this->channelBox->Controls->Add(this->ch5);
    this->channelBox->Controls->Add(this->ch6);
    this->channelBox->Controls->Add(this->dLaneAll);
    this->channelBox->Controls->Add(this->eLaneAll);
    this->channelBox->Controls->Add(this->ch15);
    this->channelBox->Controls->Add(this->ch14);
    this->channelBox->Controls->Add(this->ch13);
    this->channelBox->Controls->Add(this->ch12);
    this->channelBox->Controls->Add(this->ch9);
    this->channelBox->Controls->Add(this->ch8);
    this->channelBox->Controls->Add(this->ch7);
    this->channelBox->Controls->Add(this->ch0);
    this->channelBox->Location = System::Drawing::Point(13, 144);
    this->channelBox->Name = L"channelBox";
    this->channelBox->Size = System::Drawing::Size(822, 351);
    this->channelBox->TabIndex = 1;
    this->channelBox->TabStop = false;
    this->channelBox->Text = L"Channel";
    this->channelBox->Enter += gcnew System::EventHandler(this, &ui_signas3nt::channelBox_Enter);
    // 
    // checkBox0
    // 
    this->checkBox0->AutoSize = true;
    this->checkBox0->Location = System::Drawing::Point(54, 36);
    this->checkBox0->Name = L"checkBox0";
    this->checkBox0->Size = System::Drawing::Size(15, 14);
    this->checkBox0->TabIndex = 207;
    this->checkBox0->UseVisualStyleBackColor = true;
    // 
    // checkBox179
    // 
    this->checkBox179->AutoSize = true;
    this->checkBox179->Location = System::Drawing::Point(752, 318);
    this->checkBox179->Name = L"checkBox179";
    this->checkBox179->Size = System::Drawing::Size(15, 14);
    this->checkBox179->TabIndex = 206;
    this->checkBox179->UseVisualStyleBackColor = true;
    this->checkBox179->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox179Click);
    // 
    // checkBox177
    // 
    this->checkBox177->AutoSize = true;
    this->checkBox177->Location = System::Drawing::Point(668, 317);
    this->checkBox177->Name = L"checkBox177";
    this->checkBox177->Size = System::Drawing::Size(15, 14);
    this->checkBox177->TabIndex = 204;
    this->checkBox177->UseVisualStyleBackColor = true;
    this->checkBox177->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox177Click);
    // 
    // checkBox176
    // 
    this->checkBox176->AutoSize = true;
    this->checkBox176->Location = System::Drawing::Point(625, 318);
    this->checkBox176->Name = L"checkBox176";
    this->checkBox176->Size = System::Drawing::Size(15, 14);
    this->checkBox176->TabIndex = 203;
    this->checkBox176->UseVisualStyleBackColor = true;
    this->checkBox176->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox176Click);
    // 
    // checkBox175
    // 
    this->checkBox175->AutoSize = true;
    this->checkBox175->Location = System::Drawing::Point(584, 318);
    this->checkBox175->Name = L"checkBox175";
    this->checkBox175->Size = System::Drawing::Size(15, 14);
    this->checkBox175->TabIndex = 202;
    this->checkBox175->UseVisualStyleBackColor = true;
    this->checkBox175->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox175Click);
    // 
    // checkBox174
    // 
    this->checkBox174->AutoSize = true;
    this->checkBox174->Location = System::Drawing::Point(538, 318);
    this->checkBox174->Name = L"checkBox174";
    this->checkBox174->Size = System::Drawing::Size(15, 14);
    this->checkBox174->TabIndex = 201;
    this->checkBox174->UseVisualStyleBackColor = true;
    this->checkBox174->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox174Click);
    // 
    // checkBox173
    // 
    this->checkBox173->AutoSize = true;
    this->checkBox173->Location = System::Drawing::Point(492, 318);
    this->checkBox173->Name = L"checkBox173";
    this->checkBox173->Size = System::Drawing::Size(15, 14);
    this->checkBox173->TabIndex = 200;
    this->checkBox173->UseVisualStyleBackColor = true;
    this->checkBox173->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox173Click);
    // 
    // checkBox172
    // 
    this->checkBox172->AutoSize = true;
    this->checkBox172->Location = System::Drawing::Point(449, 318);
    this->checkBox172->Name = L"checkBox172";
    this->checkBox172->Size = System::Drawing::Size(15, 14);
    this->checkBox172->TabIndex = 199;
    this->checkBox172->UseVisualStyleBackColor = true;
    this->checkBox172->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox172Click);
    // 
    // checkBox171
    // 
    this->checkBox171->AutoSize = true;
    this->checkBox171->Location = System::Drawing::Point(405, 318);
    this->checkBox171->Name = L"checkBox171";
    this->checkBox171->Size = System::Drawing::Size(15, 14);
    this->checkBox171->TabIndex = 198;
    this->checkBox171->UseVisualStyleBackColor = true;
    this->checkBox171->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox171Click);
    // 
    // checkBox170
    // 
    this->checkBox170->AutoSize = true;
    this->checkBox170->Location = System::Drawing::Point(365, 318);
    this->checkBox170->Name = L"checkBox170";
    this->checkBox170->Size = System::Drawing::Size(15, 14);
    this->checkBox170->TabIndex = 197;
    this->checkBox170->UseVisualStyleBackColor = true;
    this->checkBox170->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox170Click);
    // 
    // checkBox169
    // 
    this->checkBox169->AutoSize = true;
    this->checkBox169->Location = System::Drawing::Point(326, 318);
    this->checkBox169->Name = L"checkBox169";
    this->checkBox169->Size = System::Drawing::Size(15, 14);
    this->checkBox169->TabIndex = 196;
    this->checkBox169->UseVisualStyleBackColor = true;
    this->checkBox169->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox169Click);
    // 
    // checkBox168
    // 
    this->checkBox168->AutoSize = true;
    this->checkBox168->Location = System::Drawing::Point(284, 318);
    this->checkBox168->Name = L"checkBox168";
    this->checkBox168->Size = System::Drawing::Size(15, 14);
    this->checkBox168->TabIndex = 195;
    this->checkBox168->UseVisualStyleBackColor = true;
    this->checkBox168->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox168Click);
    // 
    // checkBox167
    // 
    this->checkBox167->AutoSize = true;
    this->checkBox167->Location = System::Drawing::Point(245, 318);
    this->checkBox167->Name = L"checkBox167";
    this->checkBox167->Size = System::Drawing::Size(15, 14);
    this->checkBox167->TabIndex = 194;
    this->checkBox167->UseVisualStyleBackColor = true;
    this->checkBox167->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox167Click);
    // 
    // checkBox166
    // 
    this->checkBox166->AutoSize = true;
    this->checkBox166->Location = System::Drawing::Point(205, 318);
    this->checkBox166->Name = L"checkBox166";
    this->checkBox166->Size = System::Drawing::Size(15, 14);
    this->checkBox166->TabIndex = 193;
    this->checkBox166->UseVisualStyleBackColor = true;
    this->checkBox166->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox166Click);
    // 
    // checkBox165
    // 
    this->checkBox165->AutoSize = true;
    this->checkBox165->Location = System::Drawing::Point(167, 318);
    this->checkBox165->Name = L"checkBox165";
    this->checkBox165->Size = System::Drawing::Size(15, 14);
    this->checkBox165->TabIndex = 192;
    this->checkBox165->UseVisualStyleBackColor = true;
    this->checkBox165->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox165Click);
    // 
    // checkBox164
    // 
    this->checkBox164->AutoSize = true;
    this->checkBox164->Location = System::Drawing::Point(127, 318);
    this->checkBox164->Name = L"checkBox164";
    this->checkBox164->Size = System::Drawing::Size(15, 14);
    this->checkBox164->TabIndex = 191;
    this->checkBox164->UseVisualStyleBackColor = true;
    this->checkBox164->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox164Click);
    // 
    // checkBox163
    // 
    this->checkBox163->AutoSize = true;
    this->checkBox163->Location = System::Drawing::Point(89, 318);
    this->checkBox163->Name = L"checkBox163";
    this->checkBox163->Size = System::Drawing::Size(15, 14);
    this->checkBox163->TabIndex = 190;
    this->checkBox163->UseVisualStyleBackColor = true;
    this->checkBox163->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox163Click);
    // 
    // checkBox162
    // 
    this->checkBox162->AutoSize = true;
    this->checkBox162->Location = System::Drawing::Point(54, 318);
    this->checkBox162->Name = L"checkBox162";
    this->checkBox162->Size = System::Drawing::Size(15, 14);
    this->checkBox162->TabIndex = 189;
    this->checkBox162->UseVisualStyleBackColor = true;
    this->checkBox162->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox162Click);
    // 
    // checkBox160
    // 
    this->checkBox160->AutoSize = true;
    this->checkBox160->Location = System::Drawing::Point(708, 285);
    this->checkBox160->Name = L"checkBox160";
    this->checkBox160->Size = System::Drawing::Size(15, 14);
    this->checkBox160->TabIndex = 187;
    this->checkBox160->UseVisualStyleBackColor = true;
    this->checkBox160->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox160Click);
    // 
    // checkBox159
    // 
    this->checkBox159->AutoSize = true;
    this->checkBox159->Location = System::Drawing::Point(668, 286);
    this->checkBox159->Name = L"checkBox159";
    this->checkBox159->Size = System::Drawing::Size(15, 14);
    this->checkBox159->TabIndex = 186;
    this->checkBox159->UseVisualStyleBackColor = true;
    this->checkBox159->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox159Click);
    // 
    // checkBox158
    // 
    this->checkBox158->AutoSize = true;
    this->checkBox158->Location = System::Drawing::Point(625, 285);
    this->checkBox158->Name = L"checkBox158";
    this->checkBox158->Size = System::Drawing::Size(15, 14);
    this->checkBox158->TabIndex = 185;
    this->checkBox158->UseVisualStyleBackColor = true;
    this->checkBox158->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox158Click);
    // 
    // checkBox157
    // 
    this->checkBox157->AutoSize = true;
    this->checkBox157->Location = System::Drawing::Point(584, 285);
    this->checkBox157->Name = L"checkBox157";
    this->checkBox157->Size = System::Drawing::Size(15, 14);
    this->checkBox157->TabIndex = 184;
    this->checkBox157->UseVisualStyleBackColor = true;
    this->checkBox157->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox157Click);
    // 
    // checkBox156
    // 
    this->checkBox156->AutoSize = true;
    this->checkBox156->Location = System::Drawing::Point(538, 285);
    this->checkBox156->Name = L"checkBox156";
    this->checkBox156->Size = System::Drawing::Size(15, 14);
    this->checkBox156->TabIndex = 183;
    this->checkBox156->UseVisualStyleBackColor = true;
    this->checkBox156->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox156Click);
    // 
    // checkBox155
    // 
    this->checkBox155->AutoSize = true;
    this->checkBox155->Location = System::Drawing::Point(492, 285);
    this->checkBox155->Name = L"checkBox155";
    this->checkBox155->Size = System::Drawing::Size(15, 14);
    this->checkBox155->TabIndex = 182;
    this->checkBox155->UseVisualStyleBackColor = true;
    this->checkBox155->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox155Click);
    // 
    // checkBox154
    // 
    this->checkBox154->AutoSize = true;
    this->checkBox154->Location = System::Drawing::Point(449, 285);
    this->checkBox154->Name = L"checkBox154";
    this->checkBox154->Size = System::Drawing::Size(15, 14);
    this->checkBox154->TabIndex = 181;
    this->checkBox154->UseVisualStyleBackColor = true;
    this->checkBox154->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox154Click);
    // 
    // checkBox153
    // 
    this->checkBox153->AutoSize = true;
    this->checkBox153->Location = System::Drawing::Point(405, 285);
    this->checkBox153->Name = L"checkBox153";
    this->checkBox153->Size = System::Drawing::Size(15, 14);
    this->checkBox153->TabIndex = 180;
    this->checkBox153->UseVisualStyleBackColor = true;
    this->checkBox153->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox153Click);
    // 
    // checkBox152
    // 
    this->checkBox152->AutoSize = true;
    this->checkBox152->Location = System::Drawing::Point(365, 285);
    this->checkBox152->Name = L"checkBox152";
    this->checkBox152->Size = System::Drawing::Size(15, 14);
    this->checkBox152->TabIndex = 179;
    this->checkBox152->UseVisualStyleBackColor = true;
    this->checkBox152->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox152Click);
    // 
    // checkBox151
    // 
    this->checkBox151->AutoSize = true;
    this->checkBox151->Location = System::Drawing::Point(326, 285);
    this->checkBox151->Name = L"checkBox151";
    this->checkBox151->Size = System::Drawing::Size(15, 14);
    this->checkBox151->TabIndex = 178;
    this->checkBox151->UseVisualStyleBackColor = true;
    this->checkBox151->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox151Click);
    // 
    // checkBox150
    // 
    this->checkBox150->AutoSize = true;
    this->checkBox150->Location = System::Drawing::Point(284, 285);
    this->checkBox150->Name = L"checkBox150";
    this->checkBox150->Size = System::Drawing::Size(15, 14);
    this->checkBox150->TabIndex = 177;
    this->checkBox150->UseVisualStyleBackColor = true;
    this->checkBox150->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox150Click);
    // 
    // checkBox149
    // 
    this->checkBox149->AutoSize = true;
    this->checkBox149->Location = System::Drawing::Point(245, 285);
    this->checkBox149->Name = L"checkBox149";
    this->checkBox149->Size = System::Drawing::Size(15, 14);
    this->checkBox149->TabIndex = 176;
    this->checkBox149->UseVisualStyleBackColor = true;
    this->checkBox149->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox149Click);
    // 
    // checkBox148
    // 
    this->checkBox148->AutoSize = true;
    this->checkBox148->Location = System::Drawing::Point(205, 285);
    this->checkBox148->Name = L"checkBox148";
    this->checkBox148->Size = System::Drawing::Size(15, 14);
    this->checkBox148->TabIndex = 175;
    this->checkBox148->UseVisualStyleBackColor = true;
    this->checkBox148->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox148Click);
    // 
    // checkBox147
    // 
    this->checkBox147->AutoSize = true;
    this->checkBox147->Location = System::Drawing::Point(167, 286);
    this->checkBox147->Name = L"checkBox147";
    this->checkBox147->Size = System::Drawing::Size(15, 14);
    this->checkBox147->TabIndex = 174;
    this->checkBox147->UseVisualStyleBackColor = true;
    this->checkBox147->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox147Click);
    // 
    // checkBox146
    // 
    this->checkBox146->AutoSize = true;
    this->checkBox146->Location = System::Drawing::Point(127, 285);
    this->checkBox146->Name = L"checkBox146";
    this->checkBox146->Size = System::Drawing::Size(15, 14);
    this->checkBox146->TabIndex = 173;
    this->checkBox146->UseVisualStyleBackColor = true;
    this->checkBox146->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox146Click);
    // 
    // checkBox145
    // 
    this->checkBox145->AutoSize = true;
    this->checkBox145->Location = System::Drawing::Point(89, 285);
    this->checkBox145->Name = L"checkBox145";
    this->checkBox145->Size = System::Drawing::Size(15, 14);
    this->checkBox145->TabIndex = 172;
    this->checkBox145->UseVisualStyleBackColor = true;
    this->checkBox145->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox145Click);
    // 
    // checkBox144
    // 
    this->checkBox144->AutoSize = true;
    this->checkBox144->Location = System::Drawing::Point(54, 285);
    this->checkBox144->Name = L"checkBox144";
    this->checkBox144->Size = System::Drawing::Size(15, 14);
    this->checkBox144->TabIndex = 171;
    this->checkBox144->UseVisualStyleBackColor = true;
    this->checkBox144->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox144Click);
    // 
    // checkBox143
    // 
    this->checkBox143->AutoSize = true;
    this->checkBox143->Location = System::Drawing::Point(752, 253);
    this->checkBox143->Name = L"checkBox143";
    this->checkBox143->Size = System::Drawing::Size(15, 14);
    this->checkBox143->TabIndex = 170;
    this->checkBox143->UseVisualStyleBackColor = true;
    this->checkBox143->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox143Click);
    // 
    // checkBox142
    // 
    this->checkBox142->AutoSize = true;
    this->checkBox142->Location = System::Drawing::Point(709, 254);
    this->checkBox142->Name = L"checkBox142";
    this->checkBox142->Size = System::Drawing::Size(15, 14);
    this->checkBox142->TabIndex = 169;
    this->checkBox142->UseVisualStyleBackColor = true;
    this->checkBox142->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox142Click);
    // 
    // checkBox141
    // 
    this->checkBox141->AutoSize = true;
    this->checkBox141->Location = System::Drawing::Point(667, 254);
    this->checkBox141->Name = L"checkBox141";
    this->checkBox141->Size = System::Drawing::Size(15, 14);
    this->checkBox141->TabIndex = 168;
    this->checkBox141->UseVisualStyleBackColor = true;
    // 
    // checkBox140
    // 
    this->checkBox140->AutoSize = true;
    this->checkBox140->Location = System::Drawing::Point(623, 254);
    this->checkBox140->Name = L"checkBox140";
    this->checkBox140->Size = System::Drawing::Size(15, 14);
    this->checkBox140->TabIndex = 167;
    this->checkBox140->UseVisualStyleBackColor = true;
    // 
    // checkBox139
    // 
    this->checkBox139->AutoSize = true;
    this->checkBox139->Location = System::Drawing::Point(585, 253);
    this->checkBox139->Name = L"checkBox139";
    this->checkBox139->Size = System::Drawing::Size(15, 14);
    this->checkBox139->TabIndex = 166;
    this->checkBox139->UseVisualStyleBackColor = true;
    // 
    // checkBox138
    // 
    this->checkBox138->AutoSize = true;
    this->checkBox138->Location = System::Drawing::Point(539, 254);
    this->checkBox138->Name = L"checkBox138";
    this->checkBox138->Size = System::Drawing::Size(15, 14);
    this->checkBox138->TabIndex = 165;
    this->checkBox138->UseVisualStyleBackColor = true;
    // 
    // checkBox137
    // 
    this->checkBox137->AutoSize = true;
    this->checkBox137->Location = System::Drawing::Point(493, 254);
    this->checkBox137->Name = L"checkBox137";
    this->checkBox137->Size = System::Drawing::Size(15, 14);
    this->checkBox137->TabIndex = 164;
    this->checkBox137->UseVisualStyleBackColor = true;
    // 
    // checkBox136
    // 
    this->checkBox136->AutoSize = true;
    this->checkBox136->Location = System::Drawing::Point(449, 254);
    this->checkBox136->Name = L"checkBox136";
    this->checkBox136->Size = System::Drawing::Size(15, 14);
    this->checkBox136->TabIndex = 163;
    this->checkBox136->UseVisualStyleBackColor = true;
    // 
    // checkBox135
    // 
    this->checkBox135->AutoSize = true;
    this->checkBox135->Location = System::Drawing::Point(405, 253);
    this->checkBox135->Name = L"checkBox135";
    this->checkBox135->Size = System::Drawing::Size(15, 14);
    this->checkBox135->TabIndex = 162;
    this->checkBox135->UseVisualStyleBackColor = true;
    // 
    // checkBox134
    // 
    this->checkBox134->AutoSize = true;
    this->checkBox134->Location = System::Drawing::Point(365, 254);
    this->checkBox134->Name = L"checkBox134";
    this->checkBox134->Size = System::Drawing::Size(15, 14);
    this->checkBox134->TabIndex = 161;
    this->checkBox134->UseVisualStyleBackColor = true;
    // 
    // checkBox133
    // 
    this->checkBox133->AutoSize = true;
    this->checkBox133->Location = System::Drawing::Point(326, 254);
    this->checkBox133->Name = L"checkBox133";
    this->checkBox133->Size = System::Drawing::Size(15, 14);
    this->checkBox133->TabIndex = 160;
    this->checkBox133->UseVisualStyleBackColor = true;
    // 
    // checkBox132
    // 
    this->checkBox132->AutoSize = true;
    this->checkBox132->Location = System::Drawing::Point(284, 254);
    this->checkBox132->Name = L"checkBox132";
    this->checkBox132->Size = System::Drawing::Size(15, 14);
    this->checkBox132->TabIndex = 159;
    this->checkBox132->UseVisualStyleBackColor = true;
    // 
    // checkBox131
    // 
    this->checkBox131->AutoSize = true;
    this->checkBox131->Location = System::Drawing::Point(245, 253);
    this->checkBox131->Name = L"checkBox131";
    this->checkBox131->Size = System::Drawing::Size(15, 14);
    this->checkBox131->TabIndex = 158;
    this->checkBox131->UseVisualStyleBackColor = true;
    // 
    // checkBox130
    // 
    this->checkBox130->AutoSize = true;
    this->checkBox130->Location = System::Drawing::Point(205, 254);
    this->checkBox130->Name = L"checkBox130";
    this->checkBox130->Size = System::Drawing::Size(15, 14);
    this->checkBox130->TabIndex = 157;
    this->checkBox130->UseVisualStyleBackColor = true;
    // 
    // checkBox129
    // 
    this->checkBox129->AutoSize = true;
    this->checkBox129->Location = System::Drawing::Point(167, 254);
    this->checkBox129->Name = L"checkBox129";
    this->checkBox129->Size = System::Drawing::Size(15, 14);
    this->checkBox129->TabIndex = 156;
    this->checkBox129->UseVisualStyleBackColor = true;
    // 
    // checkBox128
    // 
    this->checkBox128->AutoSize = true;
    this->checkBox128->Location = System::Drawing::Point(127, 254);
    this->checkBox128->Name = L"checkBox128";
    this->checkBox128->Size = System::Drawing::Size(15, 14);
    this->checkBox128->TabIndex = 155;
    this->checkBox128->UseVisualStyleBackColor = true;
    // 
    // checkBox127
    // 
    this->checkBox127->AutoSize = true;
    this->checkBox127->Location = System::Drawing::Point(89, 254);
    this->checkBox127->Name = L"checkBox127";
    this->checkBox127->Size = System::Drawing::Size(15, 14);
    this->checkBox127->TabIndex = 154;
    this->checkBox127->UseVisualStyleBackColor = true;
    // 
    // checkBox126
    // 
    this->checkBox126->AutoSize = true;
    this->checkBox126->Location = System::Drawing::Point(54, 254);
    this->checkBox126->Name = L"checkBox126";
    this->checkBox126->Size = System::Drawing::Size(15, 14);
    this->checkBox126->TabIndex = 153;
    this->checkBox126->UseVisualStyleBackColor = true;
    // 
    // checkBox125
    // 
    this->checkBox125->AutoSize = true;
    this->checkBox125->Location = System::Drawing::Point(752, 220);
    this->checkBox125->Name = L"checkBox125";
    this->checkBox125->Size = System::Drawing::Size(15, 14);
    this->checkBox125->TabIndex = 152;
    this->checkBox125->UseVisualStyleBackColor = true;
    this->checkBox125->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox125Click);
    // 
    // checkBox124
    // 
    this->checkBox124->AutoSize = true;
    this->checkBox124->Location = System::Drawing::Point(709, 219);
    this->checkBox124->Name = L"checkBox124";
    this->checkBox124->Size = System::Drawing::Size(15, 14);
    this->checkBox124->TabIndex = 151;
    this->checkBox124->UseVisualStyleBackColor = true;
    this->checkBox124->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox124Click);
    // 
    // checkBox123
    // 
    this->checkBox123->AutoSize = true;
    this->checkBox123->Location = System::Drawing::Point(667, 219);
    this->checkBox123->Name = L"checkBox123";
    this->checkBox123->Size = System::Drawing::Size(15, 14);
    this->checkBox123->TabIndex = 150;
    this->checkBox123->UseVisualStyleBackColor = true;
    // 
    // checkBox122
    // 
    this->checkBox122->AutoSize = true;
    this->checkBox122->Location = System::Drawing::Point(623, 219);
    this->checkBox122->Name = L"checkBox122";
    this->checkBox122->Size = System::Drawing::Size(15, 14);
    this->checkBox122->TabIndex = 149;
    this->checkBox122->UseVisualStyleBackColor = true;
    // 
    // checkBox121
    // 
    this->checkBox121->AutoSize = true;
    this->checkBox121->Location = System::Drawing::Point(584, 219);
    this->checkBox121->Name = L"checkBox121";
    this->checkBox121->Size = System::Drawing::Size(15, 14);
    this->checkBox121->TabIndex = 148;
    this->checkBox121->UseVisualStyleBackColor = true;
    // 
    // checkBox120
    // 
    this->checkBox120->AutoSize = true;
    this->checkBox120->Location = System::Drawing::Point(539, 219);
    this->checkBox120->Name = L"checkBox120";
    this->checkBox120->Size = System::Drawing::Size(15, 14);
    this->checkBox120->TabIndex = 147;
    this->checkBox120->UseVisualStyleBackColor = true;
    // 
    // checkBox119
    // 
    this->checkBox119->AutoSize = true;
    this->checkBox119->Location = System::Drawing::Point(492, 219);
    this->checkBox119->Name = L"checkBox119";
    this->checkBox119->Size = System::Drawing::Size(15, 14);
    this->checkBox119->TabIndex = 146;
    this->checkBox119->UseVisualStyleBackColor = true;
    // 
    // checkBox118
    // 
    this->checkBox118->AutoSize = true;
    this->checkBox118->Location = System::Drawing::Point(449, 219);
    this->checkBox118->Name = L"checkBox118";
    this->checkBox118->Size = System::Drawing::Size(15, 14);
    this->checkBox118->TabIndex = 145;
    this->checkBox118->UseVisualStyleBackColor = true;
    // 
    // checkBox117
    // 
    this->checkBox117->AutoSize = true;
    this->checkBox117->Location = System::Drawing::Point(405, 219);
    this->checkBox117->Name = L"checkBox117";
    this->checkBox117->Size = System::Drawing::Size(15, 14);
    this->checkBox117->TabIndex = 144;
    this->checkBox117->UseVisualStyleBackColor = true;
    // 
    // checkBox116
    // 
    this->checkBox116->AutoSize = true;
    this->checkBox116->Location = System::Drawing::Point(365, 219);
    this->checkBox116->Name = L"checkBox116";
    this->checkBox116->Size = System::Drawing::Size(15, 14);
    this->checkBox116->TabIndex = 143;
    this->checkBox116->UseVisualStyleBackColor = true;
    // 
    // checkBox115
    // 
    this->checkBox115->AutoSize = true;
    this->checkBox115->Location = System::Drawing::Point(326, 219);
    this->checkBox115->Name = L"checkBox115";
    this->checkBox115->Size = System::Drawing::Size(15, 14);
    this->checkBox115->TabIndex = 142;
    this->checkBox115->UseVisualStyleBackColor = true;
    // 
    // checkBox114
    // 
    this->checkBox114->AutoSize = true;
    this->checkBox114->Location = System::Drawing::Point(284, 219);
    this->checkBox114->Name = L"checkBox114";
    this->checkBox114->Size = System::Drawing::Size(15, 14);
    this->checkBox114->TabIndex = 141;
    this->checkBox114->UseVisualStyleBackColor = true;
    // 
    // checkBox113
    // 
    this->checkBox113->AutoSize = true;
    this->checkBox113->Location = System::Drawing::Point(245, 219);
    this->checkBox113->Name = L"checkBox113";
    this->checkBox113->Size = System::Drawing::Size(15, 14);
    this->checkBox113->TabIndex = 140;
    this->checkBox113->UseVisualStyleBackColor = true;
    // 
    // checkBox112
    // 
    this->checkBox112->AutoSize = true;
    this->checkBox112->Location = System::Drawing::Point(205, 219);
    this->checkBox112->Name = L"checkBox112";
    this->checkBox112->Size = System::Drawing::Size(15, 14);
    this->checkBox112->TabIndex = 139;
    this->checkBox112->UseVisualStyleBackColor = true;
    // 
    // checkBox111
    // 
    this->checkBox111->AutoSize = true;
    this->checkBox111->Location = System::Drawing::Point(167, 219);
    this->checkBox111->Name = L"checkBox111";
    this->checkBox111->Size = System::Drawing::Size(15, 14);
    this->checkBox111->TabIndex = 138;
    this->checkBox111->UseVisualStyleBackColor = true;
    // 
    // checkBox110
    // 
    this->checkBox110->AutoSize = true;
    this->checkBox110->Location = System::Drawing::Point(127, 219);
    this->checkBox110->Name = L"checkBox110";
    this->checkBox110->Size = System::Drawing::Size(15, 14);
    this->checkBox110->TabIndex = 137;
    this->checkBox110->UseVisualStyleBackColor = true;
    // 
    // checkBox109
    // 
    this->checkBox109->AutoSize = true;
    this->checkBox109->Location = System::Drawing::Point(89, 219);
    this->checkBox109->Name = L"checkBox109";
    this->checkBox109->Size = System::Drawing::Size(15, 14);
    this->checkBox109->TabIndex = 136;
    this->checkBox109->UseVisualStyleBackColor = true;
    // 
    // checkBox108
    // 
    this->checkBox108->AutoSize = true;
    this->checkBox108->Location = System::Drawing::Point(54, 219);
    this->checkBox108->Name = L"checkBox108";
    this->checkBox108->Size = System::Drawing::Size(15, 14);
    this->checkBox108->TabIndex = 135;
    this->checkBox108->UseVisualStyleBackColor = true;
    // 
    // checkBox107
    // 
    this->checkBox107->AutoSize = true;
    this->checkBox107->Location = System::Drawing::Point(752, 184);
    this->checkBox107->Name = L"checkBox107";
    this->checkBox107->Size = System::Drawing::Size(15, 14);
    this->checkBox107->TabIndex = 134;
    this->checkBox107->UseVisualStyleBackColor = true;
    this->checkBox107->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox107Click);
    // 
    // checkBox106
    // 
    this->checkBox106->AutoSize = true;
    this->checkBox106->Location = System::Drawing::Point(708, 184);
    this->checkBox106->Name = L"checkBox106";
    this->checkBox106->Size = System::Drawing::Size(15, 14);
    this->checkBox106->TabIndex = 133;
    this->checkBox106->UseVisualStyleBackColor = true;
    this->checkBox106->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox106Click);
    // 
    // checkBox105
    // 
    this->checkBox105->AutoSize = true;
    this->checkBox105->Location = System::Drawing::Point(667, 184);
    this->checkBox105->Name = L"checkBox105";
    this->checkBox105->Size = System::Drawing::Size(15, 14);
    this->checkBox105->TabIndex = 132;
    this->checkBox105->UseVisualStyleBackColor = true;
    // 
    // checkBox104
    // 
    this->checkBox104->AutoSize = true;
    this->checkBox104->Location = System::Drawing::Point(623, 184);
    this->checkBox104->Name = L"checkBox104";
    this->checkBox104->Size = System::Drawing::Size(15, 14);
    this->checkBox104->TabIndex = 131;
    this->checkBox104->UseVisualStyleBackColor = true;
    // 
    // checkBox103
    // 
    this->checkBox103->AutoSize = true;
    this->checkBox103->Location = System::Drawing::Point(584, 184);
    this->checkBox103->Name = L"checkBox103";
    this->checkBox103->Size = System::Drawing::Size(15, 14);
    this->checkBox103->TabIndex = 130;
    this->checkBox103->UseVisualStyleBackColor = true;
    // 
    // checkBox102
    // 
    this->checkBox102->AutoSize = true;
    this->checkBox102->Location = System::Drawing::Point(538, 184);
    this->checkBox102->Name = L"checkBox102";
    this->checkBox102->Size = System::Drawing::Size(15, 14);
    this->checkBox102->TabIndex = 129;
    this->checkBox102->UseVisualStyleBackColor = true;
    // 
    // checkBox101
    // 
    this->checkBox101->AutoSize = true;
    this->checkBox101->Location = System::Drawing::Point(492, 184);
    this->checkBox101->Name = L"checkBox101";
    this->checkBox101->Size = System::Drawing::Size(15, 14);
    this->checkBox101->TabIndex = 128;
    this->checkBox101->UseVisualStyleBackColor = true;
    // 
    // checkBox100
    // 
    this->checkBox100->AutoSize = true;
    this->checkBox100->Location = System::Drawing::Point(449, 184);
    this->checkBox100->Name = L"checkBox100";
    this->checkBox100->Size = System::Drawing::Size(15, 14);
    this->checkBox100->TabIndex = 127;
    this->checkBox100->UseVisualStyleBackColor = true;
    // 
    // checkBox99
    // 
    this->checkBox99->AutoSize = true;
    this->checkBox99->Location = System::Drawing::Point(405, 184);
    this->checkBox99->Name = L"checkBox99";
    this->checkBox99->Size = System::Drawing::Size(15, 14);
    this->checkBox99->TabIndex = 126;
    this->checkBox99->UseVisualStyleBackColor = true;
    // 
    // checkBox98
    // 
    this->checkBox98->AutoSize = true;
    this->checkBox98->Location = System::Drawing::Point(365, 184);
    this->checkBox98->Name = L"checkBox98";
    this->checkBox98->Size = System::Drawing::Size(15, 14);
    this->checkBox98->TabIndex = 125;
    this->checkBox98->UseVisualStyleBackColor = true;
    // 
    // checkBox97
    // 
    this->checkBox97->AutoSize = true;
    this->checkBox97->Location = System::Drawing::Point(326, 184);
    this->checkBox97->Name = L"checkBox97";
    this->checkBox97->Size = System::Drawing::Size(15, 14);
    this->checkBox97->TabIndex = 124;
    this->checkBox97->UseVisualStyleBackColor = true;
    // 
    // checkBox96
    // 
    this->checkBox96->AutoSize = true;
    this->checkBox96->Location = System::Drawing::Point(284, 184);
    this->checkBox96->Name = L"checkBox96";
    this->checkBox96->Size = System::Drawing::Size(15, 14);
    this->checkBox96->TabIndex = 123;
    this->checkBox96->UseVisualStyleBackColor = true;
    // 
    // checkBox95
    // 
    this->checkBox95->AutoSize = true;
    this->checkBox95->Location = System::Drawing::Point(247, 184);
    this->checkBox95->Name = L"checkBox95";
    this->checkBox95->Size = System::Drawing::Size(15, 14);
    this->checkBox95->TabIndex = 122;
    this->checkBox95->UseVisualStyleBackColor = true;
    // 
    // checkBox94
    // 
    this->checkBox94->AutoSize = true;
    this->checkBox94->Location = System::Drawing::Point(205, 184);
    this->checkBox94->Name = L"checkBox94";
    this->checkBox94->Size = System::Drawing::Size(15, 14);
    this->checkBox94->TabIndex = 121;
    this->checkBox94->UseVisualStyleBackColor = true;
    // 
    // checkBox93
    // 
    this->checkBox93->AutoSize = true;
    this->checkBox93->Location = System::Drawing::Point(167, 184);
    this->checkBox93->Name = L"checkBox93";
    this->checkBox93->Size = System::Drawing::Size(15, 14);
    this->checkBox93->TabIndex = 120;
    this->checkBox93->UseVisualStyleBackColor = true;
    // 
    // checkBox92
    // 
    this->checkBox92->AutoSize = true;
    this->checkBox92->Location = System::Drawing::Point(127, 184);
    this->checkBox92->Name = L"checkBox92";
    this->checkBox92->Size = System::Drawing::Size(15, 14);
    this->checkBox92->TabIndex = 119;
    this->checkBox92->UseVisualStyleBackColor = true;
    // 
    // checkBox91
    // 
    this->checkBox91->AutoSize = true;
    this->checkBox91->Location = System::Drawing::Point(89, 185);
    this->checkBox91->Name = L"checkBox91";
    this->checkBox91->Size = System::Drawing::Size(15, 14);
    this->checkBox91->TabIndex = 118;
    this->checkBox91->UseVisualStyleBackColor = true;
    // 
    // checkBox90
    // 
    this->checkBox90->AutoSize = true;
    this->checkBox90->Location = System::Drawing::Point(54, 184);
    this->checkBox90->Name = L"checkBox90";
    this->checkBox90->Size = System::Drawing::Size(15, 14);
    this->checkBox90->TabIndex = 117;
    this->checkBox90->UseVisualStyleBackColor = true;
    // 
    // checkBox89
    // 
    this->checkBox89->AutoSize = true;
    this->checkBox89->Location = System::Drawing::Point(752, 151);
    this->checkBox89->Name = L"checkBox89";
    this->checkBox89->Size = System::Drawing::Size(15, 14);
    this->checkBox89->TabIndex = 116;
    this->checkBox89->UseVisualStyleBackColor = true;
    this->checkBox89->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox89Click);
    // 
    // checkBox88
    // 
    this->checkBox88->AutoSize = true;
    this->checkBox88->Location = System::Drawing::Point(708, 152);
    this->checkBox88->Name = L"checkBox88";
    this->checkBox88->Size = System::Drawing::Size(15, 14);
    this->checkBox88->TabIndex = 115;
    this->checkBox88->UseVisualStyleBackColor = true;
    this->checkBox88->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox88Click);
    // 
    // checkBox87
    // 
    this->checkBox87->AutoSize = true;
    this->checkBox87->Location = System::Drawing::Point(667, 153);
    this->checkBox87->Name = L"checkBox87";
    this->checkBox87->Size = System::Drawing::Size(15, 14);
    this->checkBox87->TabIndex = 114;
    this->checkBox87->UseVisualStyleBackColor = true;
    // 
    // checkBox86
    // 
    this->checkBox86->AutoSize = true;
    this->checkBox86->Location = System::Drawing::Point(623, 152);
    this->checkBox86->Name = L"checkBox86";
    this->checkBox86->Size = System::Drawing::Size(15, 14);
    this->checkBox86->TabIndex = 113;
    this->checkBox86->UseVisualStyleBackColor = true;
    // 
    // checkBox85
    // 
    this->checkBox85->AutoSize = true;
    this->checkBox85->Location = System::Drawing::Point(584, 153);
    this->checkBox85->Name = L"checkBox85";
    this->checkBox85->Size = System::Drawing::Size(15, 14);
    this->checkBox85->TabIndex = 112;
    this->checkBox85->UseVisualStyleBackColor = true;
    // 
    // checkBox84
    // 
    this->checkBox84->AutoSize = true;
    this->checkBox84->Location = System::Drawing::Point(538, 153);
    this->checkBox84->Name = L"checkBox84";
    this->checkBox84->Size = System::Drawing::Size(15, 14);
    this->checkBox84->TabIndex = 111;
    this->checkBox84->UseVisualStyleBackColor = true;
    // 
    // checkBox83
    // 
    this->checkBox83->AutoSize = true;
    this->checkBox83->Location = System::Drawing::Point(492, 151);
    this->checkBox83->Name = L"checkBox83";
    this->checkBox83->Size = System::Drawing::Size(15, 14);
    this->checkBox83->TabIndex = 110;
    this->checkBox83->UseVisualStyleBackColor = true;
    // 
    // checkBox82
    // 
    this->checkBox82->AutoSize = true;
    this->checkBox82->Location = System::Drawing::Point(449, 151);
    this->checkBox82->Name = L"checkBox82";
    this->checkBox82->Size = System::Drawing::Size(15, 14);
    this->checkBox82->TabIndex = 109;
    this->checkBox82->UseVisualStyleBackColor = true;
    // 
    // checkBox81
    // 
    this->checkBox81->AutoSize = true;
    this->checkBox81->Location = System::Drawing::Point(405, 153);
    this->checkBox81->Name = L"checkBox81";
    this->checkBox81->Size = System::Drawing::Size(15, 14);
    this->checkBox81->TabIndex = 108;
    this->checkBox81->UseVisualStyleBackColor = true;
    // 
    // checkBox80
    // 
    this->checkBox80->AutoSize = true;
    this->checkBox80->Location = System::Drawing::Point(365, 152);
    this->checkBox80->Name = L"checkBox80";
    this->checkBox80->Size = System::Drawing::Size(15, 14);
    this->checkBox80->TabIndex = 107;
    this->checkBox80->UseVisualStyleBackColor = true;
    // 
    // checkBox79
    // 
    this->checkBox79->AutoSize = true;
    this->checkBox79->Location = System::Drawing::Point(326, 151);
    this->checkBox79->Name = L"checkBox79";
    this->checkBox79->Size = System::Drawing::Size(15, 14);
    this->checkBox79->TabIndex = 106;
    this->checkBox79->UseVisualStyleBackColor = true;
    // 
    // checkBox78
    // 
    this->checkBox78->AutoSize = true;
    this->checkBox78->Location = System::Drawing::Point(284, 153);
    this->checkBox78->Name = L"checkBox78";
    this->checkBox78->Size = System::Drawing::Size(15, 14);
    this->checkBox78->TabIndex = 105;
    this->checkBox78->UseVisualStyleBackColor = true;
    // 
    // checkBox77
    // 
    this->checkBox77->AutoSize = true;
    this->checkBox77->Location = System::Drawing::Point(245, 153);
    this->checkBox77->Name = L"checkBox77";
    this->checkBox77->Size = System::Drawing::Size(15, 14);
    this->checkBox77->TabIndex = 104;
    this->checkBox77->UseVisualStyleBackColor = true;
    // 
    // checkBox76
    // 
    this->checkBox76->AutoSize = true;
    this->checkBox76->Location = System::Drawing::Point(205, 152);
    this->checkBox76->Name = L"checkBox76";
    this->checkBox76->Size = System::Drawing::Size(15, 14);
    this->checkBox76->TabIndex = 103;
    this->checkBox76->UseVisualStyleBackColor = true;
    // 
    // checkBox75
    // 
    this->checkBox75->AutoSize = true;
    this->checkBox75->Location = System::Drawing::Point(167, 153);
    this->checkBox75->Name = L"checkBox75";
    this->checkBox75->Size = System::Drawing::Size(15, 14);
    this->checkBox75->TabIndex = 102;
    this->checkBox75->UseVisualStyleBackColor = true;
    // 
    // checkBox74
    // 
    this->checkBox74->AutoSize = true;
    this->checkBox74->Location = System::Drawing::Point(127, 153);
    this->checkBox74->Name = L"checkBox74";
    this->checkBox74->Size = System::Drawing::Size(15, 14);
    this->checkBox74->TabIndex = 101;
    this->checkBox74->UseVisualStyleBackColor = true;
    // 
    // checkBox73
    // 
    this->checkBox73->AutoSize = true;
    this->checkBox73->Location = System::Drawing::Point(89, 153);
    this->checkBox73->Name = L"checkBox73";
    this->checkBox73->Size = System::Drawing::Size(15, 14);
    this->checkBox73->TabIndex = 100;
    this->checkBox73->UseVisualStyleBackColor = true;
    // 
    // checkBox72
    // 
    this->checkBox72->AutoSize = true;
    this->checkBox72->Location = System::Drawing::Point(54, 153);
    this->checkBox72->Name = L"checkBox72";
    this->checkBox72->Size = System::Drawing::Size(15, 14);
    this->checkBox72->TabIndex = 99;
    this->checkBox72->UseVisualStyleBackColor = true;
    // 
    // checkBox71
    // 
    this->checkBox71->AutoSize = true;
    this->checkBox71->Location = System::Drawing::Point(752, 122);
    this->checkBox71->Name = L"checkBox71";
    this->checkBox71->Size = System::Drawing::Size(15, 14);
    this->checkBox71->TabIndex = 98;
    this->checkBox71->UseVisualStyleBackColor = true;
    this->checkBox71->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox71Click);
    // 
    // checkBox70
    // 
    this->checkBox70->AutoSize = true;
    this->checkBox70->Location = System::Drawing::Point(708, 122);
    this->checkBox70->Name = L"checkBox70";
    this->checkBox70->Size = System::Drawing::Size(15, 14);
    this->checkBox70->TabIndex = 97;
    this->checkBox70->UseVisualStyleBackColor = true;
    this->checkBox70->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox70Click);
    // 
    // checkBox69
    // 
    this->checkBox69->AutoSize = true;
    this->checkBox69->Location = System::Drawing::Point(667, 123);
    this->checkBox69->Name = L"checkBox69";
    this->checkBox69->Size = System::Drawing::Size(15, 14);
    this->checkBox69->TabIndex = 96;
    this->checkBox69->UseVisualStyleBackColor = true;
    // 
    // checkBox68
    // 
    this->checkBox68->AutoSize = true;
    this->checkBox68->Location = System::Drawing::Point(623, 122);
    this->checkBox68->Name = L"checkBox68";
    this->checkBox68->Size = System::Drawing::Size(15, 14);
    this->checkBox68->TabIndex = 95;
    this->checkBox68->UseVisualStyleBackColor = true;
    // 
    // checkBox67
    // 
    this->checkBox67->AutoSize = true;
    this->checkBox67->Location = System::Drawing::Point(584, 123);
    this->checkBox67->Name = L"checkBox67";
    this->checkBox67->Size = System::Drawing::Size(15, 14);
    this->checkBox67->TabIndex = 94;
    this->checkBox67->UseVisualStyleBackColor = true;
    // 
    // checkBox66
    // 
    this->checkBox66->AutoSize = true;
    this->checkBox66->Location = System::Drawing::Point(538, 122);
    this->checkBox66->Name = L"checkBox66";
    this->checkBox66->Size = System::Drawing::Size(15, 14);
    this->checkBox66->TabIndex = 93;
    this->checkBox66->UseVisualStyleBackColor = true;
    // 
    // checkBox65
    // 
    this->checkBox65->AutoSize = true;
    this->checkBox65->Location = System::Drawing::Point(492, 122);
    this->checkBox65->Name = L"checkBox65";
    this->checkBox65->Size = System::Drawing::Size(15, 14);
    this->checkBox65->TabIndex = 92;
    this->checkBox65->UseVisualStyleBackColor = true;
    // 
    // checkBox64
    // 
    this->checkBox64->AutoSize = true;
    this->checkBox64->Location = System::Drawing::Point(449, 122);
    this->checkBox64->Name = L"checkBox64";
    this->checkBox64->Size = System::Drawing::Size(15, 14);
    this->checkBox64->TabIndex = 91;
    this->checkBox64->UseVisualStyleBackColor = true;
    // 
    // checkBox63
    // 
    this->checkBox63->AutoSize = true;
    this->checkBox63->Location = System::Drawing::Point(405, 123);
    this->checkBox63->Name = L"checkBox63";
    this->checkBox63->Size = System::Drawing::Size(15, 14);
    this->checkBox63->TabIndex = 90;
    this->checkBox63->UseVisualStyleBackColor = true;
    // 
    // checkBox62
    // 
    this->checkBox62->AutoSize = true;
    this->checkBox62->Location = System::Drawing::Point(365, 123);
    this->checkBox62->Name = L"checkBox62";
    this->checkBox62->Size = System::Drawing::Size(15, 14);
    this->checkBox62->TabIndex = 89;
    this->checkBox62->UseVisualStyleBackColor = true;
    // 
    // checkBox61
    // 
    this->checkBox61->AutoSize = true;
    this->checkBox61->Location = System::Drawing::Point(326, 123);
    this->checkBox61->Name = L"checkBox61";
    this->checkBox61->Size = System::Drawing::Size(15, 14);
    this->checkBox61->TabIndex = 88;
    this->checkBox61->UseVisualStyleBackColor = true;
    // 
    // checkBox60
    // 
    this->checkBox60->AutoSize = true;
    this->checkBox60->Location = System::Drawing::Point(284, 123);
    this->checkBox60->Name = L"checkBox60";
    this->checkBox60->Size = System::Drawing::Size(15, 14);
    this->checkBox60->TabIndex = 87;
    this->checkBox60->UseVisualStyleBackColor = true;
    // 
    // checkBox59
    // 
    this->checkBox59->AutoSize = true;
    this->checkBox59->Location = System::Drawing::Point(245, 123);
    this->checkBox59->Name = L"checkBox59";
    this->checkBox59->Size = System::Drawing::Size(15, 14);
    this->checkBox59->TabIndex = 86;
    this->checkBox59->UseVisualStyleBackColor = true;
    // 
    // checkBox58
    // 
    this->checkBox58->AutoSize = true;
    this->checkBox58->Location = System::Drawing::Point(205, 123);
    this->checkBox58->Name = L"checkBox58";
    this->checkBox58->Size = System::Drawing::Size(15, 14);
    this->checkBox58->TabIndex = 85;
    this->checkBox58->UseVisualStyleBackColor = true;
    // 
    // checkBox57
    // 
    this->checkBox57->AutoSize = true;
    this->checkBox57->Location = System::Drawing::Point(167, 123);
    this->checkBox57->Name = L"checkBox57";
    this->checkBox57->Size = System::Drawing::Size(15, 14);
    this->checkBox57->TabIndex = 84;
    this->checkBox57->UseVisualStyleBackColor = true;
    // 
    // checkBox56
    // 
    this->checkBox56->AutoSize = true;
    this->checkBox56->Location = System::Drawing::Point(127, 122);
    this->checkBox56->Name = L"checkBox56";
    this->checkBox56->Size = System::Drawing::Size(15, 14);
    this->checkBox56->TabIndex = 83;
    this->checkBox56->UseVisualStyleBackColor = true;
    // 
    // checkBox55
    // 
    this->checkBox55->AutoSize = true;
    this->checkBox55->Location = System::Drawing::Point(89, 123);
    this->checkBox55->Name = L"checkBox55";
    this->checkBox55->Size = System::Drawing::Size(15, 14);
    this->checkBox55->TabIndex = 82;
    this->checkBox55->UseVisualStyleBackColor = true;
    // 
    // checkBox54
    // 
    this->checkBox54->AutoSize = true;
    this->checkBox54->Location = System::Drawing::Point(54, 122);
    this->checkBox54->Name = L"checkBox54";
    this->checkBox54->Size = System::Drawing::Size(15, 14);
    this->checkBox54->TabIndex = 81;
    this->checkBox54->UseVisualStyleBackColor = true;
    // 
    // checkBox53
    // 
    this->checkBox53->AutoSize = true;
    this->checkBox53->Location = System::Drawing::Point(752, 93);
    this->checkBox53->Name = L"checkBox53";
    this->checkBox53->Size = System::Drawing::Size(15, 14);
    this->checkBox53->TabIndex = 80;
    this->checkBox53->UseVisualStyleBackColor = true;
    this->checkBox53->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox53Click);
    // 
    // checkBox52
    // 
    this->checkBox52->AutoSize = true;
    this->checkBox52->Location = System::Drawing::Point(709, 93);
    this->checkBox52->Name = L"checkBox52";
    this->checkBox52->Size = System::Drawing::Size(15, 14);
    this->checkBox52->TabIndex = 79;
    this->checkBox52->UseVisualStyleBackColor = true;
    this->checkBox52->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox52Click);
    // 
    // checkBox51
    // 
    this->checkBox51->AutoSize = true;
    this->checkBox51->Location = System::Drawing::Point(667, 93);
    this->checkBox51->Name = L"checkBox51";
    this->checkBox51->Size = System::Drawing::Size(15, 14);
    this->checkBox51->TabIndex = 78;
    this->checkBox51->UseVisualStyleBackColor = true;
    // 
    // checkBox50
    // 
    this->checkBox50->AutoSize = true;
    this->checkBox50->Location = System::Drawing::Point(623, 93);
    this->checkBox50->Name = L"checkBox50";
    this->checkBox50->Size = System::Drawing::Size(15, 14);
    this->checkBox50->TabIndex = 77;
    this->checkBox50->UseVisualStyleBackColor = true;
    // 
    // checkBox49
    // 
    this->checkBox49->AutoSize = true;
    this->checkBox49->Location = System::Drawing::Point(585, 93);
    this->checkBox49->Name = L"checkBox49";
    this->checkBox49->Size = System::Drawing::Size(15, 14);
    this->checkBox49->TabIndex = 76;
    this->checkBox49->UseVisualStyleBackColor = true;
    // 
    // checkBox48
    // 
    this->checkBox48->AutoSize = true;
    this->checkBox48->Location = System::Drawing::Point(538, 93);
    this->checkBox48->Name = L"checkBox48";
    this->checkBox48->Size = System::Drawing::Size(15, 14);
    this->checkBox48->TabIndex = 75;
    this->checkBox48->UseVisualStyleBackColor = true;
    // 
    // checkBox47
    // 
    this->checkBox47->AutoSize = true;
    this->checkBox47->Location = System::Drawing::Point(492, 94);
    this->checkBox47->Name = L"checkBox47";
    this->checkBox47->Size = System::Drawing::Size(15, 14);
    this->checkBox47->TabIndex = 74;
    this->checkBox47->UseVisualStyleBackColor = true;
    // 
    // checkBox46
    // 
    this->checkBox46->AutoSize = true;
    this->checkBox46->Location = System::Drawing::Point(449, 93);
    this->checkBox46->Name = L"checkBox46";
    this->checkBox46->Size = System::Drawing::Size(15, 14);
    this->checkBox46->TabIndex = 73;
    this->checkBox46->UseVisualStyleBackColor = true;
    // 
    // checkBox45
    // 
    this->checkBox45->AutoSize = true;
    this->checkBox45->Location = System::Drawing::Point(405, 94);
    this->checkBox45->Name = L"checkBox45";
    this->checkBox45->Size = System::Drawing::Size(15, 14);
    this->checkBox45->TabIndex = 72;
    this->checkBox45->UseVisualStyleBackColor = true;
    // 
    // checkBox44
    // 
    this->checkBox44->AutoSize = true;
    this->checkBox44->Location = System::Drawing::Point(365, 93);
    this->checkBox44->Name = L"checkBox44";
    this->checkBox44->Size = System::Drawing::Size(15, 14);
    this->checkBox44->TabIndex = 71;
    this->checkBox44->UseVisualStyleBackColor = true;
    // 
    // checkBox43
    // 
    this->checkBox43->AutoSize = true;
    this->checkBox43->Location = System::Drawing::Point(326, 94);
    this->checkBox43->Name = L"checkBox43";
    this->checkBox43->Size = System::Drawing::Size(15, 14);
    this->checkBox43->TabIndex = 70;
    this->checkBox43->UseVisualStyleBackColor = true;
    // 
    // checkBox42
    // 
    this->checkBox42->AutoSize = true;
    this->checkBox42->Location = System::Drawing::Point(284, 93);
    this->checkBox42->Name = L"checkBox42";
    this->checkBox42->Size = System::Drawing::Size(15, 14);
    this->checkBox42->TabIndex = 69;
    this->checkBox42->UseVisualStyleBackColor = true;
    // 
    // checkBox41
    // 
    this->checkBox41->AutoSize = true;
    this->checkBox41->Location = System::Drawing::Point(245, 94);
    this->checkBox41->Name = L"checkBox41";
    this->checkBox41->Size = System::Drawing::Size(15, 14);
    this->checkBox41->TabIndex = 68;
    this->checkBox41->UseVisualStyleBackColor = true;
    // 
    // checkBox40
    // 
    this->checkBox40->AutoSize = true;
    this->checkBox40->Location = System::Drawing::Point(205, 94);
    this->checkBox40->Name = L"checkBox40";
    this->checkBox40->Size = System::Drawing::Size(15, 14);
    this->checkBox40->TabIndex = 67;
    this->checkBox40->UseVisualStyleBackColor = true;
    // 
    // checkBox39
    // 
    this->checkBox39->AutoSize = true;
    this->checkBox39->Location = System::Drawing::Point(167, 93);
    this->checkBox39->Name = L"checkBox39";
    this->checkBox39->Size = System::Drawing::Size(15, 14);
    this->checkBox39->TabIndex = 66;
    this->checkBox39->UseVisualStyleBackColor = true;
    // 
    // checkBox38
    // 
    this->checkBox38->AutoSize = true;
    this->checkBox38->Location = System::Drawing::Point(127, 94);
    this->checkBox38->Name = L"checkBox38";
    this->checkBox38->Size = System::Drawing::Size(15, 14);
    this->checkBox38->TabIndex = 65;
    this->checkBox38->UseVisualStyleBackColor = true;
    // 
    // checkBox37
    // 
    this->checkBox37->AutoSize = true;
    this->checkBox37->Location = System::Drawing::Point(89, 94);
    this->checkBox37->Name = L"checkBox37";
    this->checkBox37->Size = System::Drawing::Size(15, 14);
    this->checkBox37->TabIndex = 64;
    this->checkBox37->UseVisualStyleBackColor = true;
    // 
    // checkBox36
    // 
    this->checkBox36->AutoSize = true;
    this->checkBox36->Location = System::Drawing::Point(54, 93);
    this->checkBox36->Name = L"checkBox36";
    this->checkBox36->Size = System::Drawing::Size(15, 14);
    this->checkBox36->TabIndex = 63;
    this->checkBox36->UseVisualStyleBackColor = true;
    // 
    // checkBox35
    // 
    this->checkBox35->AutoSize = true;
    this->checkBox35->Location = System::Drawing::Point(752, 65);
    this->checkBox35->Name = L"checkBox35";
    this->checkBox35->Size = System::Drawing::Size(15, 14);
    this->checkBox35->TabIndex = 62;
    this->checkBox35->UseVisualStyleBackColor = true;
    this->checkBox35->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox35Click);
    // 
    // checkBox34
    // 
    this->checkBox34->AutoSize = true;
    this->checkBox34->Location = System::Drawing::Point(709, 65);
    this->checkBox34->Name = L"checkBox34";
    this->checkBox34->Size = System::Drawing::Size(15, 14);
    this->checkBox34->TabIndex = 61;
    this->checkBox34->UseVisualStyleBackColor = true;
    this->checkBox34->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox34Click);
    // 
    // checkBox33
    // 
    this->checkBox33->AutoSize = true;
    this->checkBox33->Location = System::Drawing::Point(667, 65);
    this->checkBox33->Name = L"checkBox33";
    this->checkBox33->Size = System::Drawing::Size(15, 14);
    this->checkBox33->TabIndex = 60;
    this->checkBox33->UseVisualStyleBackColor = true;
    // 
    // checkBox32
    // 
    this->checkBox32->AutoSize = true;
    this->checkBox32->Location = System::Drawing::Point(624, 65);
    this->checkBox32->Name = L"checkBox32";
    this->checkBox32->Size = System::Drawing::Size(15, 14);
    this->checkBox32->TabIndex = 59;
    this->checkBox32->UseVisualStyleBackColor = true;
    // 
    // checkBox31
    // 
    this->checkBox31->AutoSize = true;
    this->checkBox31->Location = System::Drawing::Point(584, 65);
    this->checkBox31->Name = L"checkBox31";
    this->checkBox31->Size = System::Drawing::Size(15, 14);
    this->checkBox31->TabIndex = 58;
    this->checkBox31->UseVisualStyleBackColor = true;
    // 
    // checkBox30
    // 
    this->checkBox30->AutoSize = true;
    this->checkBox30->Location = System::Drawing::Point(538, 65);
    this->checkBox30->Name = L"checkBox30";
    this->checkBox30->Size = System::Drawing::Size(15, 14);
    this->checkBox30->TabIndex = 57;
    this->checkBox30->UseVisualStyleBackColor = true;
    // 
    // checkBox29
    // 
    this->checkBox29->AutoSize = true;
    this->checkBox29->Location = System::Drawing::Point(492, 65);
    this->checkBox29->Name = L"checkBox29";
    this->checkBox29->Size = System::Drawing::Size(15, 14);
    this->checkBox29->TabIndex = 56;
    this->checkBox29->UseVisualStyleBackColor = true;
    // 
    // checkBox28
    // 
    this->checkBox28->AutoSize = true;
    this->checkBox28->Location = System::Drawing::Point(449, 65);
    this->checkBox28->Name = L"checkBox28";
    this->checkBox28->Size = System::Drawing::Size(15, 14);
    this->checkBox28->TabIndex = 55;
    this->checkBox28->UseVisualStyleBackColor = true;
    // 
    // checkBox27
    // 
    this->checkBox27->AutoSize = true;
    this->checkBox27->Location = System::Drawing::Point(405, 65);
    this->checkBox27->Name = L"checkBox27";
    this->checkBox27->Size = System::Drawing::Size(15, 14);
    this->checkBox27->TabIndex = 54;
    this->checkBox27->UseVisualStyleBackColor = true;
    // 
    // checkBox26
    // 
    this->checkBox26->AutoSize = true;
    this->checkBox26->Location = System::Drawing::Point(365, 64);
    this->checkBox26->Name = L"checkBox26";
    this->checkBox26->Size = System::Drawing::Size(15, 14);
    this->checkBox26->TabIndex = 53;
    this->checkBox26->UseVisualStyleBackColor = true;
    // 
    // checkBox25
    // 
    this->checkBox25->AutoSize = true;
    this->checkBox25->Location = System::Drawing::Point(326, 65);
    this->checkBox25->Name = L"checkBox25";
    this->checkBox25->Size = System::Drawing::Size(15, 14);
    this->checkBox25->TabIndex = 52;
    this->checkBox25->UseVisualStyleBackColor = true;
    // 
    // checkBox24
    // 
    this->checkBox24->AutoSize = true;
    this->checkBox24->Location = System::Drawing::Point(284, 65);
    this->checkBox24->Name = L"checkBox24";
    this->checkBox24->Size = System::Drawing::Size(15, 14);
    this->checkBox24->TabIndex = 51;
    this->checkBox24->UseVisualStyleBackColor = true;
    // 
    // checkBox23
    // 
    this->checkBox23->AutoSize = true;
    this->checkBox23->Location = System::Drawing::Point(245, 65);
    this->checkBox23->Name = L"checkBox23";
    this->checkBox23->Size = System::Drawing::Size(15, 14);
    this->checkBox23->TabIndex = 50;
    this->checkBox23->UseVisualStyleBackColor = true;
    // 
    // checkBox22
    // 
    this->checkBox22->AutoSize = true;
    this->checkBox22->Location = System::Drawing::Point(205, 65);
    this->checkBox22->Name = L"checkBox22";
    this->checkBox22->Size = System::Drawing::Size(15, 14);
    this->checkBox22->TabIndex = 49;
    this->checkBox22->UseVisualStyleBackColor = true;
    // 
    // checkBox21
    // 
    this->checkBox21->AutoSize = true;
    this->checkBox21->Location = System::Drawing::Point(167, 65);
    this->checkBox21->Name = L"checkBox21";
    this->checkBox21->Size = System::Drawing::Size(15, 14);
    this->checkBox21->TabIndex = 48;
    this->checkBox21->UseVisualStyleBackColor = true;
    // 
    // checkBox20
    // 
    this->checkBox20->AutoSize = true;
    this->checkBox20->Location = System::Drawing::Point(127, 65);
    this->checkBox20->Name = L"checkBox20";
    this->checkBox20->Size = System::Drawing::Size(15, 14);
    this->checkBox20->TabIndex = 47;
    this->checkBox20->UseVisualStyleBackColor = true;
    // 
    // checkBox19
    // 
    this->checkBox19->AutoSize = true;
    this->checkBox19->Location = System::Drawing::Point(89, 65);
    this->checkBox19->Name = L"checkBox19";
    this->checkBox19->Size = System::Drawing::Size(15, 14);
    this->checkBox19->TabIndex = 46;
    this->checkBox19->UseVisualStyleBackColor = true;
    // 
    // checkBox18
    // 
    this->checkBox18->AutoSize = true;
    this->checkBox18->Location = System::Drawing::Point(54, 65);
    this->checkBox18->Name = L"checkBox18";
    this->checkBox18->Size = System::Drawing::Size(15, 14);
    this->checkBox18->TabIndex = 45;
    this->checkBox18->UseVisualStyleBackColor = true;
    // 
    // checkBox17
    // 
    this->checkBox17->AutoSize = true;
    this->checkBox17->Location = System::Drawing::Point(752, 36);
    this->checkBox17->Name = L"checkBox17";
    this->checkBox17->Size = System::Drawing::Size(15, 14);
    this->checkBox17->TabIndex = 44;
    this->checkBox17->UseVisualStyleBackColor = true;
    this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox17Click);
    // 
    // checkBox16
    // 
    this->checkBox16->AutoSize = true;
    this->checkBox16->Location = System::Drawing::Point(709, 36);
    this->checkBox16->Name = L"checkBox16";
    this->checkBox16->Size = System::Drawing::Size(15, 14);
    this->checkBox16->TabIndex = 43;
    this->checkBox16->UseVisualStyleBackColor = true;
    this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &ui_signas3nt::checkBox16Click);
    // 
    // checkBox15
    // 
    this->checkBox15->AutoSize = true;
    this->checkBox15->Location = System::Drawing::Point(667, 36);
    this->checkBox15->Name = L"checkBox15";
    this->checkBox15->Size = System::Drawing::Size(15, 14);
    this->checkBox15->TabIndex = 42;
    this->checkBox15->UseVisualStyleBackColor = true;
    // 
    // checkBox14
    // 
    this->checkBox14->AutoSize = true;
    this->checkBox14->Location = System::Drawing::Point(624, 36);
    this->checkBox14->Name = L"checkBox14";
    this->checkBox14->Size = System::Drawing::Size(15, 14);
    this->checkBox14->TabIndex = 41;
    this->checkBox14->UseVisualStyleBackColor = true;
    // 
    // checkBox13
    // 
    this->checkBox13->AutoSize = true;
    this->checkBox13->Location = System::Drawing::Point(584, 36);
    this->checkBox13->Name = L"checkBox13";
    this->checkBox13->Size = System::Drawing::Size(15, 14);
    this->checkBox13->TabIndex = 40;
    this->checkBox13->UseVisualStyleBackColor = true;
    // 
    // checkBox12
    // 
    this->checkBox12->AutoSize = true;
    this->checkBox12->Location = System::Drawing::Point(539, 36);
    this->checkBox12->Name = L"checkBox12";
    this->checkBox12->Size = System::Drawing::Size(15, 14);
    this->checkBox12->TabIndex = 39;
    this->checkBox12->UseVisualStyleBackColor = true;
    // 
    // checkBox11
    // 
    this->checkBox11->AutoSize = true;
    this->checkBox11->Location = System::Drawing::Point(492, 36);
    this->checkBox11->Name = L"checkBox11";
    this->checkBox11->Size = System::Drawing::Size(15, 14);
    this->checkBox11->TabIndex = 38;
    this->checkBox11->UseVisualStyleBackColor = true;
    // 
    // checkBox10
    // 
    this->checkBox10->AutoSize = true;
    this->checkBox10->Location = System::Drawing::Point(449, 36);
    this->checkBox10->Name = L"checkBox10";
    this->checkBox10->Size = System::Drawing::Size(15, 14);
    this->checkBox10->TabIndex = 37;
    this->checkBox10->UseVisualStyleBackColor = true;
    // 
    // checkBox9
    // 
    this->checkBox9->AutoSize = true;
    this->checkBox9->Location = System::Drawing::Point(405, 36);
    this->checkBox9->Name = L"checkBox9";
    this->checkBox9->Size = System::Drawing::Size(15, 14);
    this->checkBox9->TabIndex = 36;
    this->checkBox9->UseVisualStyleBackColor = true;
    // 
    // checkBox8
    // 
    this->checkBox8->AutoSize = true;
    this->checkBox8->Location = System::Drawing::Point(365, 36);
    this->checkBox8->Name = L"checkBox8";
    this->checkBox8->Size = System::Drawing::Size(15, 14);
    this->checkBox8->TabIndex = 35;
    this->checkBox8->UseVisualStyleBackColor = true;
    // 
    // checkBox7
    // 
    this->checkBox7->AutoSize = true;
    this->checkBox7->Location = System::Drawing::Point(326, 36);
    this->checkBox7->Name = L"checkBox7";
    this->checkBox7->Size = System::Drawing::Size(15, 14);
    this->checkBox7->TabIndex = 34;
    this->checkBox7->UseVisualStyleBackColor = true;
    // 
    // checkBox6
    // 
    this->checkBox6->AutoSize = true;
    this->checkBox6->Location = System::Drawing::Point(284, 35);
    this->checkBox6->Name = L"checkBox6";
    this->checkBox6->Size = System::Drawing::Size(15, 14);
    this->checkBox6->TabIndex = 33;
    this->checkBox6->UseVisualStyleBackColor = true;
    // 
    // checkBox5
    // 
    this->checkBox5->AutoSize = true;
    this->checkBox5->Location = System::Drawing::Point(247, 36);
    this->checkBox5->Name = L"checkBox5";
    this->checkBox5->Size = System::Drawing::Size(15, 14);
    this->checkBox5->TabIndex = 32;
    this->checkBox5->UseVisualStyleBackColor = true;
    // 
    // checkBox4
    // 
    this->checkBox4->AutoSize = true;
    this->checkBox4->Location = System::Drawing::Point(205, 36);
    this->checkBox4->Name = L"checkBox4";
    this->checkBox4->Size = System::Drawing::Size(15, 14);
    this->checkBox4->TabIndex = 31;
    this->checkBox4->UseVisualStyleBackColor = true;
    // 
    // checkBox3
    // 
    this->checkBox3->AutoSize = true;
    this->checkBox3->Location = System::Drawing::Point(167, 36);
    this->checkBox3->Name = L"checkBox3";
    this->checkBox3->Size = System::Drawing::Size(15, 14);
    this->checkBox3->TabIndex = 30;
    this->checkBox3->UseVisualStyleBackColor = true;
    // 
    // checkBox2
    // 
    this->checkBox2->AutoSize = true;
    this->checkBox2->Location = System::Drawing::Point(127, 36);
    this->checkBox2->Name = L"checkBox2";
    this->checkBox2->Size = System::Drawing::Size(15, 14);
    this->checkBox2->TabIndex = 29;
    this->checkBox2->UseVisualStyleBackColor = true;
    // 
    // checkBox1
    // 
    this->checkBox1->AutoSize = true;
    this->checkBox1->Location = System::Drawing::Point(89, 36);
    this->checkBox1->Name = L"checkBox1";
    this->checkBox1->Size = System::Drawing::Size(15, 14);
    this->checkBox1->TabIndex = 28;
    this->checkBox1->UseVisualStyleBackColor = true;
    // 
    // eChAll
    // 
    this->eChAll->AutoSize = true;
    this->eChAll->Location = System::Drawing::Point(29, 286);
    this->eChAll->Name = L"eChAll";
    this->eChAll->Size = System::Drawing::Size(14, 13);
    this->eChAll->TabIndex = 27;
    this->eChAll->Text = L"E";
    this->eChAll->Click += gcnew System::EventHandler(this, &ui_signas3nt::label2_Click);
    // 
    // dChAll
    // 
    this->dChAll->AutoSize = true;
    this->dChAll->Location = System::Drawing::Point(29, 318);
    this->dChAll->Name = L"dChAll";
    this->dChAll->Size = System::Drawing::Size(15, 13);
    this->dChAll->TabIndex = 26;
    this->dChAll->Text = L"D";
    // 
    // ln1
    // 
    this->ln1->AutoSize = true;
    this->ln1->Location = System::Drawing::Point(6, 65);
    this->ln1->Name = L"ln1";
    this->ln1->Size = System::Drawing::Size(37, 13);
    this->ln1->TabIndex = 25;
    this->ln1->Text = L"Lane1";
    // 
    // ln2
    // 
    this->ln2->AutoSize = true;
    this->ln2->Location = System::Drawing::Point(6, 94);
    this->ln2->Name = L"ln2";
    this->ln2->Size = System::Drawing::Size(37, 13);
    this->ln2->TabIndex = 24;
    this->ln2->Text = L"Lane2";
    // 
    // ln3
    // 
    this->ln3->AutoSize = true;
    this->ln3->Location = System::Drawing::Point(6, 123);
    this->ln3->Name = L"ln3";
    this->ln3->Size = System::Drawing::Size(37, 13);
    this->ln3->TabIndex = 23;
    this->ln3->Text = L"Lane3";
    // 
    // ln5
    // 
    this->ln5->AutoSize = true;
    this->ln5->Location = System::Drawing::Point(6, 185);
    this->ln5->Name = L"ln5";
    this->ln5->Size = System::Drawing::Size(37, 13);
    this->ln5->TabIndex = 22;
    this->ln5->Text = L"Lane5";
    // 
    // ln6
    // 
    this->ln6->AutoSize = true;
    this->ln6->Location = System::Drawing::Point(6, 220);
    this->ln6->Name = L"ln6";
    this->ln6->Size = System::Drawing::Size(37, 13);
    this->ln6->TabIndex = 21;
    this->ln6->Text = L"Lane6";
    // 
    // ln7
    // 
    this->ln7->AutoSize = true;
    this->ln7->Location = System::Drawing::Point(6, 254);
    this->ln7->Name = L"ln7";
    this->ln7->Size = System::Drawing::Size(37, 13);
    this->ln7->TabIndex = 20;
    this->ln7->Text = L"Lane7";
    // 
    // ln4
    // 
    this->ln4->AutoSize = true;
    this->ln4->Location = System::Drawing::Point(6, 153);
    this->ln4->Name = L"ln4";
    this->ln4->Size = System::Drawing::Size(37, 13);
    this->ln4->TabIndex = 19;
    this->ln4->Text = L"Lane4";
    // 
    // ln0
    // 
    this->ln0->AutoSize = true;
    this->ln0->Location = System::Drawing::Point(6, 36);
    this->ln0->Name = L"ln0";
    this->ln0->Size = System::Drawing::Size(37, 13);
    this->ln0->TabIndex = 18;
    this->ln0->Text = L"Lane0";
    // 
    // ch11
    // 
    this->ch11->AutoSize = true;
    this->ch11->Location = System::Drawing::Point(489, 16);
    this->ch11->Name = L"ch11";
    this->ch11->Size = System::Drawing::Size(19, 13);
    this->ch11->TabIndex = 17;
    this->ch11->Text = L"11";
    // 
    // ch10
    // 
    this->ch10->AutoSize = true;
    this->ch10->Location = System::Drawing::Point(446, 16);
    this->ch10->Name = L"ch10";
    this->ch10->Size = System::Drawing::Size(19, 13);
    this->ch10->TabIndex = 16;
    this->ch10->Text = L"10";
    // 
    // ch1
    // 
    this->ch1->AutoSize = true;
    this->ch1->Location = System::Drawing::Point(91, 16);
    this->ch1->Name = L"ch1";
    this->ch1->Size = System::Drawing::Size(13, 13);
    this->ch1->TabIndex = 15;
    this->ch1->Text = L"1";
    // 
    // ch2
    // 
    this->ch2->AutoSize = true;
    this->ch2->Location = System::Drawing::Point(129, 16);
    this->ch2->Name = L"ch2";
    this->ch2->Size = System::Drawing::Size(13, 13);
    this->ch2->TabIndex = 14;
    this->ch2->Text = L"2";
    // 
    // ch3
    // 
    this->ch3->AutoSize = true;
    this->ch3->Location = System::Drawing::Point(169, 16);
    this->ch3->Name = L"ch3";
    this->ch3->Size = System::Drawing::Size(13, 13);
    this->ch3->TabIndex = 13;
    this->ch3->Text = L"3";
    // 
    // ch4
    // 
    this->ch4->AutoSize = true;
    this->ch4->Location = System::Drawing::Point(207, 16);
    this->ch4->Name = L"ch4";
    this->ch4->Size = System::Drawing::Size(13, 13);
    this->ch4->TabIndex = 12;
    this->ch4->Text = L"4";
    // 
    // ch5
    // 
    this->ch5->AutoSize = true;
    this->ch5->Location = System::Drawing::Point(247, 16);
    this->ch5->Name = L"ch5";
    this->ch5->Size = System::Drawing::Size(13, 13);
    this->ch5->TabIndex = 11;
    this->ch5->Text = L"5";
    // 
    // ch6
    // 
    this->ch6->AutoSize = true;
    this->ch6->Location = System::Drawing::Point(286, 16);
    this->ch6->Name = L"ch6";
    this->ch6->Size = System::Drawing::Size(13, 13);
    this->ch6->TabIndex = 10;
    this->ch6->Text = L"6";
    // 
    // dLaneAll
    // 
    this->dLaneAll->AutoSize = true;
    this->dLaneAll->Location = System::Drawing::Point(752, 16);
    this->dLaneAll->Name = L"dLaneAll";
    this->dLaneAll->Size = System::Drawing::Size(15, 13);
    this->dLaneAll->TabIndex = 9;
    this->dLaneAll->Text = L"D";
    // 
    // eLaneAll
    // 
    this->eLaneAll->AutoSize = true;
    this->eLaneAll->Location = System::Drawing::Point(710, 16);
    this->eLaneAll->Name = L"eLaneAll";
    this->eLaneAll->Size = System::Drawing::Size(14, 13);
    this->eLaneAll->TabIndex = 8;
    this->eLaneAll->Text = L"E";
    // 
    // ch15
    // 
    this->ch15->AutoSize = true;
    this->ch15->Location = System::Drawing::Point(664, 16);
    this->ch15->Name = L"ch15";
    this->ch15->Size = System::Drawing::Size(19, 13);
    this->ch15->TabIndex = 7;
    this->ch15->Text = L"15";
    // 
    // ch14
    // 
    this->ch14->AutoSize = true;
    this->ch14->Location = System::Drawing::Point(621, 16);
    this->ch14->Name = L"ch14";
    this->ch14->Size = System::Drawing::Size(19, 13);
    this->ch14->TabIndex = 6;
    this->ch14->Text = L"14";
    // 
    // ch13
    // 
    this->ch13->AutoSize = true;
    this->ch13->Location = System::Drawing::Point(581, 16);
    this->ch13->Name = L"ch13";
    this->ch13->Size = System::Drawing::Size(19, 13);
    this->ch13->TabIndex = 5;
    this->ch13->Text = L"13";
    // 
    // ch12
    // 
    this->ch12->AutoSize = true;
    this->ch12->Location = System::Drawing::Point(535, 16);
    this->ch12->Name = L"ch12";
    this->ch12->Size = System::Drawing::Size(19, 13);
    this->ch12->TabIndex = 4;
    this->ch12->Text = L"12";
    // 
    // ch9
    // 
    this->ch9->AutoSize = true;
    this->ch9->Location = System::Drawing::Point(407, 16);
    this->ch9->Name = L"ch9";
    this->ch9->Size = System::Drawing::Size(13, 13);
    this->ch9->TabIndex = 3;
    this->ch9->Text = L"9";
    // 
    // ch8
    // 
    this->ch8->AutoSize = true;
    this->ch8->Location = System::Drawing::Point(367, 16);
    this->ch8->Name = L"ch8";
    this->ch8->Size = System::Drawing::Size(13, 13);
    this->ch8->TabIndex = 2;
    this->ch8->Text = L"8";
    // 
    // ch7
    // 
    this->ch7->AutoSize = true;
    this->ch7->Location = System::Drawing::Point(328, 16);
    this->ch7->Name = L"ch7";
    this->ch7->Size = System::Drawing::Size(13, 13);
    this->ch7->TabIndex = 1;
    this->ch7->Text = L"7";
    // 
    // ch0
    // 
    this->ch0->AutoSize = true;
    this->ch0->Location = System::Drawing::Point(56, 16);
    this->ch0->Name = L"ch0";
    this->ch0->Size = System::Drawing::Size(13, 13);
    this->ch0->TabIndex = 0;
    this->ch0->Text = L"0";
    // 
    // menuStrip1
    // 
    this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nandSettings });
    this->menuStrip1->Location = System::Drawing::Point(0, 0);
    this->menuStrip1->Name = L"menuStrip1";
    this->menuStrip1->Size = System::Drawing::Size(853, 24);
    this->menuStrip1->TabIndex = 2;
    this->menuStrip1->Text = L"menuStrip1";
    // 
    // nandSettings
    // 
    this->nandSettings->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->settings });
    this->nandSettings->Name = L"nandSettings";
    this->nandSettings->Size = System::Drawing::Size(98, 20);
    this->nandSettings->Text = L"NAND Settings";
    // 
    // settings
    // 
    this->settings->Name = L"settings";
    this->settings->Size = System::Drawing::Size(116, 22);
    this->settings->Text = L"Settings";
    this->settings->Click += gcnew System::EventHandler(this, &ui_signas3nt::settingsClick);
    // 
    // butRun
    // 
    this->butRun->Location = System::Drawing::Point(760, 501);
    this->butRun->Name = L"butRun";
    this->butRun->Size = System::Drawing::Size(75, 23);
    this->butRun->TabIndex = 3;
    this->butRun->Text = L"Run";
    this->butRun->UseVisualStyleBackColor = true;
    this->butRun->Click += gcnew System::EventHandler(this, &ui_signas3nt::butRun_Click);
    // 
    // ui_signas3nt
    // 
    this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
    this->AutoSize = true;
    this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
    this->ClientSize = System::Drawing::Size(853, 535);
    this->Controls->Add(this->butRun);
    this->Controls->Add(this->laneBox);
    this->Controls->Add(this->channelBox);
    this->Controls->Add(this->menuStrip1);
    this->Name = L"ui_signas3nt";
    this->Load += gcnew System::EventHandler(this, &ui_signas3nt::ui_signas3nt_Load);
    this->laneBox->ResumeLayout(false);
    this->laneBox->PerformLayout();
    this->channelBox->ResumeLayout(false);
    this->channelBox->PerformLayout();
    this->menuStrip1->ResumeLayout(false);
    this->menuStrip1->PerformLayout();
    this->ResumeLayout(false);
    this->PerformLayout();

}