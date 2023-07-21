#include<stdio.h>
int main()
{
   int a[1000],n,i;
   scanf("%d",&n);
   printf("the elements are;");
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   printf("Array elements:\n");
   for(i=n-1;i>=0;i--)
   printf("%d\n",a[i]);

}

