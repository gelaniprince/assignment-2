#include<stdio.h>
void main ()
{
    int n,i,j;

    printf("\n enter number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

}