#include<stdio.h>
int main()
{
int m,i,j,n,count=0;
scanf("%d",&n);
m=n/2;
int a[n];
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(a[i]==a[j])
{
count=count+1;
}
}
if(count>m)
{
printf("%d",a[i]);
break;
}
}
return 0;
}
