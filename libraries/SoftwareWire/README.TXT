// SoftwareWire
// 
// 2008, Raul wrote a I2C with bit banging as an exercise.
// http://codinglab.blogspot.nl/2008/10/i2c-on-avr-using-bit-banging.html
//
// 2010-2012, Tod E. Kurt takes some tricks from Raul,
// and wrote the SoftI2CMaster library for the Arduino environment.
// https://github.com/todbot/SoftI2CMaster
// http://todbot.com/blog/
//
// 2014-2015, Testato updates the SoftI2CMaster library to make it faster
// and to make it compatible with the Arduino 1.x API
// Also changed I2C waveform and added speed selection.
//
// 2015, Peter_n renames the library into "SoftwareWire",
// and made it a drop-in replacement for the Wire library.
//

 Ver 1.3.2: added library.properties file
 Ver 1.3.1: comment added
 Ver 1.3: "SoftwareWire" 
 Ver 1.2
 - Aggiunto file keywords.txt (grazie a Leo72)
 Ver 1.1
 - Velocita' I2C selezionabile (30Hz-140kHz)
 Ver 1.0
- Funzionamento su LCD con controller ST7032i
- modificata la forma d'onda di uscita per aderire maggiormente allo standard I2C
- modificata velocita' standard a 100kHz




This is a library that creates a software I2C bus on any two pins.
More than one software I2C bus can be created.

The SoftwareWire is only I2C Master mode.
The clock pulse stretching is implemented, so the Slave can be another Arduino board.

See the Small_example.ino how to use it. 
Include the library, and create a SoftwareWire object with the sda and scl pin. After that is should be just like the real Wire library.





Background information:
I was asking for such a library here : http://forum.arduino.cc/index.php?topic=315898
Testato was working on such a library here : http://forum.arduino.cc/index.php?topic=287008
I added some glue to that code to make it behave like the Wire library.
This library started in 2008, and is now the result of the work of four.
Enjoy.