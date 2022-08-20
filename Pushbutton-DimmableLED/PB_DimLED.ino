int LEDPIN = 6;
int PIN_increaseRead = 8;
int PIN_decreaseRead = 11;
int buttonDecrease = 12;

int increaseRead = 0;
int decreaseRead = 0;
int dimLevel = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(LEDPIN, OUTPUT);
pinMode(PIN_increaseRead, INPUT);
pinMode(PIN_decreaseRead, INPUT);
pinMode(buttonDecrease, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
/* Give power to button decrease */
digitalWrite(buttonDecrease, HIGH);
increaseRead = digitalRead(PIN_increaseRead);
decreaseRead = digitalRead(PIN_decreaseRead);


Serial.print(decreaseRead);
Serial.println(increaseRead);
if (increaseRead == 0 && dimLevel <= 255){
  dimLevel += 5;
  analogWrite(LEDPIN, dimLevel);
}
else if (decreaseRead == 0 && dimLevel >= 0){
  dimLevel -= 5;
  analogWrite(LEDPIN, dimLevel);
}
else{
  analogWrite(LEDPIN, dimLevel);
}


}