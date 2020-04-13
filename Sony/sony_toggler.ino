#include <IRremote.h>

IRsend irsend;

void setup()
{
}

void loop()
{
    for (int i = 0; i < 3; i++)
    {
        irsend.sendSony(0xa90, 12);
        delay(40);
    }
    Serial.println("Burst sent");
    delay(5000); //5 second delay between each signal burst
}