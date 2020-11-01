//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TStringGrid *StringGrid1;
    TLabel *Label1;
    TLabel *Label2;
    TLabel *Label3;
    TEdit *FEdit;
    TEdit *KeyEdit;
    TButton *AddButton;
    TButton *DeleteButton;
    TButton *PreorderButton;
    TButton *PostorderButton;
    TButton *KeyIncreaseButton;
    TTreeView *TreeView1;
    TLabel *Label4;
    TLabel *AmountOfLeftNodesLabel;
    TMemo *Memo1;
    TLabel *Label6;
    TLabel *ValueByKeyLabel;
    TButton *ShowValueByKeyButton;
    TButton *ShowAmountOfLeftNodesButton;
    void __fastcall AddButtonClick(TObject *Sender);
    void __fastcall DeleteButtonClick(TObject *Sender);
    void __fastcall ShowValueByKeyButtonClick(TObject *Sender);
    void __fastcall ShowAmountOfLeftNodesButtonClick(TObject *Sender);
    void __fastcall PreorderButtonClick(TObject *Sender);
    void __fastcall PostorderButtonClick(TObject *Sender);
    void __fastcall KeyIncreaseButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
