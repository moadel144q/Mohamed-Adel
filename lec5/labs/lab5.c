#include <stdio.h>

void main(){
	int n=10 ,i,temp;
	int arr[n];
	int search,pos,count=0;
	int lower=0,upper=n-1,mid;
	
	for( i=0;i<n;i++){
		printf("Value(%d)=",i);
		scanf("%d", &arr[i]);
	}
    printf("please enter the value to search=");
	scanf("%d", &search);
	pos=-1;
	do{
		mid = (lower+upper)/2;
		if(search==arr[mid])
		{
			pos=mid;
			break;
		}else if(search>arr[mid])
		{
			lower=mid+1;
		}else
		{
			upper=mid-1;
		}
		
		
}while(lower<=upper);
    if(pos==-1)
	{
		printf("%d is not located in data",search);
	}else{
		printf("%d is located in position %d",search,pos);
	}
}
