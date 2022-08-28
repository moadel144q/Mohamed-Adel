#include <stdio.h>
int Get_max (int x, int y);

void main(){
	int x,y;
	printf("enter the num :");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("the maximum num is %d",Get_max(x,y));
	
	
	
}
int Get_max(int x, int y){
	int res;
	if(x>y){
	 res = x;
	}
	else{
		res = y;
	}
		
	
	return res ;
}
