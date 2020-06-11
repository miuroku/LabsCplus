//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TButton *AddButton;
    TEdit *ADFEdit;
    TButton *DelButton;
    TButton *FindButton;
    TButton *PrintButton;
    TButton *MostRepeatedButton;
    TLabel *MRKeyLabel;
    TMemo *Memo;
    TLabel *Label1;
    void __fastcall AddButtonClick(TObject *Sender);
    void __fastcall DelButtonClick(TObject *Sender);
    void __fastcall FindButtonClick(TObject *Sender);
    void __fastcall PrintButtonClick(TObject *Sender);
    void __fastcall MostRepeatedButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
