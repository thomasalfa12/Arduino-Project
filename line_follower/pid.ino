void pid(){
  bacasensor();
    int SetPoint = 0;                      // Setpoint yang diinginkan
    Error = SetPoint - NilaiPosisi;        // Error
    double DeltaError = Error - LastError; // Delta Error (Selisih error sekarang e(t) dengan error sebelumya e(t-1))
    SumError += LastError;                 // Akumulasi error
    double P = Kp * Error;                 // Kontrol proporsional
//    double I = Ki * SumError * Ts;         // Kontrol integral
    double D = ((Kd / Ts) * DeltaError);   // Kontrol derivative
    LastError = Error;                     // Error sebelumnya
    outPID = P  + D;                    // Output PID
    double kecki = BasePWM + outPID;     // Motor Kiri
    double kecka = BasePWM - outPID;     // Motor Kanan
//  unsigned long now = millis();
//  double timeChange = (double)(now - lastTime);
//  double error = 0 - (NilaiPosisi);
//  double errSum = errSum + (error * timeChange);
//  double dErr = (error - lastErr);
//  SumError += LastError;
//  output = 1 * error + 0.2 * SumError + 2 * dErr;
//  double kecki = 90 + output;
//  double kecka = 90 - output;

  int kecka1 = constrain(kecka, -170, 170);
  int kecki1 = constrain(kecki, -170, 170);
  Serial.print(kecka1);
  Serial.print( "||" );
  Serial.println(kecki1);
  jalan(kecki1, kecka1);
  //  Serial.print (kecka); Serial.print(" || "); Serial.println (kecki);
//  lastErr = error;
//  lastTime = now;
}
