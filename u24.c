#include<stdio.h>
void main()
{ 
    int n,j,i;

    printf("enter a number =");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("%c",'A'+j);
        }
        for ( j = i-2; j >=0; j--)
        {
            printf("%c",'A'+j);
        }
         printf("\n");
    }
   
}