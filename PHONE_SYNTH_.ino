/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
#include <MIDI.h>

 const int phoneSynth = A5;
 const int susPedal = 4;
 const int conPedal = A3;
 
 int phoneSynthWaves = 0;
 int sendPhoneSynth = 0;
 





 
MIDI_CREATE_DEFAULT_INSTANCE();
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
MIDI.begin(MIDI_CHANNEL_OFF);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int phoneSynthWaves = analogRead(A5);




if (phoneSynthWaves = 80) {
  MIDI.sendNoteOn(50,127,3);
  delay(100);
  MIDI.sendNoteOff(50,127,3);
}


if (phoneSynthWaves = 81) {
  MIDI.sendNoteOn(52,127,3);
  delay(100);
  MIDI.sendNoteOff(52,127,3);
}


if (phoneSynthWaves = 82) {
  MIDI.sendNoteOn(54,127,3);
  delay(100);
  MIDI.sendNoteOff(54,127,3);
}

 
if (phoneSynthWaves = 83) {
  MIDI.sendNoteOn(55,127,3);
  delay(100);
  MIDI.sendNoteOff(55,127,3);
}

if (phoneSynthWaves = 84) {
  MIDI.sendNoteOn(57,127,3);
  delay(100);
  MIDI.sendNoteOff(57,127,3);
}


if (phoneSynthWaves = 85) {
  MIDI.sendNoteOn(59,127,3);
  delay(100);
  MIDI.sendNoteOff(59,127,3);
}

 


if (phoneSynthWaves = 86) {
  MIDI.sendNoteOn(61,127,3);
  delay(100);
  MIDI.sendNoteOff(61,127,3);
}

 
 
if (phoneSynthWaves = 87) {
  MIDI.sendNoteOn(62,127,3);
  delay(100);
  MIDI.sendNoteOff(62,127,3);
}


if (phoneSynthWaves = 88) {
  MIDI.sendNoteOn(64,127,3);
  delay(100);
  MIDI.sendNoteOff(64,127,3);
}


if (phoneSynthWaves = 89) {
  MIDI.sendNoteOn(66,127,3);
  delay(100);
  MIDI.sendNoteOff(66,127,3);
}

 
if (phoneSynthWaves = 90) {
  MIDI.sendNoteOn(67,127,3);
  delay(100);
  MIDI.sendNoteOff(67,127,3);
}

 

if (phoneSynthWaves = 91) {
  MIDI.sendNoteOn(69,127,3);
  delay(100);
  MIDI.sendNoteOff(69,127,3);
}

 
if (phoneSynthWaves = 92) {
  MIDI.sendNoteOn(71,127,3);
  delay(100);
  MIDI.sendNoteOff(71,127,3);
}


if (phoneSynthWaves = 93) {
  MIDI.sendNoteOn(73,127,3);
  delay(100);
  MIDI.sendNoteOff(73,127,3);
}

 

if (phoneSynthWaves = 94) {
  MIDI.sendNoteOn(74,127,3);
  delay(100);
  MIDI.sendNoteOff(74,127,3);
}

 

if (phoneSynthWaves = 95) {
  MIDI.sendNoteOn(76,127,3);
  delay(100);
  MIDI.sendNoteOff(76,127,3);
}


if (phoneSynthWaves = 96) {
  MIDI.sendNoteOn(78,127,3);
  delay(100);
  MIDI.sendNoteOff(78,127,3);
}



if (phoneSynthWaves = 97) {
  MIDI.sendNoteOn(79,127,3);
  delay(100);
  MIDI.sendNoteOff(79,127,3);
}

 


if (phoneSynthWaves = 98) {
  MIDI.sendNoteOn(81,127,3);
  delay(100);
  MIDI.sendNoteOff(81,127,3);
}

 

if (phoneSynthWaves = 99) {
  MIDI.sendNoteOn(83,127,3);
  delay(100);
  MIDI.sendNoteOff(83,127,3);
}

 

if (phoneSynthWaves = 100) {
  MIDI.sendNoteOn(85,127,3);
  delay(100);
  MIDI.sendNoteOff(85,127,3);
}

 

if (phoneSynthWaves = 101) {
  MIDI.sendNoteOn(86,127,3);
  delay(100);
  MIDI.sendNoteOff(86,127,3);
}



if (phoneSynthWaves = 102) {
  MIDI.sendNoteOn(88,127,3);
  delay(100);
  MIDI.sendNoteOff(88,127,3);
}

 

if (phoneSynthWaves = 103) {
  MIDI.sendNoteOn(90,127,3);
  delay(100);
  MIDI.sendNoteOff(90,127,3);
}

 

if (phoneSynthWaves = 104) {
  MIDI.sendNoteOn(91,127,3);
  delay(100);
  MIDI.sendNoteOff(91,127,3);
}

 

if (phoneSynthWaves = 105) {
  MIDI.sendNoteOn(93,127,3);
  delay(100);
  MIDI.sendNoteOff(93,127,3);
}

 
if (phoneSynthWaves = 106) {
  MIDI.sendNoteOn(95,127,3);
  delay(100);
  MIDI.sendNoteOff(95,127,3);
}

 

if (phoneSynthWaves = 107) {
  MIDI.sendNoteOn(97,127,3);
  delay(100);
  MIDI.sendNoteOff(97,127,3);
}

 

if (phoneSynthWaves = 108) {
  MIDI.sendNoteOn(98,127,3);
  delay(100);
  MIDI.sendNoteOff(98,127,3);
}

 

if (phoneSynthWaves = 109) {
  MIDI.sendNoteOn(100,127,3);
  delay(100);
  MIDI.sendNoteOff(100,127,3);
}

 
if (phoneSynthWaves = 110) {
  MIDI.sendNoteOn(102,127,3);
  delay(100);
  MIDI.sendNoteOff(102,127,3);
}

 
if (phoneSynthWaves = 111) {
  MIDI.sendNoteOn(103,127,3);
  delay(100);
  MIDI.sendNoteOff(103,127,3);
}
  // print out the value you read:
 delay(100);
}
