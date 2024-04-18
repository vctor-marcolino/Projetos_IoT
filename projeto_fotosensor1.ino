// C++ code
//
int luminous = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(9, OUTPUT);
}

void loop()
{
  luminous = analogRead(A0);
  Serial.println(luminous);
  if (luminous >= 336) {
    digitalWrite(9, HIGH);
  } else {
    digitalWrite(9, LOW);
  }
  delay(1000); // Wait for 1000 millisecond(s)
}