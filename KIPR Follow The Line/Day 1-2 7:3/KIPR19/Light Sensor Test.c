int main()
{
	while(1)
	{
		printf("Sensor is reading : %d \n", analog(1));
		msleep(500);
	}
	return 0;
}
