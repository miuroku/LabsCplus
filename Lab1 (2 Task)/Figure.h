//---------------------------------------------------------------------------

#ifndef FigureH
#define FigureH
//---------------------------------------------------------------------------
#include <vcl.h>
#include <Winuser.h.>

class Figure
{
    public:
        TPoint centre;
        virtual TPoint GetCentre() = 0;        
        virtual void Print(TCanvas *ourfield) = 0;
        virtual int GetSquare() = 0;
        virtual int GetPerimeter() = 0;
        virtual void MakeScale(double ourScale) = 0;
        virtual void Move(int nx, int ny) = 0;                   
           
};

double DistanceBetweenPoints(TPoint a, TPoint b) {
    double result = sqrt(pow(b.y - a.y, 2) + pow(b.x - a.x , 2));
	return result;
}

#endif
