
int buzzPin = 6;
int potPin = A1;

int dt1 = 1;
int dt2 = 2;



int c = 472;
int d = 420;
int e = 375;
int f = 353;
int g = 315;
int a = 280;
int b = 249;


//delay
int dt = 100;
int minim = 2000;
int crotchet = 1000;
int quaver = 500;
int semiquaver = 250;



void setup() {
  // put your setup code here, to run once:
 
  pinMode(buzzPin, OUTPUT);
 
}

void note(int duration,int note,int pause){
  for(int i=0;i<duration;i++){
    digitalWrite(buzzPin,HIGH);
    delayMicroseconds(note);
    digitalWrite(buzzPin,LOW);
    delayMicroseconds(note);  
    delayMicroseconds(pause);
  }



void loop() {
  // put your main code here, to run repeatedly:

for(int i = 0; i < 15; i++){

  note(semiquaver/4, e, semiquaver);
  
}
  

}
