#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i==1 || i==7 || j==1 || j==7)
        {
            printf("0");
        }
    }
}
