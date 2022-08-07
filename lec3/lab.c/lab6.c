#include <stdio.h>

void main (){
int i,f=1;
printf("enter the number:");
scanf("%d", &i);

do{
 f=f*i;
 --i;
 
}while( i > 0)	;
printf("The factorial = %d",f);	
	
	
}