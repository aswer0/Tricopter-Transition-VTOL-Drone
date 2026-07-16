void motorSetup() {
    pinMode(M1_PIN, OUTPUT);
    pinMode(M2_PIN, OUTPUT);
    pinMode(M3_PIN, OUTPUT);

    //arm motors
    m1_command_PWM = 200;
    m2_command_PWM = 200;
    m3_command_PWM = 200;
    commandMotors();
    delay(10);
    commandMotors();
    delay(10);

    m1_command_PWM = 125;
    m2_command_PWM = 125;
    m3_command_PWM = 125;
    commandMotors();

}

void commandMotors() {
  int wentLow = 0;
  int pulseStart, timer;

  bool flagM1 = false;
  bool flagM2 = false;
  bool flagM3 = false;

  digitalWrite(M1_PIN, HIGH);
  digitalWrite(M2_PIN, HIGH);
  digitalWrite(M3_PIN, HIGH);

  pulseStart = micros();

  while (wentLow < 3) {
    timer = micros();

    if ((m1_command_PWM <= timer - pulseStart) && !flagM1) {
      digitalWrite(M1_PIN, LOW);
      wentLow += 1;
      flagM1 = true;
    }
    if ((m2_command_PWM <= timer - pulseStart) && !flagM2) {
      digitalWrite(M2_PIN, LOW);
      wentLow += 1;
      flagM2 = true;
    }
    if ((m3_command_PWM <= timer - pulseStart) && !flagM3) {
      digitalWrite(M3_PIN, LOW);
      wentLow += 1;
      flagM3 = true;
    }
  }
}