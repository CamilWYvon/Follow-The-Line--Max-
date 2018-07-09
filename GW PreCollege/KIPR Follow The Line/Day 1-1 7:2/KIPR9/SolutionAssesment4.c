int main()
{
		int a = 9,b = 4, c;
	
		c = a+b;
		printf("a+b = %d \n" ,c);
		msleep(1000);
		
		c = a-b;
		printf("a-b = %d \n" ,c);
		msleep(1000);
		
		c = a*b;
		printf("a*b = %d \n" ,c);
		msleep(1000);
		
		c = a/b;
		printf("a/b = %d \n" ,c);
		msleep(1000);
	
		c=a%b;
		printf("Remainder when divided by b = %d \n" ,c);
		
		return 0;
	}
