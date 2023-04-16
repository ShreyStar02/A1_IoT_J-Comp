// C++ code
//
int sensor = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  sensor = 0.01723 * readUltrasonicDistance(7, 8);
  Serial.println(sensor);
  if (30 < sensor) {
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
  } else {
    digitalWrite(5, HIGH);
  }
  delay(10); // Delay a little bit to improve simulation performance
}