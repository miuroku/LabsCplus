//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TTimer *Timer1;
    TButton *btnMakeAll;
    TButton *btnClearAll;
    TLabel *Label1;
    TEdit *EditMassCentreX;
    TEdit *EditMassCentreY;
    TLabel *Label2;
    TEdit *EditScale;
    TLabel *Labedsfsd;
    TLabel *LabelPerimeter;
    TLabel *label34;
    TLabel *labelSquare;
    TComboBox *ComboBoxChoose;
    TPaintBox *PaintBox1;
    TLabel *LabelMainPoint;
    TEdit *EditMainPointX;
    TEdit *EditMainPointY;
    void __fastcall btnClearAllClick(TObject *Sender);
    void __fastcall PaintBox1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X,
          int Y);
    void __fastcall btnMakeAllClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
