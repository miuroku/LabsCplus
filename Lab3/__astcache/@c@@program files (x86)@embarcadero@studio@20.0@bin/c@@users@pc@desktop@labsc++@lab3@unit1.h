//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TRichEdit *RichEdit1;
    TLabel *Label2;
    TRichEdit *RichEdit2;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label6;
    TEdit *NameEdit;
    TEdit *AmountEdit;
    TEdit *CostEdit;
    TDateTimePicker *DateTimePicker;
    TButton *AddButton;
    TEdit *SearchEdit;
    TButton *FindByNameButton;
    TButton *FindByCost;
    TButton *FindByAmount;
    TLabel *Label7;
    TRichEdit *RichEdit3;
    TLabel *Label8;
    void __fastcall AddButtonClick(TObject *Sender);
    void __fastcall FindByNameButtonClick(TObject *Sender);
    void __fastcall FindByCostClick(TObject *Sender);
    void __fastcall FindByAmountClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
