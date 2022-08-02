#include <stdio.h>

void main (){
int x ;
	printf("please enter number:");
	scanf("%d", &x);
	
if (x >= 0 && x < 50){
	printf("your rating is Failed");
}
else if (x >= 50 && x < 65){
	printf("your rating is Normal");
}
else if (x >= 65 && x < 75){
printf("your rating is Good");
}
else if (x >= 75 && x < 85){
	
	printf("your rating is Very Good");
}
else if (x >= 85 ){
	
	printf("your rating is very Excellent");
}

}