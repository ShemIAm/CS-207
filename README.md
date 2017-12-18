# CS-207

 I want to make a Arduino Theremin similar to these:  
 http://www.electrominds.com/projects/simple-arduino-theremin-theremino 
 
 http://luckylarry.co.uk/arduino-projects/arduino-a-basic-theremin/ 
 
 
Instead of having the output come out the speaker, I want to have the sound come out of Ableton/Max for Live so I can customize and change the sounds from there.  
 
 
My favorite comedian hosts a podcast and he plays around with a Theremin on every single episode. He even has and extra one there for his guests every week. It would be really cool if I could not only have my own Theremin, but if I could connect it to my computer so I can make melodies using whatever sounds I want with it. I really want to use this class to make something I will use. 
 
 
 
Hardware List:
Arduino UNO 
Breadboard 
Parallax PING Ultrasonic Sensor 
100 ohm resistors 
wires 
USB MIDI Cable PC to Music Adapter 
MIDI Shield Musical Breakout Board Instrument Interface 
Tact Switch 
LED 
Small Speaker 
Computer with Ableton and Max for Live installed. 



Milestone 1) Just try and make a working Theremin with a small speaker. 
 
Milestone 2) Have the Theremin turn on and off with a button and light to signal it. 
 
Milestone 3) Hook up the MIDI shield to both the Arduino and Computer. 
 
Milestone 3) Somehow connect the output of the Theremin to Ableton on my computer with Max for live. 



I want to make a Theremin that I can connect to my computer so I can use whatever sounds I want through it. Ideally I would like to have a button turn it on and off as well as an LED light to signal if it’s on or off. The Arduino will power the Ultrasonic Sensor which will send its signals through the MIDI shield to Ableton Live where I can pick the base sound for the Theremin to play.



Build Instructions:

I just simply could not get this midi shield to work meaning there 
is no way for me to get sound to go through my computer or any software on it. I 
decided to instead use this female aux cord I have to see if I can get any theremin like 
sound to get the input from my ultrasonic sensor to go out of my headphones which 
would be plugged into the aux.  
By this point, I have completely given up on playing/adjusting anyone else’s code 
to make what I want. After getting rid of my midi breakout shield I hooked up my female 
aux cable to pin 3 instead. Then all did was borrow pieces of the code I got from the 
arduino website for my ultrasonic sensor /* https://www.arduino.cc/en/Tutorial/Ping */ to 
put in both a playFuntion I made as well as the void loop to work only when the button 
(pin 1) is pushed.  


My schematics and my final build: 
![alt tag](https://github.com/ShemIAm/CS-207/blob/master/img/20171207_225006.jpg)
![alt tag](https://github.com/ShemIAm/CS-207/blob/master/img/20171207_223337.jpg)
![alt tag](https://github.com/ShemIAm/CS-207/blob/master/img/20171207_223313.jpg)



My failure of a build with the MIDI shield that didnt work along with the schematics I tried to copy:
![alt tag](https://github.com/ShemIAm/CS-207/blob/master/img/20171204_234045.jpg)
![alt tag](https://github.com/ShemIAm/CS-207/blob/master/img/MIDI-Theremin-Diagram.png)
