
//Header file for Main Code
//Contains code to shorten
//the main code
/*
void clawTurn(tMotor claw)
{
	motor[claw] = 127;

	delay(500);

	motor[claw] = 0;
}
*/
/*
void armLiftHigh(tMotor Left, tMotor Right)
{
	motor[Left] = motor[Right] = 127;

	delay(1000);

	motor[Left] = motor[Right] = 0;
}

void armLiftLow(tMotor Left, tMotor Right)
{
	motor[Left] = motor[Right] = 127;

	delay(500);

	motor[Left] = motor[Right] = 0;
}
*/

void drive(tMotor Left, tMotor Right)
{
	motor[Left] = vexRT[Ch3];
	motor[Right] = vexRT[Ch2];
}
