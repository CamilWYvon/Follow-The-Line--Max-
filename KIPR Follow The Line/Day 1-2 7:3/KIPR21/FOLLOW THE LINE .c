 int RightMotor = 3;
 int LeftMotor = 1;
 float PowerPR = 63.2;
 float PowerNR = -63.2;
  int PowerPL = 100;
 int PowerNL = -100;
 int Power0 = 0;
 int LSensor2 = 0;
 int Wait = 50;
 int threshold = 600;
 int LSensor1 = 7;
 int num=10, count=1, sum=1;
void Backwards()
{
	motor(LeftMotor,PowerNL);
	motor(RightMotor,PowerNR);
	printf(" Backwards Fuction Completed\n");
}
void BackwardsLoop()
{
	for(count = 1; count <= num; ++count)
	{
		printf("BackwardsLoop #%d \n", count);
		Backwards();
		msleep(Wait);	
	}
	
}

void Left()
{
	printf(" Left Fuction CompletedA\n");
	motor(LeftMotor,PowerNL);
	motor(RightMotor,PowerPR);
	msleep(Wait);
	ao();
	printf(" Left Fuction CompletedB\n");
}

void Right()
{
	printf("Right Fucntion CopmpletedA\n");
	motor(LeftMotor,PowerPL);
	motor(RightMotor,PowerNR);
	msleep(Wait);
	ao();
	printf("Right Fucntion CopmpletedB\n");
}
void Forward()
{
	printf(" Forward Fuction Started\n");
	motor(LeftMotor,PowerPL);
	motor(RightMotor,PowerPR);
	msleep(Wait);
	printf("Forward Function Checkpoint A\n");
	if(analog(LSensor1) < threshold)
	{
		printf("LeftSensor < threshold\n");
		Left();
		++count;
		printf("Sensor is reading : %d \n", analog(LSensor1));
	}
	printf(" Forward Fuction C\n");
	if (analog(LSensor2) < threshold);
	{
		printf("RightSensor < threshold\n");
		Right();
		++count;
		printf("Sensor is reading : %d \n", analog(LSensor2));
	}
	printf(" Forward Fuction D\n");
	if(a_button() == 1)
	{
		Right();
			Right();
			Right();
		Right();
			Right();
			Right();
		Right();
			Right();
			Right();
		Right();
			Right();
			Right();
	}
	printf(" Forward Fuction Completed\n");
}


int main()
{
	while (1)
	{
		Forward();
	}
	ao();
	return 0;
}
