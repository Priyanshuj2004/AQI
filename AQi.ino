void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(9, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value_mq135 = analogRead(A0); // Air Quality (CO, Ammonia, Benzene, Alcohol, smoke)
  int value_mq9 = analogRead(A1); //MQ-9 - Carbon Monoxide, flammable gasses
  int so2 = analogRead(A2); // Air Quality (CO, Ammonia, Benzene, Alcohol, smoke)
  int o3 = analogRead(A3);
  Serial.println("AirQuality=");
  Serial.println(value_mq135, DEC);
  Serial.println(" PPM");

  Serial.println("CO=");
  Serial.println(value_mq9, DEC);
  Serial.println(" PPM");
  if(value_mq9 >= 100 || value_mq135>200 || so2>=100 || o3>90){
    digitalWrite(9,HIGH);
    digitalWrite(10,LOW);

  }
  else{
    digitalWrite(10,HIGH);
        digitalWrite(9,LOW);

  }

  delay(1000);
}
