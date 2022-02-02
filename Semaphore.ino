// Maps pins to variables.
int redLed = 12;
int yellowLed = 10;
int greenLed = 8;

// Set the time between changes, at 400 ms.
int waitTime = 400;

// Sets the led pins as output.
void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
    // Turns on the red light.
    digitalWrite(redLed, HIGH);
    delay(waitTime);

    // Turns off the red light, and turns on the yellow one.
    digitalWrite(redLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(waitTime);

    // Turns off the yellow light, and turns on the green one.
    digitalWrite(yellowLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(waitTime);

    // Turns off the green light, and turns on the yellow one.
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(waitTime);

    // Turns off the yellow light.
    digitalWrite(yellowLed, LOW);
}