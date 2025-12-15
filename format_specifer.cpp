#include<stdio.h>

int main () {
//	format specifier = special that begin with a  % symbol
//	                   followed by character that speifies the data type
//	                   and optional modifires ( with, pracision flag).
//	                   they control how data is displayed or interpreted.

int age = 20;
float price=50.4;
double pi = 3.141529;
char currency = '$';
char name [] = "Sushil kumar";

printf("%d\n",age);
printf("%f\n",price);
printf("%lf\n",pi);
printf("%c\n",currency);
printf("%s\n",name);

return 0;
}

