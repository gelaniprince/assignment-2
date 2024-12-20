#include<stdio.h>
void main()
{
    char word[]="programmimg";
    int len = 11;
    int i,j;

    for(i=1;i<=len;i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("%c",word[j]);
        }
        printf("\n");
    }

    for ( i = len-1; i >=1; i--)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",word[j]);
        }
        printf("\n");
    }
    
}