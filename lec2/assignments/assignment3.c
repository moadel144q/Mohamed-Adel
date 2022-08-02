#include <stdio.h>

void main (){
int x,y,z;
 printf("enter the numbers:"); 
 scanf("%d", &x);
 scanf("%d", &y);
 scanf("%d", &z);
if(x>y && x>z){
	printf("The maximum value is %d", x);
}

else if(y>x && y>z){
	printf("The maximum value is %d", y);
}

else if(z>x && z>y){
	printf("The maximum value is %d", z);
}

	
	
	
	
	
	
	
	
	
	
}