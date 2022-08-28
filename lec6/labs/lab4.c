#include<stdio.h>

void main()
{
	int arr[5];
	int sum=0,*p;
	for(int i=0;i<5;i++)
	{
		printf("value %d =",i);
		scanf("%d", &arr[i]);
	}
	for(p=&arr[0];p<&arr[5];p++)
	{
		sum += *p;
	}
	printf("the summation of array = %d",sum);
}