

int s=0;
int a=0;
int m=0;
int d=0;

int main (int argc, char *argv[])
{
int SubtractionValue=0;
int AdditionValue=0;
int DivisionValue=0;
int MultiplicationValue=0;
char str[15] ;
int Num1Sub;
int Num2Sub;
int Num1Add;
int Num2Add;
int Num1Div;
int Num2Div;
int Num1Mult;
int Num2Mult;

		printf ("Enter a calculation ");
		scanf ("%s", str);
		if (str == "Subtraction")
		{
			printf("Enter a number");
			scanf ("%s", Num1Sub);
			printf("Enter another number");
			scanf("%s", Num2Sub);
			if (Num1Sub>Num2Sub)
			{
				s = Num1Sub-Num2Sub ;
				printf("%s", s);
			}
			else
			{
				s = Num2Sub-Num1Sub ;
				printf("%s", s);
			}
		}
		
		if (str == "Addition")
		{
			printf("Enter a number");
			scanf ("%d", Num1Add);
			printf("Enter another number");
			scanf("%d", Num2Add);
			a = Num1Add + Num2Add ;
			printf("%d", a);
		}
		if (str == "Multiplication")
		{
			printf("Enter a number");
			scanf ("%s", Num1Mult);
			printf("Enter another number");
			scanf("%s", Num2Mult);
			m = Num1Mult*Num2Mult ;
		}
		if (str == "Divsion")
		{
			printf("Enter a number");
			scanf ("%s", Num1Div);
			printf("Enter another number");
			scanf("%s", Num2Div);
			if (Num1Div>Num2Div){
				d = Num1Div/Num2Div;
				printf("%s", d);
			}
			else
				d = Num2Div/Num1Div;
				printf("%s", d);
		}
		else
		{
			printf("Not a valid calculation! You entered: %s", str);
		}
	}			
