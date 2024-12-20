#include<stdio.h>
void main()
 {
    int n,i,j;

    printf("enter number=");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            if ((j+i)%2==0)
                printf("1 ");

            else
                printf("0 ");
            
        }
        printf("\n");
    }
    

 }