object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 530
  ClientWidth = 755
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
    Top = 32
    Width = 69
    Height = 16
    Caption = 'Mass center'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 584
    Top = 128
    Width = 33
    Height = 18
    Caption = 'Scale'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Labedsfsd: TLabel
    Left = 576
    Top = 192
    Width = 72
    Height = 18
    Caption = 'Perimeter :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object LabelPerimeter: TLabel
    Left = 664
    Top = 184
    Width = 75
    Height = 18
    Caption = '...............'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object label34: TLabel
    Left = 592
    Top = 216
    Width = 55
    Height = 18
    Caption = 'Square :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object labelSquare: TLabel
    Left = 664
    Top = 216
    Width = 80
    Height = 18
    Caption = '................'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object PaintBox1: TPaintBox
    Left = 0
    Top = 0
    Width = 521
    Height = 457
    OnMouseDown = PaintBox1MouseDown
  end
  object LabelMainPoint: TLabel
    Left = 544
    Top = 80
    Width = 61
    Height = 18
    Caption = 'MainPoint'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object btnMakeAll: TButton
    Left = 608
    Top = 304
    Width = 113
    Height = 65
    Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
    TabOrder = 0
    OnClick = btnMakeAllClick
  end
  object btnClearAll: TButton
    Left = 608
    Top = 392
    Width = 113
    Height = 73
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
    TabOrder = 1
    OnClick = btnClearAllClick
  end
  object EditMassCentreX: TEdit
    Left = 632
    Top = 24
    Width = 49
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object EditMassCentreY: TEdit
    Left = 688
    Top = 24
    Width = 49
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object EditScale: TEdit
    Left = 664
    Top = 120
    Width = 65
    Height = 24
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    TextHint = '1,0'
  end
  object ComboBoxChoose: TComboBox
    Left = 592
    Top = 256
    Width = 137
    Height = 21
    TabOrder = 5
    Text = 'Choose action '
    Items.Strings = (
      #1050#1088#1091#1075
      #1050#1074#1072#1076#1088#1072#1090)
  end
  object EditMainPointX: TEdit
    Left = 632
    Top = 72
    Width = 41
    Height = 21
    TabOrder = 6
  end
  object EditMainPointY: TEdit
    Left = 688
    Top = 72
    Width = 49
    Height = 21
    TabOrder = 7
  end
  object Timer1: TTimer
    Interval = 100
    Left = 24
    Top = 472
  end
end
