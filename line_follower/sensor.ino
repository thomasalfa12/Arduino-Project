void bacasensor() {
  //  int s1 = digitalRead(sensor1);
  int s1 = 0;
  int s2 = digitalRead(sensor2);
  if (s2 == 1) {
    s2 = 0;
  } else {
    s2 = 1;
  }

  int s3 = digitalRead(sensor3);
  if (s3 == 1) {
    s3 = 0;
  } else {
    s3 = 1;
  }
  int s4 = digitalRead(sensor4);
  if (s4 == 1) {
    s4 = 0;
  } else {
    s4 = 1;
  }
  //  int s5 = digitalRead(sensor5);
  int s5 = 0;
  int LFSensor[5] = {s1, s2, s3, s4, s5};
  //   Serial.print(s1);
  //  Serial.print(s2);
  //  Serial.print(s3);
  //  Serial.print(s4);
  //  Serial.println(s5);
  Serial.print(LFSensor[0]);
  Serial.print(LFSensor[1]);
  Serial.print(LFSensor[2]);
  Serial.print(LFSensor[3]);
  Serial.println(LFSensor[4]);
  if ((LFSensor[0] == 0 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 1 )) NilaiPosisi = 4;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 1 ) && (LFSensor[4] == 1 )) NilaiPosisi = 3;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 1 ) && (LFSensor[4] == 0 )) NilaiPosisi = 2;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 1 ) && (LFSensor[3] == 1 ) && (LFSensor[4] == 0 )) NilaiPosisi = 1;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 1 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 0 )) NilaiPosisi = 0;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 1 ) && (LFSensor[2] == 1 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 0 )) NilaiPosisi = - 1;
  else if ((LFSensor[0] == 0 ) && (LFSensor[1] == 1 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 0 )) NilaiPosisi = -2;
  else if ((LFSensor[0] == 1 ) && (LFSensor[1] == 1 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 0 )) NilaiPosisi = -3;
  else if ((LFSensor[0] == 1 ) && (LFSensor[1] == 0 ) && (LFSensor[2] == 0 ) && (LFSensor[3] == 0 ) && (LFSensor[4] == 0 )) NilaiPosisi = -4;
  Serial.println(NilaiPosisi);
}
