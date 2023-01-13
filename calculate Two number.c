#include <stdio.h>
void main()
{
char option;
int a,b;
printf("Please Enter your option you like \n" "Addition for +\nSubtraction for -\n" "multiply for *\nDivide for /\n");
scanf("%c",&option);
printf("Enter two value \n");
scanf("%d%d",&a,&b);
  switch(option)
  {
      case'+':printf("Addition is %d\n",a+b);
      break;
      case'-':printf("Subtraction is %d\n",a-b);
      break;
      case'*':printf("multiply is %d\n",a*b);
      break;
      case'/':printf("Divide is %d\n",a/b);
      break;
    default:printf("sorry invoiled\n");
  }
}
