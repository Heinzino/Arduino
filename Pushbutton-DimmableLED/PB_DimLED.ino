int LEDPIN = 6;
int PIN_increaseRead = 8;
int PIN_decreaseRead = 11;
int dt = 100;


int increaseRead = 0;
int decreaseRead = 0;
int dimLevel = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
  pinMode(PIN_increaseRead, INPUT);
  pinMode(PIN_decreaseRead, INPUT);
  Serial.begin(9600);
  }

void loop() {
  // put your main code here, to run repeatedly:


  increaseRead = digitalRead(PIN_increaseRead);
  decreaseRead = digitalRead(PIN_decreaseRead);
  
  
  Serial.print("Decrease: ");
  Serial.print(decreaseRead);
  Serial.print(",");
  Serial.print("Increase: ");
  Serial.println(increaseRead);
  delay(dt);
  
  if (increaseRead == 0 && dimLevel <= 255){
    dimLevel += 5;
    analogWrite(LEDPIN, dimLevel);
  }
  else if (decreaseRead == 0 && dimLevel > 0){
    dimLevel -= 5;
    analogWrite(LEDPIN, dimLevel);
  }
  else{
    analogWrite(LEDPIN, dimLevel);
  }


}