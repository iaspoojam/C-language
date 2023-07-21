#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int i,j,a;
    while(t--)
    {
        char a[200];
        a=0;
        scanf("%s",c);
        for(i=0;a[i]!='\0';i++)
        {
            if(a[i]=='B')
            {
                for(j=1;j<=2;j++)
                {
                    if(a[i+j]=='W')
                    {
                        a++;
                    }
                    if(a[i-j]=='W')
                    {
                        a++;
                    }
                }
            }
        }
        printf("%d\n",a);
    }
    return
}
