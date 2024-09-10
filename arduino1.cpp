#define SENSOR_PIN 7
#define LED_PIN 13
void setup() {
  pinMode (LED_PIN, OUTPUT);
  pinMode (SENSOR_PIN, INPUT);

}

void loop() {
  int sensorValue = digitalRead (SENSOR_PIN);
  if (sensorValue == HIGH)
  {
    digitalWrite (LED_PIN, HIGH);
    delay(10000);
    digitalWrite (LED_PIN, LOW);
  }
  delay(10);
}
