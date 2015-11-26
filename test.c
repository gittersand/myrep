#include <stdio.h>

double a = 3; 

void main(void){
printf("Rechner \n ");
printf("Zahl eingeben: \n ");
int z=scanf("%d",&a);
getchar();

printf("Ergebnis= \n ",&z);
printf("%d \n",addit(a) );
getchar();
}
int addit(int b){
double c;
c=b+1;
return c;
}