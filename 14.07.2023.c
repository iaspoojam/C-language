#include<stdio.h>
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }
   int temp;
   for(int i=0;i<n;i++)
   {
   for(int j=i+1;j<i;j++)
   {
       if(arr[j]>arr[i])
       {
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
         }
   }
   for(int i=0;i<n;i++)

       {
         printf("%d",arr[j]);
       }
   }

   if(arr[j]<arr[i])
   {

       printf("%d",arr[0],arr[1]);
   }

   }

