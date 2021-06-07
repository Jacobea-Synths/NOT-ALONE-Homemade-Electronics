#include <MIDI.h>

#define LED 13
//buttons
const int buttonPin1 = 3; //top left
const int buttonPin2 = 7; //top 2nd left
const int buttonPin3 = 8; //top 2nd right
const int buttonPin4 = 4; //top right
const int buttonPin5 = 2; //bottom left 
const int buttonPin6 = 10;  //bottom 2nd left
const int buttonPin7 = 5; // bottom 2nd right
const int buttonPin8 = 6; //bottom right

int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int buttonState4 = 0;
int buttonState5 = 0;
int buttonState6 = 0;
int buttonState7 = 0;
int buttonState8 = 0;

int lastButtonState1 = 0;
int lastButtonState2 = 0;
int lastButtonState3 = 0;
int lastButtonState4 = 0;
int lastButtonState5 = 0;
int lastButtonState6 = 0;
int lastButtonState7 = 0;
int lastButtonState8 = 0;
//piezos
const int piezo1 = A0;
const int piezo2 = A1;
const int piezo3 = A2;
const int piezo4 = A3;

int sensorReading1 = 0;
int sensorReading2 = 0;
int sensorReading3 = 0;
int sensorReading4 = 0;

int sendingReading1 = 0;
int sendingReading2 = 0;
int sendingReading3 = 0;
int sendingReading4 = 0;

const int LED2 = 11;
//pots
const int pot1 = A4;
const int pot2 = A5;
const int ledPin = 12;

int potReading1 = 0;
int potReading2 = 0;

int potSending1 = 0;
int potSending2 = 0;

int lastPotState1 = 0;
int lastPotState2 = 0;
// pedals
const int susPed = 9;

int susPedState = 0;
int lastSusPedState = 0;

const int conPed = A7;

int conPedReading = 0;
int conPedSending = 0;
int lastConPedState = 0;
int midiCon = 0;

MIDI_CREATE_DEFAULT_INSTANCE();

void setup()
{
  pinMode(LED, OUTPUT); 
  pinMode(ledPin, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(susPed, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
  pinMode(buttonPin5, INPUT);
  pinMode(buttonPin6, INPUT);
  pinMode(buttonPin7, INPUT);
  pinMode(buttonPin8, INPUT);
  MIDI.begin(MIDI_CHANNEL_OFF);
}

void loop()
{
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3);
  buttonState4 = digitalRead(buttonPin4);
  buttonState5 = digitalRead(buttonPin5);
  buttonState6 = digitalRead(buttonPin6);
  buttonState7 = digitalRead(buttonPin7);
  buttonState8 = digitalRead(buttonPin8);
  
  if (buttonState1 != lastButtonState1) {
    if (buttonState1 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(40, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(40, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(42, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(42, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState3 != lastButtonState3) {
    if (buttonState3 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(44, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(44, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState4 != lastButtonState4) {
    if (buttonState4 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(45, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(45, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState5 != lastButtonState5) {
    if (buttonState5 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(47, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(47, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState6 != lastButtonState6) {
    if (buttonState6 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(49, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(49, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState7 != lastButtonState7) {
    if (buttonState7 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(51, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(51, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  }
  } 
  if (buttonState8 != lastButtonState8) {
    if (buttonState8 == HIGH) {
    digitalWrite(LED, HIGH);
  MIDI.sendNoteOn(52, 127, 2);
  delay(25);
  } else {
    
     MIDI.sendNoteOff(52, 0, 2);
  digitalWrite(LED, LOW);
  delay(25);
  } 
  }
sensorReading1 = analogRead(piezo1);
sendingReading1 = sensorReading1/8;
sensorReading2 = analogRead(piezo2);
sendingReading2 = sensorReading2/8;
sensorReading3 = analogRead(piezo3);
sendingReading3 = sensorReading3/8;
sensorReading4 = analogRead(piezo4);
sendingReading4 = sensorReading4/8;


if (sensorReading1 > 40) {
  MIDI.sendNoteOn(60, 127, 1);
  digitalWrite (LED2, HIGH);
  delay(150);
  MIDI.sendNoteOff(60, 0, 1);
  digitalWrite (LED2, LOW);

} if (sensorReading2 > 40) {
  MIDI.sendNoteOn(62, 127, 1);
  digitalWrite (LED2, HIGH);
  delay(150);
  MIDI.sendNoteOff(62, 0, 1);
  digitalWrite (LED2, LOW);

}
if (sensorReading3 > 40) {
  MIDI.sendNoteOn(64, 127, 1);
  digitalWrite (LED2, HIGH);
  delay(150);
  MIDI.sendNoteOff(64, 0, 1);
  digitalWrite (LED2, LOW);

} if (sensorReading4 > 60) {
  MIDI.sendNoteOn(66, 127, 1);
  digitalWrite (LED2, HIGH);
  delay(150);
  MIDI.sendNoteOff(66, 0, 1);
  digitalWrite (LED2, LOW);
}

potReading1 = analogRead(pot1);
potSending1 = potReading1/8;
potReading2 = analogRead(pot2);
potSending2 = potReading2/8;

if (potSending1 != lastPotState1) {
  MIDI.sendControlChange (1, potSending1, 1);
  digitalWrite(ledPin, HIGH);
  delay(50);
}


if (potSending2 != lastPotState2) {
  MIDI.sendControlChange (3, potSending2, 1);
  digitalWrite(ledPin, HIGH);
  delay(50); }
else {
  digitalWrite(ledPin, LOW);
}

susPedState = digitalRead(susPed);

if (susPedState != lastSusPedState) {
  if (susPedState == LOW) {
      MIDI.sendControlChange (64, 127, 1);
      delay(50);
  } else {
    MIDI.sendControlChange (64, 0, 1);
    delay(50);
  }
}



 lastPotState1 = potSending1;
 lastPotState2 = potSending2;
 lastButtonState1 = buttonState1;
 lastButtonState2 = buttonState2;
 lastButtonState3 = buttonState3;
 lastButtonState4 = buttonState4;
 lastButtonState5 = buttonState5;
 lastButtonState6 = buttonState6;
 lastButtonState7 = buttonState7;
 lastButtonState8 = buttonState8;
 lastSusPedState = susPedState;
 lastConPedState = midiCon;

}
