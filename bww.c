
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100];
        int wb=0,bw=0;
        scanf("%s",str);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='W' && str[i+1]=='B')
            {
                wb++;
            }
            else if(str[i]=='B' && str[i+1]=='W')
            {
                bw++;
            }
        }
        printf("%d\n",wb:bw);
    }
    return 0;
}
