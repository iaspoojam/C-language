#include<stdio.h>
int main()
{
    int i,n,j,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(i==1 && j==1)
        {
            printf("5");
        }
        else if(i==0 && j==0)
        {
            a=n-3;
            printf(a);
        }
        else if(i==2 && j==2)
        {
            printf("*");
        }
        else{
            printf(" ");
        }
        }

    }
}
