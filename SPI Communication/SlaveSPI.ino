#include<SPI.h>

volatile boolean received;
volatile byte Slavereceived, Slavesend;
int x;

void setup()

{
  Serial.begin(115200);
  pinMode(SS, INPUT_PULLUP);
  pinMode(MISO, OUTPUT);
  SPCR |= _BV(SPE);
  SPCR &= ~(_BV(MSTR));
  received = false;
  SPDR = 0x67;
  SPCR |= _BV(SPIE);      
  sei();   
}



ISR (SPI_STC_vect)
{
  Slavereceived = SPDR;
  SPDR = 0x02;  
  received = true;
}


void loop() {

  if (received == true)
  {
    Serial.println(Slavereceived, HEX);
    if (Slavereceived == 1)
    {
      x = 2;
    } else
    {
      x =  3;
    }
   
    Slavesend = x;
    SPDR = Slavesend;
    
    received = false;
    delay(1000);
  }
}
