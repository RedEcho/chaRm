[Variables]
@Include2=#ROOTCONFIGPATH#Settings.inc

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop

[ChamColor_L1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light1

[ChamColor_L2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Light2

[ChamColor_L3]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Average

[DesktopColor_L1]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamColor_L1
Timestep=5

[DesktopColor_L2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamColor_L2
Timestep=5

[DesktopColor_L3]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamColor_L3
Timestep=5

[Style_Clock_BW]
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=#GreyTextColor#
FontWeight=#ClockFontWeight#
AntiAlias=1

[Style_Clock_C]
DynamicVariables=1
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=[DesktopColor_L1]FF
FontWeight=#ClockFontWeight#
AntiAlias=1

[Style_Date_BW]
FontFace=#Font_Default#
FontSize=#DateFontSize#
FontColor=#GreyTextColor#
FontWeight=#DateFontWeight#
AntiAlias=1

[Style_Date_C]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DateFontSize#
FontColor=[DesktopColor_L1]FF
FontWeight=#DateFontWeight#
AntiAlias=1

[Style_Title]
FontFace=#Font_Default#
FontSize=#TitleFontSize#
FontColor=#GreyTextColor#
FontWeight=#TitleFontWeight#
AntiAlias=1

[Style_Default_BW]
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=#GreyTextColor#
FontWeight=#DefaultFontWeight#
AntiAlias=1

[Style_Default_FG1]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_L1]FF
FontWeight=#DefaultFontWeight#
AntiAlias=1

[Style_Default_FG2]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_L2]FF
FontWeight=#DefaultFontWeight#
AntiAlias=1