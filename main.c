#include <stdio.h>
int main(){
int a,b; printf("\nsaisie 1ere nombre:"); scanf("%d,",&a);
do{printf("\nsaisie 2eme nobmre:");scanf("%d,",&b);}while(b==0);
printf("\n%d+%d=%d",a,b,a+b);printf("\n%d-%d=%d",a,b,a-b);
printf("\n%d/%d=%f\n",a,b,(float)a/b);return (0);}

