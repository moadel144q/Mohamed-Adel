#include <stdio.h>

void main(){
	int n=10,i;
	int arr[n];
	int max=arr[0];
	int min=arr[5];
    for( i=0;i<10;i++){
	    printf("Value(%d)=",i+1);
	    scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("The maximum value is %d\n",max);
	printf("The minimum value is %d",min);

}