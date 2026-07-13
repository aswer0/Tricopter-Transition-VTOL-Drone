#include <Servo.h>

Servo servo1;
Servo servo2;

const int SERVO1_PIN = 6;
const int SERVO2_PIN = 7;

const int CH1_PIN = 15; //"ch2"
const int CH2_PIN = 16;
const int CH3_PIN = 17;
const int CH4_PIN = 20; //"ch1"
const int CH5_PIN = 21; //blue wire, toggle switch on far left
const int CH6_PIN = 22;

const int RECEIVER_MIN = 1000;
const int RECEIVER_MAX = 2000;

const int SERVO1_MIN = 900;
const int SERVO1_VERTICAL_CENTER = 1050;
const int SERVO1_HORIZONTAL_CENTER = 2000;
const int SERVO1_MAX = 2150;

const int SERVO2_MIN = 900;
const int SERVO2_VERTICAL_CENTER = 2000;
const int SERVO2_HORIZONTAL_CENTER = 1050;
const int SERVO2_MAX = 2150;

unsigned long ch1PWM;
unsigned long ch2PWM;
unsigned long ch3PWM;
unsigned long ch4PWM;
unsigned long ch5PWM;
unsigned long ch6PWM;

unsigned long lastPrint = 0;

void setup()
{
    Serial.begin(115200);
    delay(1000);

    servo1.attach(SERVO1_PIN);
    servo2.attach(SERVO2_PIN);

    servo1.writeMicroseconds(1500);
    servo2.writeMicroseconds(1500);

    radioSetup();
}

void loop()
{
    ch1PWM = getRadioPWM(1);
    ch2PWM = getRadioPWM(2);
    ch3PWM = getRadioPWM(3);
    ch4PWM = getRadioPWM(4);
    ch5PWM = getRadioPWM(5);
    ch6PWM = getRadioPWM(6);

    if (ch6PWM > 1500) {
      servo1.writeMicroseconds(SERVO1_VERTICAL_CENTER);
      servo2.writeMicroseconds(SERVO2_VERTICAL_CENTER);
    } else {
      servo1.writeMicroseconds(SERVO1_HORIZONTAL_CENTER);
      servo2.writeMicroseconds(SERVO2_HORIZONTAL_CENTER);
    }

    if (millis() - lastPrint > 100) {
        Serial.print("CH1: ");
        Serial.print(ch1PWM);

        Serial.print(" CH2: ");
        Serial.print(ch2PWM);

        Serial.print(" CH3: ");
        Serial.print(ch3PWM);

        Serial.print(" CH4: ");
        Serial.print(ch4PWM);

        Serial.print(" CH5: ");
        Serial.print(ch5PWM);

        Serial.print(" CH6: ");
        Serial.println(ch6PWM);

        lastPrint = millis();
    }
}

