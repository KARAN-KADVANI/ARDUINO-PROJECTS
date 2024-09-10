/*sensor pin is defined for pin number 7 which is input for the sensor*/
#define SENSOR_PIN 7

/*led pin is defined as 13 which control the LED*/
#define LED_PIN 13

/*setup function and pinmode function are used to set sensor as input 
and led in as output*/
void setup() {
  pinMode (LED_PIN, OUTPUT);
  pinMode (SENSOR_PIN, INPUT);

}

/*The sensor's state is read using digitalRead(). 
If the sensor returns HIGH (which means it detects something),
 the LED is turned on (digitalWrite (LED_PIN, HIGH)).
After turning on the LED, the code waits for 10 seconds (delay(10000)).
Then, the LED is turned off.
Finally, the code waits for 10 milliseconds before checking the sensor
 value again (delay(10)).*/

 
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
