 int RightMotor = 3;
 int LeftMotor = 1;
 int PowerL = 100;
float PowerR = 63.2;
 int  main()
 {
	while(1)
 	{
		motor(LeftMotor,PowerL);
		motor(RightMotor,PowerR);
		msleep(100);
	 if(a_button() == 0)
		{
			ao();
		}
	}
 }
