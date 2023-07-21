#include<stdio.h>
int main()
{

   int n,i;
   printf("enter the value");
   scanf("%d",&n);

   int a[n];

   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
   printf("%d",a[i]);
   }
   int search;
   printf("search value");
   scanf("%d",&search);
   int k;
   for(i=0;i<n;i++)
   {
       if(a[i]==search)
       {
           k==1;
       }
   }
   if(k==1)
   {
       printf("search found");
   }
   else if(k==0)
   {
       printf("search not found");
   }

   }




