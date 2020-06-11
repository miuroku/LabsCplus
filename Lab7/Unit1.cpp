//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

#include "MyHashTable.h"
#include "Stack.h"
#include "ExtentionHashTable.h"

HashTable* ourHashTable;

__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    ourHashTable = new HashTable();
    Memo->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
    try
	{
		AnsiString tmp = ADFEdit->Text.Trim();
		if (tmp.IsEmpty())
			throw -1;
		ourHashTable->Add(tmp);
	}
	catch(...)
	{
		ShowMessage("Input somethings.");
		return;
	}    
}

//---------------------------------------------------------------------------
void __fastcall TForm1::DelButtonClick(TObject *Sender)
{
    try
	{
		AnsiString tmp = ADFEdit->Text.Trim();
		if (tmp.IsEmpty())
			throw -1;
		ourHashTable->Delete(tmp);
	}
	catch(...)
	{
		ShowMessage("Input somethings.");
		return;
	}    
}

//---------------------------------------------------------------------------
void __fastcall TForm1::FindButtonClick(TObject *Sender)
{
    try
	{
		AnsiString tmp = ADFEdit->Text.Trim();
        
		if (tmp.IsEmpty())
			throw -1;
            
		if (ourHashTable->Has(tmp))
		{
			Label1->Caption = "Exists!";
		}
		else
		{         
			Label1->Caption = "Not Exists!";
		}

	}
	catch(...)
	{
		ShowMessage("Input somethings.");
		return;
	} 
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PrintButtonClick(TObject *Sender)
{
     ourHashTable->Print(Memo);    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MostRepeatedButtonClick(TObject *Sender)
{
     ((ExtHT*)ourHashTable)->ShowMostRepKeys(MRKeyLabel);    
}
//---------------------------------------------------------------------------
