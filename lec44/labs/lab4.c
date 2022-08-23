#include <stdio.h>
 int fact(int n);
void main(){
	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	printf("The factorial of %d is %d",x,fact(x));
}
int fact(int n){
	if(n==0){
		return 1;
	}else{
		return n*fact(n-1);
	}
}