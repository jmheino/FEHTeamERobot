#include "test.h"
#include <FEHLCD.h>
#include <FEHIO.h>
#include <FEHMotor.h>
#include <FEHServo.h>
#include <FEHUtility.h>

void test()
{
#pragma region //CdS call read and write
    AnalogInputPin CdS_cell(FEHIO::P0_0);
    while(1)
    {
    float x = CdS_cell.Value();
    LCD.WriteLine(x);
    Sleep(1);
    }
    #pragma endregion




    #pragma region //CdS + Servo
    AnalogInputPin CdS_cell(FEHIO::P0_0);
    FEHServo servo(FEHServo::Servo0);
    servo.SetMin(540);
    servo.SetMax(2430);
    while(1)
    {
        float x = CdS_cell.Value();
        float angle;
        angle = x / 3.3 * 180;
        servo.SetDegree(angle);
        LCD.WriteLine(x);
        Sleep(1);

    }
    #pragma endregion

    #pragma region //Maze code with centering using microswitches
     FEHMotor rightdrive(FEHMotor::Motor0, 9.0);
    FEHMotor leftdrive(FEHMotor::Motor1, 9.0);
    DigitalInputPin fleft(FEHIO::P1_0);
    DigitalInputPin fright(FEHIO::P1_1);
    DigitalInputPin bleft(FEHIO::P1_3);
    DigitalInputPin bright(FEHIO::P1_2);
    

    

    do{
        leftdrive.SetPercent(30);
        rightdrive.SetPercent(30);
    } while (fleft.Value() == 1 && fright.Value() == 1);
    
    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    
    do{
        if (fleft.Value()==0)
        {
            rightdrive.SetPercent(30);
        }
        else if(fright.Value() == 0)
        {
            leftdrive.SetPercent(30);
        }
    }while(fleft.Value() == 1 || fright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);

    do{
    leftdrive.SetPercent(-5);
    rightdrive.SetPercent(-20);
    } while (bleft.Value() == 1 && bright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    Sleep(0.5);

    do{
        if (bleft.Value()==0)
        {
            rightdrive.SetPercent(-30);
        }
        else if(bright.Value() == 0)
        {
            leftdrive.SetPercent(-30);
        }
    }while(bleft.Value() == 1 || bright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);

    do{
        leftdrive.SetPercent(30);
        rightdrive.SetPercent(30);
    } while (fleft.Value() == 1 && fright.Value() == 1);
    
    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    
    do{
        if (fleft.Value()==0)
        {
            rightdrive.SetPercent(30);
        }
        else if(fright.Value() == 0)
        {
            leftdrive.SetPercent(30);
        }
    }while(fleft.Value() == 1 || fright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);

    do{
    leftdrive.SetPercent(-20);
    rightdrive.SetPercent(-5);
    } while (bleft.Value() == 1 && bright.Value() == 1);
    
    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    Sleep(0.5);

    do{
        if (bleft.Value()==0)
        {
            rightdrive.SetPercent(-30);
        }
        else if(bright.Value() == 0)
        {
            leftdrive.SetPercent(-30);
        }
    }while(bleft.Value() == 1 || bright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    

    do{
        leftdrive.SetPercent(30);
        rightdrive.SetPercent(30);
    } while (fleft.Value() == 1 && fright.Value() == 1);
    
    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);
    
    do{
        if (fleft.Value()==0)
        {
            rightdrive.SetPercent(30);
        }
        else if(fright.Value() == 0)
        {
            leftdrive.SetPercent(30);
        }
    }while(fleft.Value() == 1 || fright.Value() == 1);

    leftdrive.SetPercent(0);
    rightdrive.SetPercent(0);

    #pragma endregion
}