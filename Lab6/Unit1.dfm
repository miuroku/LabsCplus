object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Tree'
  ClientHeight = 564
  ClientWidth = 756
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 544
    Top = 8
    Width = 123
    Height = 24
    Caption = 'Information : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 264
    Top = 24
    Width = 43
    Height = 23
    Caption = 'Key :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 384
    Top = 88
    Width = 59
    Height = 23
    Caption = 'Value :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 192
    Width = 182
    Height = 23
    Caption = 'Amount of left nodes:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object AmountOfLeftNodesLabel: TLabel
    Left = 208
    Top = 192
    Width = 49
    Height = 21
    Caption = 'Wait...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMenuHighlight
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 8
    Top = 80
    Width = 96
    Height = 19
    Caption = 'Value by key:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ValueByKeyLabel: TLabel
    Left = 128
    Top = 80
    Width = 49
    Height = 21
    Caption = 'Wait...'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMenuHighlight
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object StringGrid1: TStringGrid
    Left = 544
    Top = 48
    Width = 201
    Height = 257
    ColCount = 2
    DefaultColWidth = 100
    RowCount = 10
    TabOrder = 0
  end
  object FEdit: TEdit
    Left = 384
    Top = 128
    Width = 129
    Height = 21
    TabOrder = 1
  end
  object KeyEdit: TEdit
    Left = 256
    Top = 56
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object AddButton: TButton
    Left = 384
    Top = 176
    Width = 121
    Height = 49
    Caption = 'Add'
    TabOrder = 3
    OnClick = AddButtonClick
  end
  object DeleteButton: TButton
    Left = 384
    Top = 240
    Width = 121
    Height = 49
    Caption = 'Delete'
    TabOrder = 4
    OnClick = DeleteButtonClick
  end
  object Memo1: TMemo
    Left = 544
    Top = 320
    Width = 201
    Height = 233
    Lines.Strings = (
      'Memo1')
    TabOrder = 5
  end
  object PreorderButton: TButton
    Left = 416
    Top = 344
    Width = 113
    Height = 41
    Caption = 'Preorder'
    TabOrder = 6
    OnClick = PreorderButtonClick
  end
  object PostorderButton: TButton
    Left = 416
    Top = 408
    Width = 113
    Height = 41
    Caption = 'Postorder'
    TabOrder = 7
    OnClick = PostorderButtonClick
  end
  object KeyIncreaseButton: TButton
    Left = 416
    Top = 464
    Width = 113
    Height = 41
    Caption = 'By Key Increase'
    TabOrder = 8
    OnClick = KeyIncreaseButtonClick
  end
  object TreeView1: TTreeView
    Left = 32
    Top = 304
    Width = 249
    Height = 233
    Indent = 19
    TabOrder = 9
  end
  object ShowValueByKeyButton: TButton
    Left = 8
    Top = 24
    Width = 129
    Height = 49
    Caption = 'ShowValueByKeyButton'
    TabOrder = 10
    OnClick = ShowValueByKeyButtonClick
  end
  object ShowAmountOfLeftNodesButton: TButton
    Left = 8
    Top = 120
    Width = 169
    Height = 57
    Caption = 'ShowAmountOfLeftNodesButton'
    TabOrder = 11
    OnClick = ShowAmountOfLeftNodesButtonClick
  end
end
