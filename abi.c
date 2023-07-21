#include<stdio.h>
void fun(int *c,int *d)
{
*c=5;
 *d=7;
printf("%d %d",*c,*d);
}
int main()
{
int a,b;
scanf("%d %d",&a,&b);
fun(&a,&b);
printf("\n%d %d",a,b);

}
