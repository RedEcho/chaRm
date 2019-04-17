[Variables]
; PLEASE CUSTOMIZE THESE VARIABLES
;----------------------------------

; Your maximum download and upload speed.
; Only change the first number (before the '*' character) to your maximum download/upload speed in Mbps
; If you are unsure about what this is, more info here : https://docs.rainmeter.net/tips/network-skin/ §Setting the MinValue / MaxValue options
DownloadSpeed=(670 * 1048576)
UploadSpeed=(360 * 1048576)

; Chage the first number (before the '*' character) to your Windows' recycle bin size limit in GB (or Go)
; If you left it unlimited, then enter 0
RecycleBinSize=(5 * 1073741824)

; Server on which ping should be tested (URL or IPv4, default Google DNS)
PingTestServer="8.8.8.8"

; The maximum ping in ms you expect to encounter on a regular basis
MaxPing=100

; Those are the alphabetical identifiers of the hard drives you want to monitor
HardDrive1=C
HardDrive2=D

; If the text is too big or too small, you can modify those 
ClockFontSizeModifier=0
DateFontSizeModifier=0
TitleFontSizeModifier=0
DefaultFontSizeModifier=0


; YOU MAY WANT TO CHANGE THOSE
;----------------------------------

; Time in ms the color fading should take when the wallpaper changes
FadeTime=500
; Nuber of refresh per second (makes the fading smoother but is very taxing on hardware)
FPS=20
FrameTime=(1000/#FPS#)
UpdateTime=1000
UpdateDiv=(#UpdateTime# * #FPS# / 1000)

; Set to 1 to swith to greyscale (no colors)
Greyscale=0

; Wether the program will sample the all wallpaper and choose the same colors for all text (0)
; Or if it try to choose the best colors for each section of wallpaper(1)
SampleIndividualZones=0

; Police, size and weight of each text
Font_Default=Lato
Font_Hairline=Lato Hairline
ClockFontSize=((#SCREENAREAWIDTH# / 12) + #ClockFontSizeModifier#)
ClockFontWeight=100
DateFontSize=((#SCREENAREAWIDTH# / 70) + #DateFontSizeModifier#)
DateFontWeight=300
TitleFontSize=((#SCREENAREAWIDTH# / 140) + #TitleFontSizeModifier#)
TitleFontWeight=500
DefaultFontSize=((#SCREENAREAWIDTH# / 175) + #DefaultFontSizeModifier#)
DefaultFontWeight=500
BarLegth=(#SCREENAREAWIDTH# / 9)
BarHeight=(#SCREENAREAHEIGHT# / 180)
ColorError=FF0000EE

;Those are used to fade Grey stuff of the skin
TargetGreyTextColor=FFFFFFC8
TargetGreyBarColor=FFFFFF32