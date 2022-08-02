#include <stdio.h>

void main (){

 float working_hours;
 float salary ;
 
 printf("please enter your working hours:");
 scanf("%f", &working_hours);
 salary= 50*working_hours;
 
 if (working_hours < 40){
	 
	salary = salary - 0.1*salary;
	
	}

	
	printf("salary is %f", salary);
	
	
	
	
}








