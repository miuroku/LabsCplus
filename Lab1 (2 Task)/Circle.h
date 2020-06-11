//---------------------------------------------------------------------------

#ifndef CircleH
#define CircleH
//---------------------------------------------------------------------------
#include <vcl.h>
#include "Figure.h"

class Circle : public Figure
{
    public:
        int radius = 0;
        TPoint centre;

        TPoint GetCentre(){
           return centre;
        }
        
        int GetSquare(){
            int ourresult = 3.141 * pow(radius, 2);
            return ourresult;
        }

        int GetPerimeter(){
            int ourResult;
            ourResult = 2 * 3.141 * radius;
            return ourResult;
        }

        void Move(int nx, int ny){
             // Change the centre here.
             centre.x += nx;
             centre.y += ny;
        }

        void Print(TCanvas *ourField){
             // Ellipse coordinats.
             int elX1 = centre.x - radius;
             int elY1 = centre.y - radius;
             int elX2 = centre.x + radius;
             int elY2 = centre.y + radius;

             ourField->Ellipse(elX1, elY1, elX2, elY2);
             
        }

        void MakeScale(double ourValue){
             centre.x *= ourValue;
             centre.y *= ourValue;
             radius *= ourValue;
        }
        
};


#endif
