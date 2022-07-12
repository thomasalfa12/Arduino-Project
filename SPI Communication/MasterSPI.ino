#include<SPI.h>
int x;
void setup ()

{
  Serial.begin(115200);
  SPI.begin();
  SPI.setClockDivider(SPI_CLOCK_DIV8);
  digitalWrite(SS, HIGH);
}

void loop()
{
  byte Mastersend, Mastereceive;
  x = 100;
  digitalWrite(SS, LOW);

  Mastersend = x;
  Mastereceive = SPI.transfer(Mastersend);     //Master gets 0x67
  Serial.println(Mastereceive, HEX);             //shows: 67
  if (Mastereceive == 2)
  {
    Serial.println("Alhamdulillah");
  }
  else
  {
    Serial.println("Nah kacau dak dapat");
  }
  delay(1000);
}
