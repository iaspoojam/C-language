#include<stdio.h>
int main()
{
    int i,j,row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    for(i=0;i<row;i++)
    {
        for(j=col-1;j>=0;j--)
        {
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }


}
