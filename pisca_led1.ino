// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);
  delay(3000); // Wait for 3000 millisecond(s)
  digitalWrite(2, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
}