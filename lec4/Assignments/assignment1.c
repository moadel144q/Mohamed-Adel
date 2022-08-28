#include <stdio.h>
void max(int a,int b,int c,int d);
void min(int a,int b,int c,int d);
void main(){
	int a,b,c,d;
	printf("Enter the value :");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	max(a,b,c,d);
	min(a,b,c,d);
}
void max(int a,int b,int c,int d){
	if(a>b && a>c && a>d){
		printf("The maximum num is %d\n",a);
	}else if(b>a && b>c && b>d){
		printf("The maximum num is %d\n",b);
	}else if(c>a && c>b && c>d){
		printf("The maximum num is %d\n",c);	
	}else{
		printf("The maximum num is %d\n",d);	
	}	
}
void min(int a,int b,int c,int d){
	if(a<b && a<c && a<d){
		printf("The minimum num is %d\n",a);
	}else if(b<a && b<c && b<d){
		printf("The minimum num is %d\n",b);
	}else if(c<a && c<b && c<d){
		printf("The minimum num is %d\n",c);	
	}else{
		printf("The minimum num is %d\n",d);	
	}	
}