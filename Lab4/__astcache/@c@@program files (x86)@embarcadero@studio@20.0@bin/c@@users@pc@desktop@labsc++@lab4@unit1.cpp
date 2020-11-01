//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "CStack.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

const AnsiString operators = "(+-*/)";

int priority(char x)
{
	switch (x)
	{
		case '(':
			return 0;
		case '+':
		case '-':
			return 1;
		case '/':
		case '*':
			return 2;
		default:
			throw "";
	}
}

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	try
	{
		AnsiString str = "(" + Edit1->Text + ")";
		AnsiString ex;
		Stack<char> st;
		for (int i = 1; i <= str.Length(); i++)
		{
			if (operators.Pos(str[i]))
			{
				switch (str[i])
				{
					case '(':
						st.push('(');
						break;
					case ')':
						while (st.back() != '(')
						{
							ex += st.back();
							st.pop();
						}
						st.pop();
						break;
					default:
						while (priority(str[i]) <= priority(st.back()))
						{
							ex += st.back();
							st.pop();
						}
						st.push(str[i]);
				}
			}
			else
			{
				ex += str[i];
            }
		}
		if(!st.empty()) throw;

		Label1->Caption = "ОПЗ: " + ex;

		Stack<char> e;
		for (int i = ex.Length(); i > 0; i--)
		{
            e.push(ex[i]);
        }

		Stack<double> s;

		while (!e.empty())
		{
			if(operators.Pos(e.back()))
			{
				double t2 = s.back();
				s.pop();
				double t1 = s.back();
				s.pop();
				switch (e.back())
				{
					case '+':
						s.push(t1 + t2);
						break;
					case '-':
						s.push(t1 - t2);
						break;
					case '/':
						s.push(t1 / t2);
						break;
					case '*':
						s.push(t1 * t2);
						break;
					default:
						throw "";
				}
			}
			else
			{
				switch(e.back())
				{
					case 'a':
						s.push(StrToFloat(Form1->EditA->Text));
						break;
					case 'b':
						s.push(StrToFloat(Form1->EditB->Text));
						break;
					case 'c':
						s.push(StrToFloat(Form1->EditC->Text));
						break;
					case 'd':
						s.push(StrToFloat(Form1->EditD->Text));
						break;
					case 'e':
						s.push(StrToFloat(Form1->EditE->Text));
						break;
					default:
						throw "";
					}
			}
			e.pop();
		}

		if(s.empty()) throw "";
		Label1->Caption += " ; Ответ = " + FloatToStr(s.back());
        s.pop();
		if(!s.empty()) throw "";

	}
	catch(...)
	{
		ShowMessage("ошибка");
	}
}
//---------------------------------------------------------------------------

