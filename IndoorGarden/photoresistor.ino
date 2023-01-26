int photoResistorPin = A0;
int dt = 100;

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
delay(dt);
}