// C++ code
//
int soil_sensor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  soil_sensor = analogRead(A0);
  Serial.println(soil_sensor);
  if (soil_sensor < 40) {
    digitalWrite(7, HIGH);
    digitalWrite(10, HIGH);
  } else {
    digitalWrite(7, LOW);
    digitalWrite(10, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}