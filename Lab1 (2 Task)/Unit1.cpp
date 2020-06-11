//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"  
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

#include "Figure.h"
#include "Circle.h"
#include "OurSquare.h"

Circle ourCircle;
MySquare ourSquare;
bool circleBegin = false;
bool squareBegin = false;



void ClearAll()
{
     Form1->PaintBox1->Canvas->Brush->Color = clWhite;
     Form1->PaintBox1->Canvas->Rectangle(0, 0, 700, 600);
     Form1->PaintBox1->Canvas->Pen->Color = clBlack;
	 Form1->PaintBox1->Canvas->Pen->Width = 1;
}

void SetActualInfo()
{
     if (Form1->ComboBoxChoose->ItemIndex != -1) {
        Figure *tmpFigure;
        switch(Form1->ComboBoxChoose->ItemIndex){
        case 0:
             tmpFigure = &ourCircle;
             break;
        case 1:
             tmpFigure = &ourSquare;
             break;
        }

        TPoint tmpPoint = tmpFigure->GetCentre();
        Form1->EditMassCentreX->Text = tmpPoint.x;
        Form1->EditMassCentreY->Text = tmpPoint.y;
        Form1->LabelPerimeter->Caption = tmpFigure->GetPerimeter();
        Form1->labelSquare->Caption = tmpFigure->GetSquare();
        Form1->EditScale->Text = 1;
        //Form1->EditRotation->Text = 0;
     }
}

void __fastcall TForm1::btnClearAllClick(TObject *Sender)
{
     ClearAll();
     LabelPerimeter->Caption = "";
     labelSquare->Caption = "";
     EditScale->Text = "1";
    // EditRotation->Text = 0;
     EditMassCentreX->Text = "";
     EditMassCentreY->Text = "";
     ComboBoxChoose->ItemIndex = -1;
     circleBegin = true;         
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PaintBox1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X,
          int Y)
{   // Circle
    if (ComboBoxChoose->ItemIndex == 0) {
       if (circleBegin == false) {
       
          ClearAll();
          ourCircle.centre.x = X;
          ourCircle.centre.y = Y;
          circleBegin = true;
          
       }
       else if (circleBegin == true) {

           TPoint ourCurrentPoint;
           ourCurrentPoint.x = X;
           ourCurrentPoint.y = Y;

           ourCircle.radius = DistanceBetweenPoints(ourCircle.centre, ourCurrentPoint);
           ourCircle.Print(PaintBox1->Canvas);
           SetActualInfo();
           
           circleBegin = false;
       }
    }
    else if (ComboBoxChoose->ItemIndex == 1) {
       if (squareBegin == false) {

           ClearAll();
           ourSquare.pointBegin.x = X;
           ourSquare.pointBegin.y = Y;
           squareBegin = true;           
       }
       else{
           ourSquare.pointEnd.x = X;
           ourSquare.pointEnd.y = Y;
           
           ourSquare.width = abs(ourSquare.pointEnd.x - ourSquare.pointBegin.x);
           ourSquare.height = abs(ourSquare.pointEnd.y - ourSquare.pointBegin.y);
           
           ourSquare.Print(PaintBox1->Canvas);
           SetActualInfo();
           squareBegin = false;
       }
                  
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::btnMakeAllClick(TObject *Sender)
{
 
     try{
        if (ComboBoxChoose->ItemIndex == 0) {
            int newCentMassX;
            int newCentMassY;        
            newCentMassX = StrToInt(EditMassCentreX->Text);        
            newCentMassY = StrToInt(EditMassCentreY->Text);

            ourCircle.Move(newCentMassX - ourCircle.GetCentre().x, newCentMassY - ourCircle.GetCentre().y);

            int newmainPointX;
            int newmainPointY;        
            newmainPointX = StrToInt(EditMainPointX->Text);        
            newmainPointY = StrToInt(EditMainPointY->Text);
            newCentMassX = newmainPointX + StrToFloat(EditScale->Text) * (newCentMassX - newmainPointX);
            newCentMassY = newmainPointY + StrToFloat(EditScale->Text) * (newCentMassY - newmainPointY);

            ourCircle.MakeScale(StrToFloat(EditScale->Text));
            ourCircle.Move(newCentMassX - ourCircle.GetCentre().x, newCentMassY - ourCircle.GetCentre().y);
            ClearAll();
            ourCircle.Print(PaintBox1->Canvas);
            SetActualInfo();
            
        }
        else if (ComboBoxChoose->ItemIndex == 1) {
            int newCentMassX;
            int newCentMassY;        
            newCentMassX = StrToInt(EditMassCentreX->Text);        
            newCentMassY = StrToInt(EditMassCentreY->Text);

            ourSquare.Move(newCentMassX - ourSquare.GetCentre().x, newCentMassY - ourSquare.GetCentre().y);

            int newmainPointX;
            int newmainPointY;        
            newmainPointX = StrToInt(EditMainPointX->Text);        
            newmainPointY = StrToInt(EditMainPointY->Text);
            newCentMassX = newmainPointX + StrToFloat(EditScale->Text) * (newCentMassX - newmainPointX);
            newCentMassY = newmainPointY + StrToFloat(EditScale->Text) * (newCentMassY - newmainPointY);

            ourSquare.MakeScale(StrToFloat(EditScale->Text));
            ourSquare.Move(newCentMassX - ourSquare.GetCentre().x, newCentMassY - ourSquare.GetCentre().y);
            ClearAll();
            ourSquare.Print(PaintBox1->Canvas);
        }       
     }
     catch(...){
         ShowMessage("Enter correct numbers!");
     }
     
     

     SetActualInfo();   
}
//---------------------------------------------------------------------------


