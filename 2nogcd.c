
#include<stdio.h>
int gcd(int max,int min);
int main()
{
    int size,arr[size-1],i,max,min;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    if (size == 1)
    {
          min=max=arr[0];
    }
   if (arr[0] > arr[1])
   {
      max = arr[0];
      min = arr[1];
   }
   else
   {
      max = arr[1];
      min = arr[0];
   }
   for (i = 2; i<size; i++)
   {
      if (arr[i] > max)
      {
         max = arr[i];
      }
      else if (arr[i] < min)
      {
         min = arr[i];
      }
   }
   printf("Minimum element: %d", min);
   printf(" \nMaximum element: %d", max);
   gcd(max,min);
   printf("\n%d",gcd(max,min));
   return 0;
}
int gcd(int max, int min)
 {
    if (min != 0)
    {
        return gcd(min, max % min);
    }
    else
    {
        return max;
    }
 }
