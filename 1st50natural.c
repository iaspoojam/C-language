#include<stdio.h>
int function(int);
int main()
{
    int n=1;
    printf("%d",function(n));
}
int function(int n)
{
    if(n<50)
    {
        printf("%d ",n);
        function(n+1);
    }
}
