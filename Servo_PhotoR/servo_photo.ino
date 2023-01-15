#include <Servo.h>

int photoPIN = A0;
float light_level;

Servo myServo;
int servoPIN = 3;
int servoPosition = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(photoPIN, INPUT);

myServo.attach(servoPIN);
}

void loop() {
  // put your main code here, to run repeatedly:

light_level = analogRead(photoPIN);
servoPosition = (16./27.)*light_level - (1600./9.);
Serial.println(light_level);

myServo.write(servoPosition);
}