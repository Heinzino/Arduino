#include "DHT.h"
#include <LiquidCrystal.h>

#define DHTType DHT11
#define DHTPIN 2

int rs=7;
int en =8;
int d4 = 9;
int d5 = 10;
int d6 = 11;
int d7 = 12;

DHT dht(DHTPIN, DHTType);
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);

float humidity;
float tempC;
float tempF;

int dt = 2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
dht.begin();
lcd.begin(16,2);
delay(dt);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity = dht.readHumidity();
tempC = dht.readTemperature();
tempF = dht.readTemperature(true);

Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print("    Temperature C: ");
Serial.println(tempC);
delay(dt);


lcd.setCursor(0,0);
lcd.print("Humidity: ");
lcd.print(humidity);
lcd.print("%");

lcd.setCursor(0,1);
lcd.print("Temp C: ");
lcd.print(tempC);


}