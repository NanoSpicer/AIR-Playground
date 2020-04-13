# Arduino Infra-Red Playground

A couple of sketches I crafted while playing with the library IRremote.h

* It assumes the IR diode is connected to pin 3
* It assumes there's a 38KHz IR receiver on pin 7

Sketch of the IR receiver
```
      ^
   (  X  )
  /   |   \
  |   |   |
  |   |   |
  |   |   |
  S  GND VCC
```
* S   - Signal
* GND - Ground
* VCC - Voltage Continuous Current (5V)
