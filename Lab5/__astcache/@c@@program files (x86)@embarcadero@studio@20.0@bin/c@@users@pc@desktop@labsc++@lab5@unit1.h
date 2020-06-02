//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Gauges.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TGauge *Gauge1;
    TLabel *LabelCurrentElement;
    TButton *ButtonAddElement;
    TButton *ButtonNextElement;
    TButton *ButtonDeleteElement;
    TButton *ButtonPreviousElement;
    TListBox *ListBox1;
    void __fastcall ButtonAddElementClick(TObject *Sender);
    void __fastcall ButtonDeleteElementClick(TObject *Sender);
    void __fastcall ButtonNextElementClick(TObject *Sender);
    void __fastcall ButtonPreviousElementClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
