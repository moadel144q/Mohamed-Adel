#include <stdio.h>
void main(){
int x,y;
char op;
int res;
printf("please enter ur op:");
scanf("%c", &op);
printf("please enter ur first num=");
scanf("%d", &x);
printf("please enter ur sec num=");
scanf("%d", &y);
switch(op){
case '+':
    printf("res=%d",(x+y));
    break;
case '-':
    printf("res=%d",(x-y));
    break;
case '*':
    printf("res=%d",(x*y));
    break;
case '/':
    printf("res=%d",(x/y));
    break;
case '&':
    printf("res=%d",(x&y));
    break;
case '|':
    printf("res=%d",(x|y));
    break;
case '^':
    printf("res=%d",(x^y));
    break;
default:
    printf("wrong choice");
}


}
