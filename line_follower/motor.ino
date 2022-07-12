void jalan(int motorKiri, int motorKanan){
  if(motorKiri > 0){
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    analogWrite(EnA, motorKiri);
  }else if(motorKiri <= 0){
    digitalWrite(In1, LOW);
    digitalWrite(In2, HIGH);
    analogWrite(EnA, motorKiri);
  }
   if(motorKanan > 0){
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnB, motorKanan);
  }else if(motorKanan <= 0){
    digitalWrite(In3, LOW);
    digitalWrite(In4, HIGH);
    analogWrite(EnA, motorKanan);
  }
}
