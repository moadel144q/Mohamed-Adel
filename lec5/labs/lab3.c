#include <stdio.h>

void main(){
	int n=10 ,i,temp;
	int arr[n];
	int sum=0;
	
	for( i=0;i<n;i++){
		printf("Value(%d)=",i+1);
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
			    arr[i]=arr[j];
			    arr[j]=temp;
			
		}
	}}
	printf("Data after sorting:\n");
    for( i=0;i<n;i++){
	    printf("%d\n",arr[i]);
		
	}
}