#include<stdio.h>
#define arr 5
void main()
{
    int x[arr],sh,i;

    for ( i = 0; i < arr; i++)
    {
        printf("\n enter a value = ");
        scanf("%d",&x[i]);
    }
    
    printf("\n enter a search element = ");
    scanf("%d",&sh);

    for ( i = 0; i < arr; i++)
    {
        if (x[i]==sh)
        {
            printf("\n your search element value = %d",i+1);
            break;
        }
        
    }
    if (i==arr)
        {
            printf("\n enter value not found ");
        }
    


}