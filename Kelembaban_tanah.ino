int pin = A0;
int kelembaban;
int pompa = 13;
void setup() {
//  put your setup code here, to run once:
pinMode (pin, INPUT);
pinMode(pompa, OUTPUT);
Serial.begin(9600);
}

void loop() {
  //put your main code here, to run repeatedly;
kelembaban = analogRead(pin);
//kelembaban = map(kelembaban, 0, 1024, 100, 0);
Serial.println(kelembaban);

if (kelembaban > 600) {
  digitalWrite(pompa, HIGH)
  }
else {
  digitalWrite(pompa, LOW)
  }
}
