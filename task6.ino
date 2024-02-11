void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT); 
  pinMode(4, INPUT);
  digitalWrite(3,LOW);
}
void loop()
{
  digitalWrite(2,digitalRead(4));
}