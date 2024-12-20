#include<stdio.h>
void main ()
{ 
    int n,i,j;
    char ch ='A';

    printf("enter a number=");
    scanf("%d",&n);

    for ( i = 1; i<=n; i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    
}

