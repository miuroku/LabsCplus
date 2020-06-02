object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Shop'
  ClientHeight = 577
  ClientWidth = 803
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
    Left = 16
    Top = 16
    Width = 150
    Height = 21
    Caption = #1058#1086#1074#1072#1088#1099' '#1085#1072' '#1089#1082#1083#1072#1076#1077' :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 384
    Top = 8
    Width = 192
    Height = 23
    Caption = #1054#1078#1080#1076#1072#1077#1084#1099#1077' '#1090#1086#1074#1072#1088#1099' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 232
    Width = 133
    Height = 21
    Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1090#1086#1074#1072#1088#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 232
    Top = 232
    Width = 126
    Height = 21
    Caption = #1050#1086#1083'-'#1074#1086' '#1077#1076#1080#1085#1080#1094' :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 8
    Top = 296
    Width = 168
    Height = 23
    Caption = #1062#1077#1085#1072' '#1079#1072' '#1077#1076#1080#1085#1080#1094#1091' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 224
    Top = 296
    Width = 130
    Height = 21
    Caption = #1044#1072#1090#1072' '#1087#1086#1089#1090#1072#1074#1082#1080' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 8
    Top = 424
    Width = 181
    Height = 19
    Caption = #1050#1088#1080#1090#1077#1088#1080#1080' '#1087#1086#1080#1089#1082#1072' '#1090#1086#1074#1072#1088#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 472
    Top = 248
    Width = 195
    Height = 23
    Caption = #1048#1085#1092#1086#1088#1084#1072#1094#1080#1103' '#1086' '#1090#1086#1074#1072#1088#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object RichEdit1: TRichEdit
    Left = 8
    Top = 48
    Width = 345
    Height = 177
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    Zoom = 100
  end
  object RichEdit2: TRichEdit
    Left = 384
    Top = 48
    Width = 369
    Height = 169
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Zoom = 100
  end
  object NameEdit: TEdit
    Left = 8
    Top = 256
    Width = 177
    Height = 33
    TabOrder = 2
  end
  object AmountEdit: TEdit
    Left = 224
    Top = 256
    Width = 177
    Height = 33
    TabOrder = 3
  end
  object CostEdit: TEdit
    Left = 8
    Top = 328
    Width = 177
    Height = 33
    TabOrder = 4
  end
  object DateTimePicker: TDateTimePicker
    Left = 224
    Top = 320
    Width = 177
    Height = 41
    Date = 43984.000000000000000000
    Time = 0.481439861112448900
    TabOrder = 5
  end
  object AddButton: TButton
    Left = 8
    Top = 384
    Width = 177
    Height = 33
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1090#1086#1074#1072#1088
    TabOrder = 6
    OnClick = AddButtonClick
  end
  object SearchEdit: TEdit
    Left = 240
    Top = 424
    Width = 161
    Height = 25
    TabOrder = 7
  end
  object FindByNameButton: TButton
    Left = 8
    Top = 456
    Width = 185
    Height = 33
    Caption = #1055#1086' '#1085#1072#1079#1074#1072#1085#1080#1102
    TabOrder = 8
    OnClick = FindByNameButtonClick
  end
  object FindByCost: TButton
    Left = 8
    Top = 496
    Width = 185
    Height = 33
    Caption = #1055#1086' '#1094#1077#1085#1077
    TabOrder = 9
    OnClick = FindByCostClick
  end
  object FindByAmount: TButton
    Left = 200
    Top = 456
    Width = 161
    Height = 33
    Caption = #1055#1086' '#1082#1086#1083#1080#1095#1077#1089#1090#1074#1091
    TabOrder = 10
    OnClick = FindByAmountClick
  end
  object RichEdit3: TRichEdit
    Left = 472
    Top = 280
    Width = 273
    Height = 265
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 11
    Zoom = 100
  end
end
