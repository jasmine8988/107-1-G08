#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    float height,m,weight,BMI;
	printf("enter your height(cm): ");
	scanf("%f",&height);
	printf("enter your weight(kg): ");
	scanf("%f",&weight);
	
	m=height/100;
	BMI=weight/(m*m);
	printf("BMI=%.1f\n\n",BMI);
	
	if(BMI<18.5)
	printf("�魫�L��");
	
	if(BMI>=18.5 && BMI<24)
	printf("�魫�A��");
	
	if(BMI>=24 && BMI<27)
	printf("�L��");
	
	if(BMI>=27 && BMI<30)
	printf("���תέD");
	
	if(BMI>=30 && BMI<35)
	printf("���תέD");
	
	if(BMI>=35)
	printf("���תέD");
	
	
	return 0;

	
   
}
