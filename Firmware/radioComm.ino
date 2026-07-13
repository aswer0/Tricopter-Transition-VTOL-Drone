unsigned long rising_edge_start_1, rising_edge_start_2, rising_edge_start_3, rising_edge_start_4, rising_edge_start_5, rising_edge_start_6; 
unsigned long channel_1_raw, channel_2_raw, channel_3_raw, channel_4_raw, channel_5_raw, channel_6_raw;

void radioSetup()
{
    pinMode(CH1_PIN, INPUT_PULLUP);
    pinMode(CH2_PIN, INPUT_PULLUP);
    pinMode(CH3_PIN, INPUT_PULLUP);
    pinMode(CH4_PIN, INPUT_PULLUP);
    pinMode(CH5_PIN, INPUT_PULLUP);
    pinMode(CH6_PIN, INPUT_PULLUP);
    delay(20);

    attachInterrupt(digitalPinToInterrupt(CH1_PIN), getCh1, CHANGE);
    attachInterrupt(digitalPinToInterrupt(CH2_PIN), getCh2, CHANGE);
    attachInterrupt(digitalPinToInterrupt(CH3_PIN), getCh3, CHANGE);
    attachInterrupt(digitalPinToInterrupt(CH4_PIN), getCh4, CHANGE);
    attachInterrupt(digitalPinToInterrupt(CH5_PIN), getCh5, CHANGE);
    attachInterrupt(digitalPinToInterrupt(CH6_PIN), getCh6, CHANGE);
    delay(20);
}

unsigned long getRadioPWM(int ch_num) {
  //DESCRIPTION: Get current radio commands from interrupt routines 
  unsigned long returnPWM = 0;
  
  if (ch_num == 1) {
    returnPWM = channel_1_raw;
  }
  else if (ch_num == 2) {
    returnPWM = channel_2_raw;
  }
  else if (ch_num == 3) {
    returnPWM = channel_3_raw;
  }
  else if (ch_num == 4) {
    returnPWM = channel_4_raw;
  }
  else if (ch_num == 5) {
    returnPWM = channel_5_raw;
  }
  else if (ch_num == 6) {
    returnPWM = channel_6_raw;
  }
  
  return returnPWM;
}

void getCh1()
{
    if (digitalRead(CH1_PIN))
        rising_edge_start_1 = micros();
    else
        channel_1_raw = micros() - rising_edge_start_1;
}

void getCh2()
{
    if (digitalRead(CH2_PIN))
        rising_edge_start_2 = micros();
    else
        channel_2_raw = micros() - rising_edge_start_2;
}

void getCh3()
{
    if (digitalRead(CH3_PIN))
        rising_edge_start_3 = micros();
    else
        channel_3_raw = micros() - rising_edge_start_3;
}

void getCh4()
{
    if (digitalRead(CH4_PIN))
        rising_edge_start_4 = micros();
    else
        channel_4_raw = micros() - rising_edge_start_4;
}

void getCh5()
{
    if (digitalRead(CH5_PIN))
        rising_edge_start_5 = micros();
    else
        channel_5_raw = micros() - rising_edge_start_5;
}

void getCh6()
{
    if (digitalRead(CH6_PIN))
        rising_edge_start_6 = micros();
    else
        channel_6_raw = micros() - rising_edge_start_6;
}