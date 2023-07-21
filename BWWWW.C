#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        int wb=0;
        scanf("%s",str);
                for(int i=0;i<str[100];i++)
        {
            if(str[i]=='B')
            {
                for(int j=1;j<=2;j++)
                {
                    if(str[i+j]=='W');
                    {
                        wb++;
                        str[i+j]='a';
                    }
                    if(str[i-j]=='W')
                    {
                        wb++;
                        str[i-j]='a';
                    }
               }
                }
            }
            printf("%d\n",wb);
    }
}
