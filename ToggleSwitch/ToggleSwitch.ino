int LEDPin = 6;
int readerPIN = 12;
int dt = 50;

/* Toggle switch variables */
bool LED_ON = false;
int buttonNew;
int buttonOld = 1;

void setup() {
  // put your setup code here, to run once:
   pinMode(LEDPin, OUTPUT);
   pinMode(readerPIN, INPUT);
   Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 buttonNew = digitalRead(readerPIN);

 if (buttonOld == 0 && buttonNew == 1){
  if(LED_ON == false){
    digitalWrite(LEDPin, HIGH);
    LED_ON = true;
  }
  else{
    digitalWrite(LEDPin, LOW);
    LED_ON = false;
  }
 }

  buttonOld = buttonNew;
  delay(dt);

}
