EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr USLetter 11000 8500
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L KeyboardMasterList:ProMicro-kbd U?
U 1 1 6295495A
P 1750 1650
F 0 "U?" H 1750 2487 60  0000 C CNN
F 1 "ProMicro-kbd" H 1750 2381 60  0000 C CNN
F 2 "" H 1850 600 60  0000 C CNN
F 3 "" H 1850 600 60  0000 C CNN
	1    1750 1650
	1    0    0    -1  
$EndComp
$Comp
L KeyboardMasterList:MX-NoLED-MX_Alps_Hybrid MX?
U 1 1 6295837A
P 1950 3000
F 0 "MX?" H 1983 3223 60  0000 C CNN
F 1 "MX-NoLED-MX_Alps_Hybrid" H 1983 3149 20  0000 C CNN
F 2 "" H 1325 2975 60  0001 C CNN
F 3 "" H 1325 2975 60  0001 C CNN
	1    1950 3000
	1    0    0    -1  
$EndComp
$Comp
L KeyboardMasterList:OLED-kbd OL?
U 1 1 629590E0
P 3700 1350
F 0 "OL?" H 4328 1419 51  0000 L CNN
F 1 "OLED-kbd" H 4328 1329 47  0000 L CNN
F 2 "" H 3700 1450 60  0001 C CNN
F 3 "" H 3700 1450 60  0001 C CNN
	1    3700 1350
	1    0    0    -1  
$EndComp
$Comp
L KeyboardMasterList:MX-NoLED-MX_Alps_Hybrid MX?
U 1 1 62955C72
P 1500 3000
F 0 "MX?" H 1533 3223 60  0000 C CNN
F 1 "MX-NoLED-MX_Alps_Hybrid" H 1533 3149 20  0000 C CNN
F 2 "" H 875 2975 60  0001 C CNN
F 3 "" H 875 2975 60  0001 C CNN
	1    1500 3000
	1    0    0    -1  
$EndComp
Text GLabel 1050 1500 0    50   Input ~ 0
SDA
Text GLabel 1050 1600 0    50   Input ~ 0
SCL
Text GLabel 2450 1400 2    50   Input ~ 0
VCC
Text GLabel 2450 1200 2    50   Input ~ 0
GND
Text GLabel 2950 1100 0    50   Input ~ 0
SDA
Text GLabel 2950 1250 0    50   Input ~ 0
SCL
Text GLabel 2950 1550 0    50   Input ~ 0
GND
Text GLabel 2950 1400 0    50   Input ~ 0
VCC
Wire Wire Line
	1900 3150 1450 3150
Connection ~ 1450 3150
Wire Wire Line
	1450 3150 1250 3150
Wire Wire Line
	1650 2950 1650 2700
Wire Wire Line
	2100 2950 2100 2700
Text GLabel 1250 3150 0    50   Input ~ 0
ROW1
Text GLabel 1650 2700 1    50   Input ~ 0
COL0
Text GLabel 2100 2700 1    50   Input ~ 0
COL1
Text GLabel 2450 1900 2    50   Input ~ 0
ROW0
Text GLabel 2450 2100 2    50   Input ~ 0
COL2
Text GLabel 2450 2000 2    50   Input ~ 0
COL1
$EndSCHEMATC
