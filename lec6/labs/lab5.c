#include<stdio.h>
int multiplication(int *ptr1,int *ptr2);
void main()
{
	int arr_a[5]={2,4,6,8,10};
	int arr_b[5]={1,3,5,7,9};
	multiplication(arr_a,arr_b);
}
int multiplication(int *ptr1,int *ptr2)
{
	int multi;
	for(int i=0;i<5;i++)
	{
		multi += ptr1[i] * ptr2[i];
	}
	printf("the multiplication of arrays = %d",multi);
}