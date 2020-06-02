object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1087#1080#1089#1086#1082' '#1082#1086#1083#1100#1094#1077#1074#1086#1081
  ClientHeight = 530
  ClientWidth = 604
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
    Left = 168
    Top = 8
    Width = 191
    Height = 28
    Caption = #1050#1086#1083#1100#1094#1077#1074#1086#1081' '#1089#1087#1080#1089#1086#1082
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -23
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 392
    Top = 16
    Width = 201
    Height = 21
    Caption = #1055#1086#1083#1086#1078#1077#1085#1080#1077' '#1090#1077#1082#1091#1097#1077#1075#1086' '#1101#1083'-'#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMenuHighlight
    Font.Height = -17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 448
    Top = 168
    Width = 131
    Height = 23
    Caption = #1058#1077#1082#1091#1097#1080#1081' '#1101#1083'-'#1090' :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clMenuHighlight
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Gauge1: TGauge
    Left = 480
    Top = 48
    Width = 100
    Height = 100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clHotLight
    Font.Height = 19
    Font.Name = 'Tahoma'
    Font.Style = []
    Kind = gkPie
    MaxValue = 20
    ParentFont = False
    Progress = 0
  end
  object LabelCurrentElement: TLabel
    Left = 488
    Top = 208
    Width = 73
    Height = 23
    Caption = #1053#1080#1082#1072#1082#1086#1081
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ButtonAddElement: TButton
    Left = 8
    Top = 72
    Width = 137
    Height = 57
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 0
    OnClick = ButtonAddElementClick
  end
  object ButtonNextElement: TButton
    Left = 8
    Top = 216
    Width = 137
    Height = 65
    Caption = #1057#1083#1077#1076#1091#1102#1097#1080#1081' '#1101#1083'-'#1090
    TabOrder = 1
    OnClick = ButtonNextElementClick
  end
  object ButtonDeleteElement: TButton
    Left = 8
    Top = 144
    Width = 137
    Height = 57
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 2
    OnClick = ButtonDeleteElementClick
  end
  object ButtonPreviousElement: TButton
    Left = 8
    Top = 304
    Width = 137
    Height = 65
    Caption = #1055#1088#1077#1076#1099#1076#1091#1097#1080#1081' '#1101#1083'-'#1090
    TabOrder = 3
    OnClick = ButtonPreviousElementClick
  end
  object ListBox1: TListBox
    Left = 160
    Top = 64
    Width = 273
    Height = 377
    ItemHeight = 13
    TabOrder = 4
  end
end
