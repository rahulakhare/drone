const int pwmPin1 = 2; // Pin where the first PWM signal is connected
const int pwmPin2 = 3; // Pin where the second PWM signal is connected
const int pwmPin3 = 4; // Pin where the third PWM signal is connected
const int pwmPin4 = 5; // Pin where the fourth PWM signal is connected

void setup() {
  Serial.begin(9600); // Initialize serial communication at 9600 baud rate
  pinMode(pwmPin1, INPUT); // Set the PWM pins as input
  pinMode(pwmPin2, INPUT);
  pinMode(pwmPin3, INPUT);
  pinMode(pwmPin4, INPUT);
}

void loop() {
  unsigned long duration1 = pulseIn(pwmPin1, HIGH, 25000); // Read the pulse width in microseconds with a timeout
  unsigned long duration2 = pulseIn(pwmPin2, HIGH, 25000);
  unsigned long duration3 = pulseIn(pwmPin3, HIGH, 25000);
  unsigned long duration4 = pulseIn(pwmPin4, HIGH, 25000);

  Serial.print("Pulse Width 1: ");
  Serial.print(duration1);
  Serial.print(" microseconds, ");

  Serial.print("Pulse Width 2: ");
  Serial.print(duration2);
  Serial.print(" microseconds, ");

  Serial.print("Pulse Width 3: ");
  Serial.print(duration3);
  Serial.print(" microseconds, ");

  Serial.print("Pulse Width 4: ");
  Serial.print(duration4);
  Serial.println(" microseconds");

  delay(100); // Wait for a second before reading again
}
