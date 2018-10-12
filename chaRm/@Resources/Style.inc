[Variables]
@Include2=#ROOTCONFIGPATH#Settings.inc

; Get most important colors from the wallpaper using chameleon plugin.
; Also fades between colors when the wallpaper changes
;----------------------------------------------------------------------

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
UpdateDivider=1

[ChamColor_FG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground1
UpdateDivider=1

[ChamColor_FG2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground2
UpdateDivider=1

[DesktopColor_FG1]
Measure=Script
ScriptFile=#@#Fade.lua
Source=[ChamColor_FG1]FF
Greyscale=#Greyscale#
Timestep=50
OnChangeAction=[!UpdateMeterGroup GroupColorFG1][!RedrawGroup GroupColorFG1][!UpdateMeasureGroup GroupColorFG1][!RedrawGroup GroupColorFG1]
UpdateDivider=1

[DesktopColor_FG2]
Measure=Script
ScriptFile=#@#Fade.lua
Source=[ChamColor_FG2]FF
Greyscale=#Greyscale#
Timestep=50
OnChangeAction=[!UpdateMeterGroup "GroupColorFG2"][!RedrawGroup "GroupColorFG2"][!UpdateMeasureGroup GroupColorFG2][!RedrawGroup GroupColorFG2]
UpdateDivider=1

[ChamColor_L]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Luminance
IfAboveValue=0.5
IfAboveAction=[!SetVariable TargetGreyTextColor "000000C8"][!SetVariable TargetGreyBarColor "00000032"]
IfBelowValue=0.5
IfBelowAction=[!SetVariable TargetGreyTextColor "FFFFFFC8"][!SetVariable TargetGreyBarColor "FFFFFF32"]
UpdateDivider=1

[GreyTextColor]
Measure=Script
ScriptFile=#@#Fade.lua
Source=#TargetGreyTextColor#
Timestep=50
OnChangeAction=[!UpdateMeterGroup GroupColorGreyText][!RedrawGroup GroupColorGreyText][!UpdateMeasureGroup GroupColorGreyText][!RedrawGroup GroupColorGreyText]
UpdateDivider=1

[GreyBarColor]
Measure=Script
ScriptFile=#@#Fade.lua
Source=#TargetGreyBarColor#
Timestep=50
OnChangeAction=[!UpdateMeterGroup GroupColorGreyBar][!RedrawGroup GroupColorGreyBar][!UpdateMeasureGroup GroupColorGreyBar][!RedrawGroup GroupColorGreyBar]
UpdateDivider=1

; Styles Used in the skins
;-------------------------


; CLOCK 'N DATE ---------------------------------------------------
;------------------------------------------------------------------
[Style_Clock_BW]
DynamicVariables=1
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=[GreyTextColor]
FontWeight=#ClockFontWeight#
AntiAlias=1
Group=GroupColorGreyText

[Style_Clock_C]
DynamicVariables=1
DynamicVariables=1
FontFace=#Font_Hairline#
FontSize=#ClockFontSize#
FontColor=[DesktopColor_FG1]
FontWeight=#ClockFontWeight#
AntiAlias=1
Group=GroupColorFG1

[Style_Date]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DateFontSize#
FontColor=[GreyTextColor]
FontWeight=#DateFontWeight#
AntiAlias=1
Group=GroupColorGreyText

; TITLE -----------------------------------------------------------
;------------------------------------------------------------------
[Style_Title]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#TitleFontSize#
FontColor=[GreyTextColor]
FontWeight=#TitleFontWeight#
AntiAlias=1
Group=GroupColorGreyText

[Style_Title_Left]
StringAlign=LEFT
X=( - #TitleFontSize# / 4)
Y=0

[Style_Title_Right]
StringAlign=RIGHT
X=(#BarLegth# + (#TitleFontSize# / 4) )
Y=0

; DEFAULT TEXT ----------------------------------------------------
;------------------------------------------------------------------
[Style_Default_BW]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[GreyTextColor]
FontWeight=#DefaultFontWeight#
AntiAlias=1
Group=GroupColorGreyText

[Style_Default_FG1]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_FG1]
FontWeight=#DefaultFontWeight#
AntiAlias=1
Group=GroupColorFG1

[Style_Default_FG2]
DynamicVariables=1
FontFace=#Font_Default#
FontSize=#DefaultFontSize#
FontColor=[DesktopColor_FG2]
FontWeight=#DefaultFontWeight#
AntiAlias=1
Group=GroupColorFG2

; METER BAR -------------------------------------------------------
;------------------------------------------------------------------
[Style_Meter_Bar]
DynamicVariables=1
X=0
Y=R
W=#BarLegth#
H=#BarHeight#
BarOrientation=HORIZONTAL

[Style_Static_Bar]
DynamicVariables=1
X=0
Y=R
W=#BarLegth#
H=#BarHeight#
SolidColor=[GreyBarColor]
Group=GroupColorGreyBar
