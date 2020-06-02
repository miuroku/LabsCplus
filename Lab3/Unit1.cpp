//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "MyData.h"
#include "OurList.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
ForwList* list;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    list = new ForwList();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
     try
	{
		if(NameEdit->Text.Trim() == "")
			throw -1;

		std::string name = AnsiString(NameEdit->Text.Trim().c_str()).c_str();
		int cost = StrToInt(CostEdit->Text.Trim()),
			amount = StrToInt(AmountEdit->Text.Trim());
		TDateTime tmpDate = DateTimePicker->Date;
		Data tmp(name, amount, cost, tmpDate);
		list->PushBack(tmp);
	}
	catch(EConvertError &e)
	{
		ShowMessage("Bad input.");
		return;
	}
	catch(...)
	{
		ShowMessage("Bad input.");
		return;
	}
	list->ShowAll();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FindByNameButtonClick(TObject *Sender)
{
     std::string name;
	try
	{
		if(SearchEdit->Text.Trim() == "")
			throw -1;
		name = AnsiString(SearchEdit->Text.Trim().c_str()).c_str();
		list->FindName(RichEdit3, name);
	}
	catch(...)
	{
		ShowMessage("Bad input.");
		return;
	}
}    

//---------------------------------------------------------------------------

void __fastcall TForm1::FindByCostClick(TObject *Sender)
{
     int cost;
	try
	{
		if(SearchEdit->Text.Trim() == "")
			throw -1;
		cost = StrToInt(SearchEdit->Text.Trim());
		if(cost < 5)
			throw -1;
		list->FindCost(RichEdit3, cost);
	}
	catch(EConvertError &e)
	{
		ShowMessage("Bad input.");
		return;
	}
	catch(...)
	{
		ShowMessage("Bad input.");
		return;
	}    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FindByAmountClick(TObject *Sender)
{
     int amount;
	try
	{
		if(SearchEdit->Text.Trim() == "")
			throw -1;
		amount = StrToInt(SearchEdit->Text.Trim());
		if(amount < 0)
			throw -1;
		list->FindAmountInStock(RichEdit3, amount);
	}
	catch(EConvertError &e)
	{
		ShowMessage("Bad input.");
		return;
	}
	catch(...)
	{
		ShowMessage("Bad input.");
		return;
	}    
}
//---------------------------------------------------------------------------

