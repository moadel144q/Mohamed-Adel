#include <stdio.h>

void main()
{
	int n=10,i;
	int arr[n];
	int search,pos,count=0;
	for(i=0;i<n;i++){
		printf("value(%d)=",i+1);
		scanf("%d", &arr[i]);
	}
	printf("please enter the value to search=");
	scanf("%d", &search);
	for(i=0;i<n;i++){
		if(arr[i]==search){
			count++;
		}
	}
	if(count>0){
			printf("%d is located %d times ",search,count);
		}else{
			printf("%d is not located in data",search);
		}
	
}