#include<stdio.h>

int main()
{
//	                                  format specifier = special tokens that begin with a % symbol,
//	                                  followed by a character that specifies the data and optional modifiers (width,precision,flag)
//	                                  they control how data is displayed or interpreter
	int num1 =1;
	int num2 = 10;
	int num3 = -100;
	printf("%+d\n",num1);
	printf("%+d\n",num2);
	printf("%+d\n",num3);
	
	return 0;
}
