
[Variables]
Searchbar-TheyCallMePapa.LeftMouseDownAction=[]
Searchbar-TheyCallMePapa.MouseOverAction=[]
Searchbar-TheyCallMePapa.MouseLeaveAction=[]
Searchbar-TheyCallMePapa.ButtonAction=[]
[Searchbar-TheyCallMePapa.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
ImageAlpha=0
[Searchbar-TheyCallMePapa]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle
SolidColor=0,0,0,0
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\ButtonColorS.png
MouseOverAction=[]
MouseLeaveAction=[]
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
Group=CustomApp[##CURRENTSECTION#]Sys | SysTray | Buttons00 | AppButton[##CURRENTSECTION#] | CustomAppButton | CustomAppColor[##CURRENTSECTION#]
