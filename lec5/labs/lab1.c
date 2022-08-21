#include <stdio.h>
void main(){
	int arr[10];
	int n,i;
	for( i=0;i<10;i++){
		printf("Value(%d)=",i+1);
		scanf("%d", &arr[i]);
	}
	printf("the value in reversed order:\n");
	for( i=10;i>0;i--){
	
		printf("%d\n",arr[i]);
	}
	
	
}