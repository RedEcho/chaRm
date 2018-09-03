[Variables]
@Include2=#ROOTCONFIGPATH#Settings.inc
;Those are used to fade Grey stuff of the skin
TargetGreyTextColor="FFFFFFC8"
TargetGreyBarColor="FFFFFF32"

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
Source=[ChamColor_FG1]FF
Timestep=24

[DesktopColor_FG2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=[ChamColor_FG2]FF
Timestep=24

[ChamColor_L]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Luminance
IfAboveValue=0.5
IfAboveAction=[!SetVariable TargetGreyTextColor "000000C8"][!SetVariable TargetGreyBarColor "00000064"]
IfBelowValue=0.5
IfBelowAction=[!SetVariable TargetGreyTextColor "FFFFFFC8"][!SetVariable TargetGreyBarColor "FFFFFF32"]

[GreyTextColor]
Measure=Script
ScriptFile=#@#Fade.lua
Source=#TargetGreyTextColor#
Timestep=24

[GreyBarColor]
Measure=Script
ScriptFile=#@#Fade.lua
Source=#TargetGreyBarColor#
Timestep=24

; Styles Used in the skins
;-------------------------

[Style_Clock_BW]
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=[GreyTextColor]
FontWeight=#ClockFontWeight#
AntiAlias=1

[Style_Clock_C]
DynamicVariables=1
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=[DesktopColor_FG1]
FontWeight=#ClockFontWeight#
AntiAlias=1

[Style_Date]
FontFace=#Font_Default#
FontSize=#DateFontSize#
FontColor=[GreyTextColor]
FontWeight=#DateFontWeight#
AntiAlias=1

[Style_Title]
FontFace=#Font_Default#
FontSize=#TitleFontSize#
FontColor=[GreyTextColor]
FontWeight=#TitleFontWeight#
AntiAlias=1

[Style_Default_BW]
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[GreyTextColor]
FontWeight=#DefaultFontWeight#
AntiAlias=1

[Style_Default_FG1]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_L1]
FontWeight=#DefaultFontWeight#
AntiAlias=1

[Style_Default_FG2]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_L2]
FontWeight=#DefaultFontWeight#
AntiAlias=1
