// Created on Thu July 5 2018
void forward()
{
	motor(0,100);
	motor(2,100);
}

int main()
{
	while(digital(8) == 0)
	{
			forward();
	}
	ao();
	
}
