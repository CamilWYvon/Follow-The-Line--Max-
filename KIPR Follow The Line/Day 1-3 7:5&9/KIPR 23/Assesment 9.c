int main()
{
	motor(1,100);	
	motor(3,100);
	msleep(10000);
	ao();
	msleep(5000);
	motor(1,-100);	
	motor(3,100);
	ao();
	msleep(3000)
	motor(1,-100);	
	motor(3,-100);
	motor(1,-100);	
	motor(3,100);
	ao();
	msleep(3000);
	motor(1,100);	
	motor(3,100);
	msleep(10000);
	ao();
}
