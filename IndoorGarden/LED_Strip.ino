int dt = 100;

int photoResistorPin = A0;
int LED_Pin = 6;
int light_level;

void setup() {
  // put your setup code here, to run once:
pinMode(photoResistorPin, INPUT);
Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
light_level = analogRead(photoResistorPin);
Serial.println(light_level);

if(light_level <= 200){
  analogWrite(LED_Pin, 255);
}
else if (light_level > 200){
  analogWrite(LED_Pin, 0);
}
delay(dt);
}