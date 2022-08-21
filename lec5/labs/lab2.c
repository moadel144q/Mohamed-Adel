#include <stdio.h>

void main(){
	int n=10 ,i;
	int arr[n];
	int sum=0;
	for( i=0;i<n;i++){
		printf("Value(%d)=",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		sum += arr[i];
	}
	printf("Sum of arr =%d",sum);
	printf("\nAvarge of arr =%d", float(sum/n));
}