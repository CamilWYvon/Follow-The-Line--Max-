int main();
	{
		(int a = 6,  b = 11,  c = 10);
		
		print f("%d == %d = %d \n", a, b,  a == b)
		print f("%d == %d = %d \n", a, c,  a == c)		
		
		print f("%d > %d = %d \n", a, b,  a > b)
		print f("%d > %d = %d \n", a, c,  a > c)		
		
		print f("%d < %d = %d \n", a, b,  a < b)
		print f("%d < %d = %d \n", a, c,  a < c)		
		
		print f("%d != %d = %d \n", a, b,  a != b)
		print f("%d != %d = %d \n", a, c,  a != c)		
		
		print f("%d >= %d = %d \n", a, b,  a >= b)
		print f("%d >= %d = %d \n", a, c,  a >= c)		
		
		print f("%d <= %d = %d \n", a, b,  a <= b)
		print f("%d <= %d = %d \n", a, c,  a <= c)
	}
