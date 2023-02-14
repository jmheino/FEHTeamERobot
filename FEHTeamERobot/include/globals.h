#ifndef GLOBALS_H
#define GLOBALS_H

// Motor definitions
extern FEHMotor motorLeft;
extern FEHMotor motorRight;

// Servo definitions
extern FEHServo servoPassport;


// Sensor definitions
extern AnalogInputPin cdsCell;
extern DigitalEncoder encoderLeft;
extern DigitalEncoder encoderRight;

// RPS adjustment values
extern float rpsAdjustX;
extern float rpsAdjustY;

// Error detection and reaction values
extern int encoderErrors;
extern bool encodersEnabled;
extern int rpsErrors;
extern bool rpsEnabled;


#endif