object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1057#1090#1091#1076#1077#1085#1090#1099'\'
  ClientHeight = 550
  ClientWidth = 861
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  DesignSize = (
    861
    550)
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 56
    Width = 48
    Height = 16
    Anchors = [akLeft]
    Caption = #1060'.'#1048'.'#1054'. :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 16
    Top = 160
    Width = 113
    Height = 17
    Anchors = [akLeft]
    Caption = #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1089#1090#1100' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 16
    Top = 200
    Width = 59
    Height = 17
    Anchors = [akLeft]
    Caption = #1043#1088#1091#1087#1087#1072' : '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 17
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 16
    Top = 248
    Width = 227
    Height = 20
    Anchors = [akLeft]
    Caption = #1054#1094#1077#1085#1082#1080' : ('#1057#1088#1077#1076#1085#1080#1077' '#1079#1072' '#1089#1077#1084#1077#1089#1090#1088')'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label5: TLabel
    Left = 24
    Top = 288
    Width = 40
    Height = 14
    Anchors = [akLeft]
    Caption = #1052#1072#1090#1077#1084'.'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 14
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label6: TLabel
    Left = 24
    Top = 336
    Width = 45
    Height = 14
    Anchors = [akLeft]
    Caption = #1055#1088#1086#1075#1088'-'#1077
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 14
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label7: TLabel
    Left = 24
    Top = 384
    Width = 68
    Height = 14
    Anchors = [akLeft]
    Caption = #1060#1080#1083#1086#1089#1086#1092#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 14
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label8: TLabel
    Left = 8
    Top = 8
    Width = 201
    Height = 13
    Anchors = [akLeft]
    Caption = '('#1086#1090#1084#1077#1090#1100' '#1077#1089#1083#1080' '#1085#1072#1076#1086' '#1076#1086#1073#1072#1074#1080#1090#1100' '#1089#1090#1091#1076#1077#1085#1090#1072')'
  end
  object labelff23: TLabel
    Left = 224
    Top = 352
    Width = 91
    Height = 16
    Caption = #1057#1088#1077#1076#1085#1080#1081' '#1073#1072#1083#1083' :'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object LabelAverageMark: TLabel
    Left = 232
    Top = 376
    Width = 48
    Height = 13
    Caption = '............'
  end
  object CheckBoxAddStudent: TCheckBox
    Left = 8
    Top = 24
    Width = 169
    Height = 25
    Anchors = [akLeft]
    Caption = #1044#1086#1073#1072#1074#1083#1077#1085#1080#1077' '#1057#1090#1091#1076#1077#1085#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    OnClick = CheckBoxAddStudentClick
  end
  object EditName: TEdit
    Left = 72
    Top = 56
    Width = 225
    Height = 21
    Anchors = [akLeft]
    TabOrder = 1
  end
  object EditSpecialty: TEdit
    Left = 128
    Top = 160
    Width = 121
    Height = 21
    Anchors = [akLeft]
    TabOrder = 2
  end
  object EditGroup: TEdit
    Left = 128
    Top = 200
    Width = 121
    Height = 21
    Anchors = [akLeft]
    TabOrder = 3
  end
  object RadioGroupTypeOfTraining: TRadioGroup
    Left = 8
    Top = 96
    Width = 289
    Height = 49
    Anchors = [akLeft]
    Caption = #1060#1086#1088#1084#1072' '#1086#1073#1091#1095#1077#1085#1080#1103
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 17
    Font.Name = 'Tahoma'
    Font.Style = []
    Items.Strings = (
      #1055#1083#1072#1090#1085#1072#1103' '
      #1041#1077#1089#1087#1083#1072#1090#1085#1072#1103)
    ParentFont = False
    TabOrder = 4
  end
  object EditMath: TEdit
    Left = 104
    Top = 280
    Width = 57
    Height = 21
    Anchors = [akLeft]
    TabOrder = 5
  end
  object EditProga: TEdit
    Left = 104
    Top = 328
    Width = 57
    Height = 21
    Anchors = [akLeft]
    TabOrder = 6
  end
  object EditPhilosophy: TEdit
    Left = 104
    Top = 376
    Width = 57
    Height = 21
    Anchors = [akLeft]
    TabOrder = 7
  end
  object ButtonAddStudent: TButton
    Left = 16
    Top = 424
    Width = 97
    Height = 41
    Anchors = [akLeft]
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 8
    OnClick = ButtonAddStudentClick
  end
  object ButtonRemoveStudent: TButton
    Left = 16
    Top = 480
    Width = 97
    Height = 41
    Anchors = [akLeft]
    Caption = #1059#1076#1072#1083#1080#1090#1100
    TabOrder = 9
    OnClick = ButtonRemoveStudentClick
  end
  object ButtonOpenFile: TButton
    Left = 168
    Top = 424
    Width = 99
    Height = 41
    Anchors = [akLeft]
    Caption = #1054#1090#1082#1088#1099#1090#1100' '#1060'.'
    TabOrder = 10
    OnClick = ButtonOpenFileClick
  end
  object ButtonSaveDialog: TButton
    Left = 168
    Top = 480
    Width = 97
    Height = 41
    Anchors = [akLeft]
    Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1060'.'
    TabOrder = 11
    OnClick = ButtonSaveDialogClick
  end
  object ListBox1: TListBox
    Left = 368
    Top = 224
    Width = 487
    Height = 305
    Anchors = [akLeft, akTop, akRight, akBottom]
    ItemHeight = 13
    TabOrder = 12
    OnClick = ListBox1Click
  end
  object Panel1: TPanel
    Left = 368
    Top = 8
    Width = 487
    Height = 201
    Anchors = [akLeft, akTop, akRight]
    TabOrder = 13
    object Label9: TLabel
      Left = 8
      Top = 0
      Width = 173
      Height = 17
      Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1086#1090#1086#1073#1088#1072#1078#1077#1085#1080#1103' :'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 17
      Font.Name = 'Tahoma'
      Font.Style = []
      ParentFont = False
    end
    object Label10: TLabel
      Left = 168
      Top = 136
      Width = 229
      Height = 13
      Caption = '('#1050#1083#1102#1095' '#1087#1086#1080#1089#1082#1072' '#1074' '#1079#1072#1074#1080#1089#1080#1084#1086#1089#1090#1080' '#1086#1090' '#1089#1086#1088#1090#1080#1088#1086#1074#1082#1080' )'
    end
    object RadioGroupTypeOfTraining2: TRadioGroup
      Left = 8
      Top = 24
      Width = 401
      Height = 41
      Caption = #1060#1086#1088#1084#1072' '#1086#1073#1091#1095#1077#1085#1080#1103' :'
      Columns = 3
      Items.Strings = (
        #1055#1083#1072#1090#1085#1072#1103
        #1041#1077#1089#1087#1083#1072#1090#1085#1072#1103
        #1054#1073#1077)
      TabOrder = 0
    end
    object ComboBoxSort: TComboBox
      Left = 8
      Top = 160
      Width = 145
      Height = 21
      TabOrder = 1
      Text = #1057#1086#1088#1090#1080#1088#1086#1074#1082#1072' '#1087#1086' :'
      Items.Strings = (
        #1060#1048#1054
        #1043#1088#1091#1087#1087#1072
        #1057#1088'.'#1073#1072#1083#1083
        #1057#1087#1077#1094#1080#1072#1083#1100#1085#1086#1090#1100)
    end
    object EditSortParameter: TEdit
      Left = 176
      Top = 160
      Width = 169
      Height = 21
      TabOrder = 2
    end
    object btnClearSortList: TButton
      Left = 424
      Top = 152
      Width = 59
      Height = 33
      Caption = #1057#1073#1088#1086#1089#1080#1090#1100
      TabOrder = 3
      OnClick = btnClearSortListClick
    end
    object btnSortList: TButton
      Left = 352
      Top = 152
      Width = 67
      Height = 33
      Caption = #1055#1088#1080#1084#1077#1085#1080#1090#1100
      TabOrder = 4
      OnClick = btnSortListClick
    end
    object RadioGroupAverageMark: TRadioGroup
      Left = 8
      Top = 64
      Width = 401
      Height = 73
      Caption = #1073#1072#1083#1083
      Items.Strings = (
        #1055#1086' '#1074#1086#1079#1088#1086#1089#1090#1072#1085#1080#1102
        #1055#1086' '#1091#1073#1099#1074#1072#1085#1080#1102
        #1053#1080#1082#1072#1082)
      TabOrder = 5
    end
  end
  object OpenDialog1: TOpenDialog
    Left = 312
    Top = 424
  end
  object SaveDialog1: TSaveDialog
    Left = 312
    Top = 480
  end
  object Timer1: TTimer
    Left = 320
    Top = 16
  end
end
