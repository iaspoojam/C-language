#include<stdio.h>
int main()
{
int i,j,n,arr[n];
scaanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n-i-1;j++)
{
int temp;
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
printf("%d",arr[j]);
}
