void jalan(int motorKanan, int motorKiri) {
  if ( motorKanan > 0 ) {
    digitalWrite(In1, LOW);
    digitalWrite(In2, HIGH);
    analogWrite(EnA, motorKanan);
  } else if ( motorKanan <= 0) {
    int anu = abs(motorKanan);
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    analogWrite(EnA, anu);
  }

  if ( motorKiri > 0 ) {
    digitalWrite(In3, LOW);
    digitalWrite(In4, HIGH);
    analogWrite(EnB, motorKiri);
  } else if ( motorKiri <= 0) {
    int anu1 = abs(motorKiri); 
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    analogWrite(EnB, anu1);
  }
}
