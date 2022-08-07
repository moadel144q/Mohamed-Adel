#include <stdio.h>

void main (){
int i, id , pass;
 printf("please enter your ID:");
 scanf("%d", &id);
switch(id){
 case 1234 :
     printf("please enter your password:");
     scanf("%d", &pass);
 for(i=0;i<3;++i){
	if( pass != 7788) {

     printf("try again:");
     scanf("%d", &pass);

 }else{

	 printf("welcome Ahmed");
	  break;
 }

 }

   if( pass != 7788){
	  printf("incorrect password for 3 times. No more tries");
 }
   break;

case 5678 :
     printf("please enter your password:");
     scanf("%d", &pass);
	for(i=0;i<3;++i){
	if( pass != 5566) {

     printf("try again:");
     scanf("%d", &pass);
	}else{
	 printf("welcome Amr");
	} }



   if( pass != 5566){
	  printf("incorrect password for 3 times. No more tries");
	  	  break;

   }
   break;
case 9870 :
     printf("please enter your password:");
     scanf("%d", &pass);
	 for(i=0;i<3;++i){
 	if( pass != 1122) {


     printf("try again:");
     scanf("%d", &pass);
	}else{
	 printf("welcome Wael");
	 	  break;

	 } }


  if( pass != 1122){
	printf("incorrect password for 3 times. No more tries");
   }
   break;
   default:
      printf("you are Not register");


}}
