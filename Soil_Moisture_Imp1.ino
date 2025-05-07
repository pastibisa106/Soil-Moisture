/*
 * Determine if the soil is wet or dry
 * https://arduinogetstarted.com/tutorials/arduino-soil-moisture-sensor
*/

#define AOUT_PIN A0 // Arduino pin that connects to AOUT pin of moisture sensor
#define THRESHOLD 250 // CHANGE YOUR THRESHOLD HERE

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(AOUT_PIN); // read the analog value from sensor
  if (value < THRESHOLD)
    Serial.print("The soil is WET (");
  else
    Serial.print("The soil is DRY (");
  Serial.print(value);
  Serial.println(")");
  delay(500);
}
