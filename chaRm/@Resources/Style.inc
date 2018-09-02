[Variables]
@Include2=#ROOTCONFIGPATH#Settings.inc

; Get most important colors from the wallpaper using chameleon plugin.
; Also fades between colors when the wallpaper changes
;----------------------------------------------------------------------

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop

[ChamColor_FG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground1

[ChamColor_FG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground2

[DesktopColor_FG1]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamColor_FG1
Timestep=5

[DesktopColor_FG2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=ChamColor_FG2
Timestep=5

[ChamColor_L]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Luminance
IfAboveValue=0.5
IfAboveAction=[!SetVariable GreyTextColor "0,0,0,200"][!SetVariable GreyBarColor 0,0,0,50]
IfBelowValue=0.5
IfBelowAction=[!SetVariable GreyTextColor "255,255,255,200"][!SetVariable GreyBarColor "255,255,255,50"]


; Styles Used in the skins
;-------------------------

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
FontColor=[DesktopColor_FG1]FF
FontWeight=#ClockFontWeight#
AntiAlias=1

[Style_Date]
FontFace=#Font_Default#
FontSize=#DateFontSize#
FontColor=#GreyTextColor#
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
