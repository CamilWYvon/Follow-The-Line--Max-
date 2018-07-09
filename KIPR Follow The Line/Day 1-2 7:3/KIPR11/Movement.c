 int RightMotor = 2;
 int LeftMotor = 0;

void Backward()
{
	motor(LeftMotor,-100);
	motor(RightMotor,-100);
	printf(" Backward Fuction Completed");
}
void Forward()
{
	motor(LeftMotor,100);
	motor(RightMotor,100);
	while(digital(8) == 1)
	{
		Backward();
	}
	while(digital(15) == 1)
	{
		Backward();
	}
	
	msleep(100);
	printf(" Forward Fuction Completed");
}
void Left()
{
	motor(LeftMotor,-100);
	motor(RightMotor,100);
	while(digital(8) == 1)
	{
		Backward();
	}
	while(digital(15) == 1)
	{
		Right();
	}
	msleep(100);
	printf(" Left Fuction Completed");
}
void Left0()
{
	motor(LeftMotor,0);
	motor(RightMotor,100);
	while(digital(8) == 1)
	{
		Backward();
	}
	while(digital(15) == 1)
	{
		Right();
	}
	msleep(100);
	printf(" Left Donuts In The Parking Lot");
}
void Right()
{
	motor(LeftMotor,100);
	motor(RightMotor,-100);
	while(digital(8) == 1)
	{
		Left();
	}
	while(digital(15) == 1)
	{
		Backward();
	}
	msleep(100);
	printf(" Right Fuction Completed");
}
void Right0()
{
	motor(LeftMotor,100);
	motor(RightMotor,0);
	while(digital(8) == 1)
	{
		Left();
	}
	while(digital(15) == 1)
	{
		Backward();
	}
	msleep(100);
	printf(" Right Donuts In The Parking Lot");
}
int main()
{
	Forward();
	Right();
	Left();
	Backward();
	Right0();
	Forward();
	Backward();
	Left0();
	Forward();
	Forward();
	Forward();
	Forward();
	Forward();
	ao();
	return 0;
}
