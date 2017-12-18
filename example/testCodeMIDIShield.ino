/*
 * Convert Arduino to a MIDI controller using a digital input.
 *
 * This sketch is set up to send a MIDI note on MIDI channel 1,
 * but it can be easily reconfigured for other notes and channels
 *
 * 2011/3/2; Rpbert Turenne
 */

// define the pins we use (any will do)
int switchPin1 = 4;      

// general midi notes
char note1 = 60; //Middle C
char note2 = 62; //D
char note3 = 64; //E
char note4 = 65; //F
char note5 = 67; //G
char note6 = 69; //A

// Variables
int switchState1 = LOW;
int currentSwitchState1 = LOW;

void setup() {

 // set the states of the I/O pins:
 pinMode(switchPin1, INPUT);

 // set MIDI baud rate : IMPORTANT FOR MIDI
 Serial.begin(31250); 

}

void loop() {

 //switchPin1
// Just some logic to toggle the value on any switch signal
 currentSwitchState1 = digitalRead(switchPin1);
 if( currentSwitchState1 == LOW && switchState1 == HIGH ) // push
 //Note on channel 1 (0x90), some note value (note), middle velocity (0x45):
 noteOn(0x90, note1, 0x45);
 if( currentSwitchState1 == HIGH && switchState1 == LOW ) // release
 //Note on channel 1 (0x90), some note value (note), silent velocity (0x00):
 noteOn(0x90, note1, 0x00);
 switchState1 = currentSwitchState1;

}

// Send a MIDI note-on/off message. 
void noteOn(char cmd, char data1, char data2) {
 Serial.print(cmd, BYTE);
 Serial.print(data1, BYTE);
 Serial.print(data2, BYTE);
}
