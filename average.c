#include<stdio.h>
int main()
{
int a,b,c,d,e;
int total;
int avg;
printf("Student name:");
char str[243];
scanf("%s",&str);
printf("%s\n",str);
printf("tamil mark:");
scanf("%d",&a);
printf("english mark:");
scanf("%d",&b);
printf("maths mark:");
scanf("%d",&c);
printf("science mark:");
scanf("%d",&d);
printf("s.science mark:");
scanf("%d",&e);
total=a+b+c+d+e;
printf("Total:");
printf("%d\n",total);
avg=total/5;
printf("Average:");
printf("%d",avg);




}
