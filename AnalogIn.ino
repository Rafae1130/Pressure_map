

const int analogInPin1 = A0;// Analog input pin that the potentiometer is attached to
const int analogInPin2 = A1;
const int analogInPin3 = A2;
const int analogInPin4 = A3;
const int analogInPin5 = A4;
const int analogInPin6 = A5;


int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
int sensorValue5 = 0;
int sensorValue6 = 0;


void setup() {
  // initialize serial communications at 9600 bps:
  Serial.begin(9600);
}

void loop() {
  // read the analog in value:
  sensorValue1 = analogRead(analogInPin1);
  sensorValue2 = analogRead(analogInPin2);
  sensorValue3 = analogRead(analogInPin3);
  sensorValue4 = analogRead(analogInPin4);
  sensorValue5 = analogRead(analogInPin5);
  sensorValue6 = analogRead(analogInPin6);

  Serial.print(sensorValue1);
  Serial.print(" ");
  
  Serial.print(sensorValue2);
  Serial.print(" ");

  Serial.print(sensorValue3);
  Serial.print(" ");

  Serial.print(sensorValue4);
  Serial.print(" ");
  
  Serial.print(sensorValue5);
  Serial.print(" ");

  Serial.print(sensorValue6);
  Serial.println(" ");
  
  delay(200);
}
