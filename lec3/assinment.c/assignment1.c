#include <stdio.h>

void main (){
int x,y;
int sum=0;


do{
  printf("enter the first number:");
  scanf("%d", &x);
  printf("enter the second number:");
  scanf("%d", &y);
  sum = x + y;
  printf("The result is %d\n", sum);
	
}while(1);
	
}