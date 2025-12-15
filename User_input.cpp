#include<stdio.h>

int main (){
	int age;
	float gpa;
	char grade;
	char name[30];
	
	printf("Enetr your age: ");
	scanf("%d",&age);
	
	printf("Enter your GPA: ");
	scanf("%f",&gpa);
	
	printf("Enter your grade: ");
	scanf("%c",&grade);
	
	printf("enter your name: ");
	scanf("%s",&name);
	
	printf("%d\n",age);
    printf("%f\n",gpa);
    printf("%c\n",grade);
	printf("%s\n",name);
	
	
	return 0;
	
}
