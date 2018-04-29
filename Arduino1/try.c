

void setup()
{
   pinMode(8,  OUTPUT); // initialize digital pin 8 as an output.
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
}
