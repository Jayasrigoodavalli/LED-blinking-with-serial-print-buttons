void setup()
{
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(4,INPUT);
  pinMode(2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(4)==HIGH)
  {
  digitalWrite(2,HIGH);
  Serial.println("switch");
  Serial.println(digitalRead(4));
  Serial.println("LED==HIGH");
  delay(1000);
  }
  else
  {
  digitalWrite(2,LOW);
  Serial.println("switch");
  Serial.println(digitalRead(4));
  Serial.println("LED==LOW");
  delay(1000);
  }

}
