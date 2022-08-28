#include <stdio.h>

int swap(int x , int y);
void main(){
    int x,y;
	printf("enter two value :");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("x before swap = %d\ny before swap = %d\n",x,y);
  	swap(x,y);
}
int swap(int x , int y){
	int z;
	z=x+y;
	y=z-y;
	x=z-y;
    printf("x after swap = %d\ny after swap = %d",x,y);
}