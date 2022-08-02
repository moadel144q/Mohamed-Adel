#include <stdio.h>

void main (){
int id;
 printf("please enter your id:");
 scanf("%d", &id);

switch(id){
 case 1234:{ printf("welcome Ahmed"); }
   break;
 case 5678:{ printf("welcome Youssef");}
   break;
 case 1145:{ printf("welcome Mina");}
   break;
 default: {  printf("wrong id");}
   break;
}
	
	
	
	
}