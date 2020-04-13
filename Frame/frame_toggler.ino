#include <IRremote.h>

// Frame - NEC
#define FRAME_BITS 32
#define FRAME_ONOFF 0x80110EF1

IRsend irsend;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    irsend.sendNEC(FRAME_ONOFF, FRAME_BITS);
    delay(5000); //5 second delay between each signal burst
}