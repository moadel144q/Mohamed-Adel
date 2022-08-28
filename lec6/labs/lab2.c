#include<stdio.h>
int sum(int *x,int *y);
void main()
{
	int x,y,z;
	printf("please enter the first value:");
	scanf("%d", &x);
	printf("please enter the second value:");
	scanf("%d", &y);
	printf("sum = %d",sum(&x,&y));


}
int sum(int *x,int *y)
{
	int z;
	z= *x+*y;
	return (z);
}