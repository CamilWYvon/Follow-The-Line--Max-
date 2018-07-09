 int RightMotor = 2;
 int LeftMotor = 0;
 int PowerP = 100;
 int PowerN = -100;
 int Power0 = 0;
 int LightSensor = 0;
 int Wait = 100;
 int BSensor1 = 8;
 int BSensor2 = 15;
 int num=10, count=1, sum=1;
void Backwards()
{
	motor(LeftMotor,PowerN);
	motor(RightMotor,PowerN);
	printf(" Backward Fuction Completed");
}
void BackwardLoop()
{
	for(count = 1; count <= num; ++count)
	{
		sum += count;
		printf("sum = %d \n", sum);
		msleep(500);
		while(count<=3)
	{
		Backwards();
	}
}
void Forward()
{
	motor(LeftMotor,PowerP);
	motor(RightMotor,PowerP);
	while(digital(BSensor1) == 1)
	{
		Backward();
	}
	while(digital(BSensor2) == 1)
	{
		Backward();
	}
	while(analog(LightSensor)<700)
	{
		Backward();
	}
	while(a_button() == 0)
		{
		ao();
		}
	msleep(Wait);
	printf(" Forward Fuction Completed");
}
void Left()
{
	motor(LeftMotor,PowerN);
	motor(RightMotor,PowerP);
	while(digital(BSensor1) == 1)
	{
		Backward();
	}
	while(digital(BSensor2) == 1)
	{
		Right();
	}
	while(analog(LightSensor)<700)
	{
		Right();
	}
	while(a_button() == 0)
		{
		ao();
		}
	msleep(Wait);
	printf(" Left Fuction Completed");
}
void Left0()
{
	motor(LeftMotor,Power0);
	motor(RightMotor,PowerP);
	while(digital(BSensor1) == 1)
	{
		Backward();
	}
	while(digital(BSensor2) == 1)
	{
		Right();
	}
	while(analog(LightSensor)<700)
	{
		Right0();
	}
	while(a_button() == 0)
		{
		ao();
		}
	msleep(Wait);
	printf(" Left Donuts In The Parking Lot");
}
void Right()
{
	motor(LeftMotor,PowerP);
	motor(RightMotor,PowerN);
	while(digital(BSensor1) == 1)
	{
		Left();
	}
	while(digital(BSensor2) == 1)
	{
		Backward();
	}
	while(analog(LightSensor)<700)
	{
		Left();
	}
	while(a_button() == 0)
	{
		ao();
	}
	msleep(Wait);
	printf(" Right Fuction Completed");
}
void Right0()
{
	motor(LeftMotor,PowerP);
	motor(RightMotor,Power0);
	while(digital(BSensor1) == 1)
	{
		Left();
	}
	while(digital(BSensor2) == 1)
	{
		Backward();
	}
	while(analog(LightSensor)<700)
	{
		Left0();
	}
	while(a_button() == 0)
		{
		ao();
		}
	msleep(Wait);
	printf(" Right Donuts In The Parking Lot");
}
int main()
{
	while (1)
	{
		Forward();
	}
	//ao();
	//return 0;
}
