// Required proteus firmware libraries
#include <FEHMotor.h>
#include <FEHServo.h>
#include <FEHIO.h>

// Other libraries
#include "include/constants.h"
#include "include/globals.h"

// Motor definitions
FEHMotor motorLeft(MOTOR_PORT_FL, MOTOR_VOLTS);
FEHMotor motorRight(MOTOR_PORT_FR, MOTOR_VOLTS);

// Servo definitions
FEHServo servoPassport(SERVO_PORT_PASSPORT);


// Sensor definitions
AnalogInputPin cdsCell(CDS_CELL_PORT);
DigitalEncoder encoderLeft(ENCODER_LEFT_PORT);
DigitalEncoder encoderRight(ENCODER_RIGHT_PORT);

// RPS adjustment values
float rpsAdjustX;
float rpsAdjustY;

// Error detection and reaction values
int encoderErrors = 0;
bool encodersEnabled = true;
int rpsErrors = 0;
bool rpsEnabled = true;