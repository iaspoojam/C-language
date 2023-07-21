#include<stdio.h>
int main()
{
printf("enter the first array:");
int n;
scanf("%d",&n);
int arr[n];
printf("enter the second array:");
int n1;
scanf("%d",&n1);
int arr1[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(int j=0;j<n;j++)
{
scanf("%d",&arr1[j]);
}
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
{
if(arr[i]==arr1[j])
{
count++;
}
}

}
printf("%d",(n+n1)-count*2);


}
