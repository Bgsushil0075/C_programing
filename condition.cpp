#include<stdio.h>

int main (){
	//if stetement = Do some code if a condition is true
	// if the codition is false, don't do it
    int age = 0;
    printf("Enter your age: ");
    scanf("%d", &age);
    
    
     if(age >= 65){
	printf("you are a seniour");
}
    else if(age>=18){
    printf("You are adult");
}

else if(age < 0){
	printf("you havebeen born yet");
}
else if(age == 0){
printf("you are just born yeat");
}
else {
	printf("you are a child");
}
return 0;
}
