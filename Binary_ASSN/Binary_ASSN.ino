

int EighthPlacePIN = 12;
int FourthPlacePIN = 10;
int SecondPlacePIN = 9;
int FirstPlacePIN = 11;



int timer = 3000;

int EighthPlace = 8;
int FourthPlace = 4;
int SecondPlace = 2;
int FirstPlace = 1;


void setup() {
  // put your setup code here, to run once:

pinMode(EighthPlacePIN, OUTPUT);
pinMode(FourthPlacePIN, OUTPUT);
pinMode(SecondPlacePIN, OUTPUT);
pinMode(FirstPlacePIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

zeroToseven();

digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, LOW);
digitalWrite(EighthPlacePIN, HIGH);
delay(timer);


zeroToseven();

digitalWrite(FirstPlacePIN, LOW);
digitalWrite(SecondPlacePIN, LOW);
digitalWrite(FourthPlacePIN, LOW);
digitalWrite(EighthPlacePIN, LOW);
delay(timer);

}




void zeroToseven() {

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
