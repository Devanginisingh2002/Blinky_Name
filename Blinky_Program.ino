/* 
 *  Student Name: Devangini Singh
 *  Student ID: 2010993042
 *  
 *  This is the code for blinking my name on Arduino Nano by applying the "Morse code".
 *  
 */

 // Using the "dot" function.
  void dot()
{
   digitalWrite(LED_BUILTIN, HIGH);      // This used for the On status.
   delay(500);                           // This used for the delay seconds.
   digitalWrite(LED_BUILTIN, LOW);       // This used for the Off status.
   delay(500);                           // This used for the delay seconds.
}

// Using the "dash" function.
void dash()
{
   digitalWrite(LED_BUILTIN, HIGH);       // This used for the On status.
   delay(2000);                           // This used for the delay seconds.
   digitalWrite(LED_BUILTIN, LOW);        // This used for the Off status.
   delay(2000);                           // This used for the delay seconds.
}

// setup() function is called when a sketch starts. 
// Mainly to intialize variables pins.
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

// Using to execute the arduino sketch.
void loop() {
  // D - (-..)
  dash();
  dot();
  dot();
  delay(4000);

  // E - (.)
  dot();
  delay(4000);

  // V - (...-)
  dot();
  dot();
  dot();
  dash();
  delay(4000);

  // A - (.-)
  dot();
  dash();
  delay(4000);

  // N (-.)
  dash();
  dot();
  delay(4000);

  // G (--.)
  dash();
  dash();
  dot();
  delay(4000);

  // I(..)
  dot();
  dot();
  delay(4000);

  // N (-.)
  dash();
  dot();
  delay(4000);

  // I(..)
  dot();
  dot();
  delay(4000);
}
 
