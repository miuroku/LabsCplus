object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 406
  ClientWidth = 507
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object MRKeyLabel: TLabel
    Left = 360
    Top = 352
    Width = 3
    Height = 13
  end
  object Label1: TLabel
    Left = 352
    Top = 184
    Width = 3
    Height = 13
  end
  object Memo: TMemo
    Left = 24
    Top = 32
    Width = 289
    Height = 329
    Lines.Strings = (
      'Memo')
    TabOrder = 0
  end
  object AddButton: TButton
    Left = 344
    Top = 80
    Width = 129
    Height = 25
    Caption = 'Add'
    TabOrder = 1
    OnClick = AddButtonClick
  end
  object ADFEdit: TEdit
    Left = 344
    Top = 32
    Width = 129
    Height = 33
    TabOrder = 2
  end
  object DelButton: TButton
    Left = 344
    Top = 112
    Width = 129
    Height = 25
    Caption = 'Delete'
    TabOrder = 3
    OnClick = DelButtonClick
  end
  object FindButton: TButton
    Left = 344
    Top = 144
    Width = 129
    Height = 25
    Caption = 'Find'
    TabOrder = 4
    OnClick = FindButtonClick
  end
  object PrintButton: TButton
    Left = 344
    Top = 224
    Width = 129
    Height = 41
    Caption = 'Refresh'
    TabOrder = 5
    OnClick = PrintButtonClick
  end
  object MostRepeatedButton: TButton
    Left = 344
    Top = 296
    Width = 129
    Height = 41
    Caption = 'Most Repeated key'
    TabOrder = 6
    OnClick = MostRepeatedButtonClick
  end
end
