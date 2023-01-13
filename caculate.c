#include<stdio.h>
void main()
{
	char option;
	int a,b;
	printf("plese enter your option like \n" "Addition for +\nSubtraction for -\n" "multiply for *\nDivide for /\n");
	scanf("%c",&option);
	printf("Enter two values\n");
	scanf("%d%d",&a,&b);
	switch(option)
	{
		case '+':printf("Addition is %d\n",a+b);
		break;
		case '-':printf("subtraction is %d\n",a-b);
		break;
		case '*':printf("multiply is %d\n",a*b);
		break;
		case '/':printf("divide is %d\n",a/b);
		break;
		default:printf("sorry\n");
		
	}
}
