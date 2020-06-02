//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "DblLinkedList.h"
#include "Queue.h"
#include "RingList.h"

TForm1 *Form1;
DLList<int> *ourdllist;
Queue<int> *ourqueue;
RingList<int> *ourring;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
    
    ourdllist = new DLList<int>();
	ourqueue = new Queue<int>();
	ourring = new RingList<int>();
    
    srand(time(0));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonAddElementClick(TObject *Sender)
{
     //int fromvalue = 1;
     //int tovalue = 150;
     
     ourring->PushBack( 1 + ( rand()% 150 ) );
     
     if (ourring->Size() == 1)
        ourring->Move(1);
        
	ourring->ShowAll(ListBox1);
	ourring->ShowCurrent(LabelCurrentElement);
	Gauge1->MaxValue = (ourring->Size()) ? ourring->Size()- 1 : ourring->Size();
        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonDeleteElementClick(TObject *Sender)
{
    ourring->DeleteCurrent();
    ourring->ShowCurrent(Form1->LabelCurrentElement);
	ourring->ShowAll(ListBox1);
    Gauge1->MaxValue = (ourring->Size()) ? ourring->Size()- 1 : ourring->Size();    
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonNextElementClick(TObject *Sender)
{
    if (!ourring->Size()){
       return;
    }
        
	ourring->Move(1);
    
	ourring->ShowCurrent(LabelCurrentElement);
    
	int tmp = Gauge1->Progress;
	tmp++;
    
	Gauge1->Progress = tmp % ourring->Size();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButtonPreviousElementClick(TObject *Sender)
{
    if (!ourring->Size())
        return;
	ourring->Move(-1);
	ourring->ShowCurrent(LabelCurrentElement);
    int tmp = Gauge1->Progress;
    
	tmp--;
    
	if (tmp  == -1)
		Gauge1->Progress = Gauge1->MaxValue;
	else
        Gauge1->Progress = tmp;    
}
//---------------------------------------------------------------------------

