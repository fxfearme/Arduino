void setup()
{
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  delay(1000); // Wait for 1000 millisecond(s)

}
