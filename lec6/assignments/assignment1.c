#include<stdio.h>
int sorting(int *ptr);
void main()
{
	int arr[10]={88,25,48,63,21,78,55,11,1,154};
	sorting(arr);
}
int sorting(int *ptr)
{
	int temp,i,j;
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<9;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
			    ptr[i]=ptr[j];
			    ptr[j]=temp;
			
			}
		}
	}
		printf("Data after sorting:\n");
    for( i=0;i<10;i++){
	    printf("%d\n",ptr[i]);
		
	}
}