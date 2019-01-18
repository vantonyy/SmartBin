![github-small](https://github.com/vantonyy/SmartBin/blob/master/Docs/Unites.png?raw=true)
# Website: [smartbin.am](http://smartbin.am)

# Software:
 - Arduino IDE
# Hardware:
 - Arduino MEGA 2560
 - SIM900 GSM/GPRS module
 - Ultrasonic sensors
 - I2C LCD 20x4 display
 - 4x4 keypad
 - 5v power supplier
    
## LCD 20x4 Connections:
      The LCD has 4 pins (GND, VCC, SDA, SCL)
      The Arduino's +5V and GND will be connected to the coresponding pins (VCC, GND) of the LCD
      The Arduino's SDA and SCL will be connected to the coresponding pins (SDA, SCL) of the LCD

## Keypad 4x4 Connections:
      The keypad has 8 pins, 4 of them are for the rows and other 4 pin for the columns.
      The Keypad's pins will be connected respectively to the Digital 2-3-4-5-6-7-8-9 pin of the Arduino.
