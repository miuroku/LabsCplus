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

class MyRectangle{

      public:
             int x1, y1, x2, y2;
             int height, width;

      MyRectangle(int x, int y, int x2, int y2, int h, int w) : x1(x),y1(y),x2(x2),y2(y2),height(h),width(w){
            x1 = x, y1 = y, this->x2 = x2, this->y2 = y2;
            height = h, width = w;                          
      }
      MyRectangle():MyRectangle(400,600,220,400,200,180){      

      }

      void Show(){
            int xtmp, ytmp;
            xtmp = x1, ytmp = y1;
            Form1->Canvas->Pen->Color = clBlack;
            Form1->Canvas->MoveTo(x1,y1);            
            ytmp -= height;
            Form1->Canvas->LineTo(xtmp,ytmp);
            xtmp -= width;
            Form1->Canvas->LineTo(xtmp,ytmp);
            ytmp += height;
            Form1->Canvas->LineTo(xtmp,ytmp);            
            xtmp += width;
            Form1->Canvas->LineTo(xtmp,ytmp);
      }

      void Move(int x, int y){
          x1 += x;
          y1 += y;
      }

};


class MyElevator : public MyRectangle {
            
      public:
             int LineWidth = 6;
             //MyRectangle tempRect;                
             
             void ShowRope(){
                  int xbegin = 310, ybegin = 0;
                  int xto = xbegin, yto = y1;
                  yto -= height;

                  Form1->Canvas->Pen->Color = clBlack;
                  Form1->Canvas->MoveTo(xbegin,ybegin);
                  Form1->Canvas->LineTo(xto,yto);
             }

             void ShowMan(){
                  int xt, yt;
                  xt = 310, yt = y1 - 100;
                  
                  Form1->Canvas->Pen->Color = clBlack;
                  Form1->Canvas->MoveTo(xt,yt);
                  yt += 50;
                  Form1->Canvas->LineTo(xt,yt);
                  xt -= 45, yt += 50;
                  Form1->Canvas->LineTo(xt,yt);
                  xt += 90;
                  Form1->Canvas->MoveTo(xt,yt); 
                  xt -= 45, yt -= 50;
                  Form1->Canvas->LineTo(xt,yt);
                  xt += 45, yt -= 140;
                  Form1->Canvas->Ellipse(xt,yt,(xt-90),(yt+90));
                  yt += 140;
                  Form1->Canvas->MoveTo(xt,yt);
                  xt -= 45, yt -= 50;
                  Form1->Canvas->LineTo(xt,yt);
                  xt -= 45, yt += 50;
                  Form1->Canvas->LineTo(xt,yt);
             }
             
             void Show(){
                  Form1->Canvas->Pen->Color = clBlack;
                  Form1->Canvas->Pen->Width = LineWidth;

                  MyRectangle::Show();
                  ShowMan();
                  ShowRope();
             }

             
};

MyElevator* ElevObj = new MyElevator();


void ReDraw(){
     
	Form1->Canvas->Pen->Color = clWhite;
	Form1->Canvas->Brush->Color = clWhite;
	Form1->Canvas->Rectangle(0,0,1920,1080);

    ElevObj->Show();
}                       

//---------------------------------------------------------------------------
void __fastcall TForm1::ElevatorTrackBarChange(TObject *Sender)
{
     
     //1. Изменяем значения y1
     //                 т.е. в зависимости от ElevatorTrackBar->Position
     //                 т.е. ElevObj->y1 = ...  
     //           
     //2. Перерисовываем обьект ElevObj

     ElevObj->y1 = 600 - ElevatorTrackBar->Position;
     
     ReDraw();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
     Timer1->Enabled = false;
     //ElevatorTrackBar->Position = ElevatorTrackBar->Max;

     ReDraw();    
}
//---------------------------------------------------------------------------
