#include <stdio.h>

void main (){
int pass;
int Id;
 printf("please enter your id:");
 scanf("%d", &Id);
switch(Id){
  case 1234:
    printf("enter your password:");
    scanf("%d", &pass);
  if(pass == 147) {
    printf("congratulation");	
}
  else {
	printf("wrong password");  
 
}
  break;
  default:
    printf("invalid id");
 }}


