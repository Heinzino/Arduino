#include <LiquidCrystal.h>

int rs=7;
int en =8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

float first_num;
float second_num;
float result;
String operation;

int dt = 1000;
int result_delay = 5000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
lcd.begin(16,2);

}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Put first num: ");
while(Serial.available() == 0){
  
}

first_num = Serial.parseInt();

delay(dt);
lcd.clear();
lcd.setCursor(0,0); 

lcd.print("Put second num: ");
while(Serial.available() == 0){
  
}

second_num = Serial.parseInt();

delay(dt);
lcd.clear();
lcd.setCursor(0,0);


lcd.print("Enter operation: ");
while(Serial.available() == 0){
  
}
operation = Serial.readString();

delay(dt);
lcd.clear();
lcd.setCursor(0,0);
Serial.print(operation);

if(operation == "+"){
  result = first_num + second_num;
}
else if (operation == "-"){
  result = first_num - second_num;
}
else if (operation == "*"){
  result = first_num * second_num;
}
else{
  result = first_num/second_num;
}


lcd.print(first_num);
lcd.print(operation);
lcd.print(second_num);
lcd.print(" = ");
lcd.print(result);
delay(result_delay);
lcd.clear();

}