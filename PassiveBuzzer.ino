/*
  To lear more about this code check out the readME.adoc
*/
// Headers
// Variables
int buzPin = 9;
int potVal;
int potRead = A0;
float buzzVal;
float BV = 9940 / 1023;

/void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial){
    ;
  }
  pinMode(buzPin, OUTPUT);
  pinMode(potRead, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potRead);
  buzzVal = BV * potVal + 60;
  analogWrite(buzPin, buzzVal);
  Serial.println(potVal);
}
