#include<stdio.h>
int main()
{
float p,si,r;
int n,output;
printf("enter the values:");
scanf("%f%d%f",&p,&n,&r);
si=(p*n*r)/100;
output=floor(si);
printf("floor value:%d",output);
return 0;
}
