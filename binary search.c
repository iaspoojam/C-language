#include<stdio.h>
int main()
{
int i,n;
printf("enter the value");
scanf("%d",&n);
int a[n],flag;
int search,mid,low=0,high=n-1;
printf("search value");
scanf("%d",&search);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
while(low<=high)
{
    mid=(low+high)/2;
    if(search==a[mid])
    {
     flag=1;
     }
    if(search>a[mid])
    {
       low=mid+1;
    }
    else if(search<a[mid])
    {
        high=mid-1;
    }
}
    if(flag==1)
        printf("search found");
    else
        printf("not found");

}
