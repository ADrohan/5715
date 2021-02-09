# 5715
A collaboration by Aileen Drohan and Sinead McDonald for /Glitch Festival 2016

## About
The artwork title, 5715, refers to the number of homeless people in Ireland as of January 2016, according to the Department of the Environment, of which 1830 were children. By April of 2016 those numbers had risen to 6189 and 2121 respectively. Rents are projected to rise a further 12% this year, placing an even greater number of families and individuals at risk. In many places across the country, availability is minimal and stock is priced far above the maximum limits set for Rent Supplement payments. Many families have been forced into emergency accommodation due to soaring rental prices, locking them into a cycle of increasing poverty.

5715 uses Arduino and piezo disks to track this risk. The installation outputs a range of sound frequencies derived from the ratio of the average rental prices for a 3 bedroom family home in each county in Ireland, versus the maximum rental price allowed for a family with three children under the government’s Rent Supplement scheme. This data is outputted to frequencies fed from Arduino microcomputers to 26 wall mounted piezoelectric disks. The result is a range of pitches from just above audible for lower risk areas, to squealing high-pitch where families are most in danger. The cacophony of sounds produced can be difficult to engage with for any length of time. Disturbingly, in no county in Ireland was the average rental price equal to or under the maximum allowed under the scheme.

## Physical components
2 x Arduino Megas,  26 x large Piezoelectric discs, 26 x LM368 Audio Amplifier Modules, Jumper wires, 40 rolls of 26AWG stranded wire in different colours, galvanised steel wall supports.

## Code
Arduino code used was amended from Jeremy Blum's example on driving speakers simultaneously with arduino.
https://www.jeremyblum.com/2010/09/05/driving-5-speakers-simultaneously-with-an-arduino/

The code included in this repo has two options:
data mapped High to low frequencies
1st arduino mega with _2016_Q1A_High_to_Low.ino
2nd arduino mega with _2016_Q1B_High_to_low.ino

or

data mapped low to high frequencies
1st arduino mega with _2016_Q1A_low_to_high.ino
2nd arduino mega with _2016_Q1B_low_to_high.ino

## Glitch Festival 2016 Website
https://mart.ie/portfolio-item/glitch-festival-2016/

## Sound test run 
https://youtu.be/QvIkavq58RE

## Personal website
http://www.aileendrohan.com/5715-2/

