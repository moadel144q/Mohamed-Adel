#include <stdio.h>

void main (){
int i,x ;
float sum=0,avg;
 
   printf("please enter your");

for(i=0;i<10;i++){
   printf(" num%d:",i);
   scanf("%d", &x);
   sum+= x ;

}
   printf("The sum is %f\n" ,sum);
   printf("The average is %f" ,sum /10);
}


