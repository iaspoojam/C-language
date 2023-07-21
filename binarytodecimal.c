#include<stdio.h>
long binary(int);
int main()
{
long bi;
int dec;
scanf("%d",&dec);
bi=binary(dec);
printf("the binary value of decimal no.%d is\n",dec,bi);
}
long binary(int dec)
{
    int c,b=0;
    long bi;
if(dec!=0)
{
c=dec%2;
bi=bi+c*b;
b=b*10;
binary(dec/2);
}
return bi;
}
