//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Node.h"
#include "ourTree.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Tree *rbTree;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{  
    rbTree = new Tree();

	StringGrid1->Cells[0][0] = "SomeValues";
	StringGrid1->Cells[1][0] = "1284839";
	StringGrid1->Cells[0][1] = "SomeAnother";
	StringGrid1->Cells[1][1] = "9112348";
	StringGrid1->Cells[0][2] = "Proverka";
	StringGrid1->Cells[1][2] = "3457271";
	StringGrid1->Cells[0][3] = "How";
	StringGrid1->Cells[1][3] = "1975321";
	StringGrid1->Cells[0][4] = "To";
	StringGrid1->Cells[1][4] = "1234567";
	StringGrid1->Cells[0][5] = "Work this";
	StringGrid1->Cells[1][5] = "4321098";
	StringGrid1->Cells[0][6] = "Programm";
	StringGrid1->Cells[1][6] = "5677890";
	StringGrid1->Cells[0][7] = "treeeee";
	StringGrid1->Cells[1][7] = "4392347";
	StringGrid1->Cells[0][8] = "And more";
	StringGrid1->Cells[1][8] = "2689642";
	StringGrid1->Cells[0][9] = "Sky";
	StringGrid1->Cells[1][9] = "7862975";

	for (int i = 0; i < 10; i++)
		rbTree->InsertNode(StringGrid1->Cells[0][i], StrToInt(StringGrid1->Cells[1][i]));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::AddButtonClick(TObject *Sender)
{
     try
	{
		AnsiString data = FEdit->Text;
		if (data.IsEmpty())
			throw -1;
		int key = StrToInt(KeyEdit->Text);
        rbTree->InsertNode(data, key);
	}
	catch(EConvertError &e)
	{
		ShowMessage("Something wrong. Key should be more than 0.");
		return;
	}
	catch(...)
	{
		ShowMessage("Something wrong. Check name.");
		return;
	}    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DeleteButtonClick(TObject *Sender)
{
     try
	{
		int key = StrToInt(KeyEdit->Text);
		rbTree->DeleteNode(rbTree->FindNode(key));
	}
	catch(EConvertError &e)
	{
		ShowMessage("Something wrong. Key should be more than 0.");
		return;
	}    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowValueByKeyButtonClick(TObject *Sender)
{
    try
	{
		int key = StrToInt(KeyEdit->Text);
		Node* tmp = rbTree->FindNode(key);
		if (tmp)
			ValueByKeyLabel->Caption = tmp->data;
		else
			ShowMessage("Can't find key.");
	}
	catch(EConvertError &e)
	{
		ShowMessage("Something wrong. Key should be more than 0.");
		return;
	}    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ShowAmountOfLeftNodesButtonClick(TObject *Sender)
{
     AmountOfLeftNodesLabel->Caption = IntToStr(rbTree->LeftSubtreeVal());    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PreorderButtonClick(TObject *Sender)
{
    Memo1->Lines->Clear();
    rbTree->Preorder(Memo1, rbTree->GetRoot());    
}
//---------------------------------------------------------------------------


void __fastcall TForm1::PostorderButtonClick(TObject *Sender)
{
    Memo1->Lines->Clear();
	rbTree->Postorder(Memo1, rbTree->GetRoot());    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::KeyIncreaseButtonClick(TObject *Sender)
{
    Memo1->Lines->Clear();
	rbTree->Centered(Memo1, rbTree->GetRoot());    
}
//---------------------------------------------------------------------------

