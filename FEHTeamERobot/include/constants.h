#ifndef CONSTANTS_H
#define CONSTANTS_H

#define PI 3.14159265358979

#define MOTOR_PORT_FL FEHMotor::Motor3
#define MOTOR_PORT_FR FEHMotor::Motor2
#define MOTOR_VOLTS 7.2 

#define MOTOR_SIDE_DIR_CORRECTOR -1


//Calculations for distance
#define WHEEL_DIAM 2.5 // inches (including treads)
#define WHEEL_CIRC (WHEEL_DIAM * PI)


//Servo
#define SERVO_PORT_PASSPORT FEHServo::Servo0


// Ports
#define CDS_CELL_PORT FEHIO::P0_0
#define ENCODER_LEFT_PORT FEHIO::P0_0
#define ENCODER_RIGHT_PORT FEHIO::P0_0


#endif