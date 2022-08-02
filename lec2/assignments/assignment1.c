#include <stdio.h>

void main () {
int num,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,search;
  printf("enter the 10 num:");
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  scanf("%d", &n5);
  scanf("%d", &n6);
  scanf("%d", &n7);
  scanf("%d", &n8);
  scanf("%d", &n9);
  scanf("%d", &n10);
  printf("enter the value to search:");
  scanf("%d", &search);
if(search == n1){
	printf("value is located at element num1");
}
else if(search == n2){
	printf("value is located at element num2");
}
else if(search==n3){
	printf("value is located at element num3");
}
else if(search==n4){
	printf("value is located at element num4");
}
else if(search==n5){
	printf("value is located at element num5");
}
else if(search==n6){
	printf("value is located at element num6");
}
else if(search==n7){
	printf("value is located at element num7");
}
else if(search==n8){
	printf("value is located at element num8");
}
else if(search==n9){
	printf("value is located at element num9");
} 
else if(search==n10){
	printf("value is located at element num10");
} 
else {
	printf("num no exist") ;
	 
}

}