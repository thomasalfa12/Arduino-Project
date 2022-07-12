//Deklarasi pin motor driver
const int EnA = 10;
const int EnB = 5;
const int In1 = 9;
const int In2 = 8;
const int In3 = 7;
const int In4 = 6;

//Deklarasi Pin Button stik sumo
#define maju digitalRead(A1)==0
#define mundur digitalRead(A2)==0
#define belokKanan digitalRead(A3)==0
#define belokKiri digitalRead(A0)==0
#define melaju digitalRead(A4)==0
#define putarBalik digitalRead(A5)==0

void setup() {
  //Deklarasi pinMode motor driver
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);

  //Deklarasi pinMode Button
  pinMode(A0, INPUT_PULLUP);
  pinMode(A1, INPUT_PULLUP);
  pinMode(A2, INPUT_PULLUP);
  pinMode(A3, INPUT_PULLUP);
  pinMode(A4, INPUT_PULLUP);
  pinMode(A5, INPUT_PULLUP);
  Serial.begin(9600);
  



}

void loop() {

//  if(maju){
//    jalan(95,95);;
//  }else if(mundur){
//    jalan(-95,-95);
//  }else if(belokKanan){
//    jalan(0,75);
//  }else if(belokKiri){
//    jalan(75,0);
//  }else if(melaju){
//    jalan(255,255);
//  }else if(putarBalik){
//    jalan(255,-255);
//  }else {
//    jalan(0,0);
//  }
//
//  
jalan(100,100);
delay(1000);
jalan(-100,-100);
delay(1000);


}
