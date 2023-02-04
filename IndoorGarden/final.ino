#include "Adafruit_seesaw.h"

Adafruit_seesaw ss;

int motorPin = 11;
bool motorOn = false;
int dt = 200;


int photoResistorPin = A0;
int LED_Pin = 6;
int light_level;

int plant_dt = 1000;

void checkLights(){
  
  light_level = analogRead(photoResistorPin);
  Serial.println(light_level);
  
    if(light_level <= 200){
    analogWrite(LED_Pin, 255);
  }
  else if (light_level > 200){
    analogWrite(LED_Pin, 0);
  }
}

void setup() {
  Serial.begin(9600);
  pinMode(motorPin,OUTPUT);
  pinMode(photoResistorPin, INPUT);
  pinMode(LED_Pin, OUTPUT);


  
  Serial.println("seesaw Soil Sensor example!");
  
  if (!ss.begin(0x36)) {
    Serial.println("ERROR! seesaw not found");
    while(1) delay(1);
  } else {
    Serial.print("seesaw started! version: ");
    Serial.println(ss.getVersion(), HEX);
  }
}

void loop() {

  uint16_t capread = ss.touchRead(0);
  
  checkLights();
  
  Serial.print("Capacitive: "); Serial.println(capread);
  
   if(capread < 450){
    analogWrite(motorPin, 255);
    analogWrite(LED_Pin,0);
    delay(plant_dt);
    checkLights();
    analogWrite(motorPin,0);
    delay(dt);
  }
 
}
