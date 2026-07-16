// #include <Servo.h>

// Servo servo1;
// Servo servo2;

// const int SERVO1_PIN = 6;
// const int SERVO2_PIN = 7;

// const int CH1_PIN = 20;
// const int CH2_PIN = 15;
// const int CH5_PIN = 21; //blue wire, toggle switch on far left

// const int RECEIVER_MIN = 1000;
// const int RECEIVER_MAX = 2000;

// const int SERVO1_MIN = 900;
// const int SERVO1_VERTICAL_CENTER = 1050;
// const int SERVO1_HORIZONTAL_CENTER = 2000;
// const int SERVO1_MAX = 2150;

// const int SERVO2_MIN = 900;
// const int SERVO2_VERTICAL_CENTER = 2000;
// const int SERVO2_HORIZONTAL_CENTER = 1050;
// const int SERVO2_MAX = 2150;

// int ch1PWM;
// int ch2PWM;
// int ch5PWM;

// float servo1Command;
// float servo2Command;

// int servo1PWM;
// int servo2PWM;

// void setup()
// {
//     Serial.begin(115200);

//     servo1.attach(SERVO1_PIN);
//     servo2.attach(SERVO2_PIN);

//     servo1.writeMicroseconds(1500);
//     servo2.writeMicroseconds(1500);

//     pinMode(CH1_PIN, INPUT);
//     pinMode(CH2_PIN, INPUT);
//     pinMode(CH5_PIN, INPUT);
// }

// void loop()
// {
//     ch1PWM = pulseIn(CH1_PIN, HIGH);
//     ch2PWM = pulseIn(CH2_PIN, HIGH);
//     ch5PWM = pulseIn(CH5_PIN, HIGH);

//     //servo1Command = (ch1PWM - RECEIVER_MIN) / (float)(RECEIVER_MAX - RECEIVER_MIN);
//     //servo2Command = (ch2PWM - RECEIVER_MIN) / (float)(RECEIVER_MAX - RECEIVER_MIN);

//     //servo1Command = constrain(servo1Command, 0.0f, 1.0f);
//     //servo2Command = constrain(servo2Command, 0.0f, 1.0f);

//     //servo1PWM = SERVO1_MIN + servo1Command * (SERVO1_MAX - SERVO1_MIN);
//     //servo2PWM = SERVO2_MIN + servo2Command * (SERVO2_MAX - SERVO2_MIN);

//     //servo1.writeMicroseconds(servo1PWM);
//     //servo2.writeMicroseconds(servo2PWM);

//     if (ch5PWM > 1500)
//     {
//         servo1.writeMicroseconds(SERVO1_VERTICAL_CENTER);
//         servo2.writeMicroseconds(SERVO2_VERTICAL_CENTER);
//     }
//     else
//     {
//         servo1.writeMicroseconds(SERVO1_HORIZONTAL_CENTER);
//         servo2.writeMicroseconds(SERVO2_HORIZONTAL_CENTER);
//     }

//     Serial.print("CH1: ");
//     Serial.print(ch1PWM);

//     Serial.print(" CMD1: ");
//     Serial.print(servo1Command, 3);

//     Serial.print(" SERVO1: ");
//     Serial.print(servo1PWM);

//     Serial.print(" | ");

//     Serial.print("CH2: ");
//     Serial.print(ch2PWM);

//     Serial.print(" CMD2: ");
//     Serial.print(servo2Command, 3);

//     Serial.print(" SERVO2: ");
//     Serial.println(servo2PWM);

//     delay(10);
// }