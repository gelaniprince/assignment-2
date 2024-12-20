#include <stdio.h>
void main ()
{
    int x[3][3],y[3][3],z[3][3];
    int i,j,k;

    printf("\n enter value for matrix = x \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" enter a number : [%d][%d]  = ",i+1,j+1);
            scanf("%d",&x[i][j]);
        }
        
    }
    
    printf("\n enter value for matrix = y \n ");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf(" enter a number : [%d][%d] = ",i+1,j+1);
            scanf("%d",&y[i][j]);
        }
        
    }
    
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            z[i][j]=0;
        }
        
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                z[i][j]=z[i][j] + x[i][k] * y[k][j];
            }
            
        }
        
    }
      
    printf("\n matrix : x \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d \t ",x[i][j]);
        }
        printf("\n");
    }

    printf("\n matrix : y \n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d \t ",y[i][j]);
        }
        printf("\n");
    }
    
    printf("\n matrix : z\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d \t ",z[i][j]);
            
        }
        printf("\n");
    }
    
    
    

}