const int sensor1 = A0;
const int sensor2 = A1;
const int sensor3 = A2;
const int sensor4 = A3;
const int sensor5 = A4;

const int EnA = 5;
const int In1 = 6;
const int In2 = 7;
//const int In3 = 8;
//const int In4 = 9;
//const int EnB = 10;
const int In3 = 9;
const int In4 = 10;
const int EnB = 11;

unsigned long lastTime ;
double output ;
double errSum, lastErr ;
double Error = 0, SumError = 0, LastError = 0;
double BasePWM = 100;
//double Kp = 13;       // Proporsional
//double Ki = 0.2;      // Integral
//double Kd = 25;      // Diferensial'
double Kp = 8.24;
double Kd = 16.1;
double Ts = 1;        // Time sampling
int NilaiPosisi, outPID;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(4800);
  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);
  Serial.print("BISMILLAH");
}

void loop() {
  // put your main code here, to run repeatedly:
  //  jalan(255, 255);
  //  delay(1000);
  //  jalan(-255, -255);
  //  delay(1000);
//  bacasensor();
  pid();  
  //  digitalWrite(motorki1, HIGH);
  //  digitalWrite(motorki2, LOW);
  //  analogWrite(pwmki, 200);
  //  digitalWrite(motorka1, HIGH);
  //  digitalWrite(motorka2, LOW);
  //  analogWrite(pwmka, 200);
  //jalan(150,150);

}
