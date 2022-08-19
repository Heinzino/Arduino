
int SixteenthPlacePIN = 2;
int EighthPlacePIN = 5;
int FourthPlacePIN = 8;
int SecondPlacePIN = 11;
int FirstPlacePIN = 13;

int timer = 1500;


void setup() {
  // put your setup code here, to run once:

pinMode(SixteenthPlacePIN, OUTPUT);
pinMode(EighthPlacePIN, OUTPUT);
pinMode(FourthPlacePIN, OUTPUT);
pinMode(SecondPlacePIN, OUTPUT);
pinMode(FirstPlacePIN, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:


zeroToFifteen();


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, LOW);
digitalWrite(EighthPlacePIN , LOW);
digitalWrite(SixteenthPlacePIN, HIGH);
delay(timer);

zeroToFifteen();

digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, LOW);
digitalWrite(EighthPlacePIN , LOW);
digitalWrite(SixteenthPlacePIN, LOW);
delay(timer);

}




void zeroToFifteen(){

  digitalWrite(FirstPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, HIGH);
delay(timer);

digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, HIGH);
delay(timer);

digitalWrite(FirstPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, LOW);
digitalWrite(EighthPlacePIN , HIGH);
delay(timer);

digitalWrite(FirstPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, HIGH);
delay(timer);

digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, HIGH);
delay(timer);

digitalWrite(FirstPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, HIGH);
delay(timer);


digitalWrite(FirstPlacePIN, HIGH);
delay(timer);

}
