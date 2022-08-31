int ledPin = 9; // LED connected to digital pin 9

void setup()
{
  pinMode(ledPin, OUTPUT); // sets the pin as output
}

void longCode()
{
  analogWrite(ledPin, 255);
  delay(500);
  analogWrite(ledPin, 0); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  delay(250);
}

void shortCode()
{
  analogWrite(ledPin, 255); // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
  delay(250);
  analogWrite(ledPin, 0);
  delay(250);
}

void pause()
{
  analogWrite(ledPin, 0);
  delay(250);
}

void d()
{
  longCode();
  shortCode();
  shortCode();
  pause();
}

void e()
{
  shortCode();
  pause();
}

void h()
{
  shortCode();
  shortCode();
  shortCode();
  shortCode();
  pause();
}

void l()
{
  shortCode();
  longCode();
  shortCode();
  shortCode();
  pause();
}

void o()
{
  longCode();
  longCode();
  longCode();
  pause();
}

void r()
{
  shortCode();
  longCode();
  shortCode();
  pause();
}

void w()
{
  shortCode();
  longCode();
  longCode();
  pause();
}

void loop()
{
  h();
  e();
  l();
  l();
  o();
  w();
  o();
  r();
  l();
  d();
}
