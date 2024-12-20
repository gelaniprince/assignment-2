#include<stdio.h>
void main()
{
    int x[3][3],y[3][3],z[3][3];
    int i,j;
     
     printf("\n enter number for matrix = x");
     for ( i = 0; i < 3; i++)
     {
        for ( j = 0; j < 3;j++)
        {
            printf(" enter number : [%d][%d] = ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
        
     }

     printf("\n enter number for matrix : y");
     for ( i = 0; i < 3; i++)
     {
        for ( j = 0; j < 3; j++)
        {
            printf("enter number : [%d][%d] = ",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
        
     }
     
     for ( i = 0; i < 3; i++)
     {
        for ( j = 0; j < 3; j++)
        {
            z[i][j]=x[i][j]+y[i][j];
        }
        
     }

     printf("\n matrix = x \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d \t",x[i][j]);
            }
            printf("\n");
        }
        
    printf("\n matrix = y \n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d \t",y[i][j]);
            }
            printf("\n");
        }
        
     printf("\n matrix = z\n");
        for ( i = 0; i < 3; i++)
        {
            for ( j = 0; j < 3; j++)
            {
                printf("%d \t",z[i][j]);
            }
            printf("\n");
        }
        

}