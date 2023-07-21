#include<stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    char a[t][20];
    for(i=0;i<t;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        int c = 0;
        int j;
        for(j=0;j<20 && a[i][j]!='\0';j++)
        {
            if(a[i][j]=='W')
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
