int main ()
{
	int num=10, count=1, sum=1;
	
	for(count = 1; count <= num; ++count)
	{
		sum += count;
		printf("sum = %d \n", sum);
		msleep(500);
	}
	return 0;
}
