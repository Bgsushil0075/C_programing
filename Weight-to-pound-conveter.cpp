#include<stdio.h>
int main(){
 //WEIGHT Conveter program
 int choice = 0;
 float pounds = 0.0f;
 float kilograms = 0.0f;
 
 printf("Weight conversion calculator\n");
 printf("1.kilogram to pounds\n");
 printf("2.pound to kilogram\n");
 printf("3.Continue the program\n");
 printf("Enter your choice 1 or 2 and 3: ");
 scanf("%d",&choice);
 
 if(choice == 1){
 	//kilogram to pounds
 	printf("Enter the Weight in kilogram: ");
 	scanf("%f",&kilograms);
 	pounds = kilograms * 2.20462;
 	printf("%.2f kilograms is equal to %.2f pounds\n",kilograms,pounds);
 }
 else if(choice == 2){
 	//pounds to kilograms
 		printf("Enter the Weight in Pounds: ");
 		scanf("%f",&pounds);
 	kilograms = pounds / 2.20462;
 	printf("%.2f pounds is equal to %.2f kilograms\n",pounds,kilograms);
 }
 else if(choice == 3){
 	printf("Press any key to continue ");
 }
 else {
 	printf("Ivalid choice ! please eneter 1 or 2");
  }
  return 0;
}
