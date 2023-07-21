
#include <stdio.h>
#include <string.h>

int main()
{
  	char str[100], ch;
  	int i, index;
  	index =-1;

  	printf("\nsentence:");
  	gets(str);
  	printf("\nSearch character :  ");
  	scanf("%c",&ch);
    for(i = 0; i <= strlen(str); i++)
  	{
  if(str[i]==ch)
		{
         index=i;
 		}
	}
    if(index==-1)
  	{
  		printf("\n not found '%c' ", ch);
	}
	else
	{
		printf("\n last search element '%c''Position %d ", ch, index+1);
	}
  	return 0;
}
