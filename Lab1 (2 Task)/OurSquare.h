//---------------------------------------------------------------------------

#ifndef OurSquareH
#define OurSquareH
//---------------------------------------------------------------------------
#include "Figure.h"

class MySquare : public Figure
{
    public :
        TPoint centre;
        int height = 0;
        int width = 0;
        TPoint pointBegin;
        TPoint pointEnd;

        TPoint GetCentre(){
           centre.x = width/2;
           centre.y = height/2;
           return centre;
        }
        
        int GetSquare(){
            int ourresult = height * width;
            return ourresult;
        }

        int GetPerimeter(){
            int ourResult;
            ourResult = (height*2) + (width*2);
            return ourResult;
        }

        void Move(int nx, int ny){
             // Change the centre here.
             centre.x += nx;
             centre.y += ny;
        }

        void Print(TCanvas *ourField){             
             
             ourField->Rectangle(pointBegin.x, pointBegin.y, pointEnd.x, pointEnd.y);    
        }

        void MakeScale(double ourValue){
             centre.x *= ourValue;
             centre.y *= ourValue;
             pointBegin.x *= ourValue;
             pointBegin.y *= ourValue;
             pointEnd.x *= ourValue;;
             pointEnd.y *= ourValue;
             
             width *= ourValue;
             height *= ourValue;
        }
      
};

#endif
