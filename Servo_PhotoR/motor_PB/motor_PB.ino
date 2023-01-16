#include <Stepper.h>

int stepsPerRev = 2048;
int motSpeed = 10;
int dt = 50;

int buttonPin = 3;
bool turning_counterclockwise = true;
int newbuttonVal;
int oldbuttonVal = 1;

Stepper myStepper(stepsPerRev, 8,10,9,11);


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

newbuttonVal = digitalRead(buttonPin);

if (oldbuttonVal == 1 && newbuttonVal == 0){
  if(turning_counterclockwise){
    turning_counterclockwise = false;
  }
  else{
    turning_counterclockwise = true;
  }
}


if (turning_counterclockwise){
  myStepper.step((-1*motSpeed));
}

else{
  myStepper.step(motSpeed);
}

Serial.println(oldbuttonVal);
oldbuttonVal = newbuttonVal;

}