const int LDR = A0;     // LDR analog pin
const int trigger = 2;  // Relay control pin

void setup() {
  pinMode(LDR, INPUT);      // Initialize LDR pin as input
  pinMode(trigger, OUTPUT); // Initialize trigger pin as output
}

void loop() {
  int light = analogRead(LDR);      // read analog value (0 - 1023)
  if(light > 600){                  // if flash light is on
    digitalWrite(trigger, HIGH);    // switch on the relay
    delay(10*1000);                 // wait 10 seconds
  }
}
