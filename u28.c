#include<stdio.h>
#define arr 5
void main()
{
    int x[arr],temp;

    for (int i = 0; i < arr; i++)
    {
        printf("\n enter a value = ");
        scanf("\n %d",&x[i]);

    }
     
     for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < arr - 1; j++)
        {
            if (x[j+1] < x[j])
            {
                temp=x[j];
                x[j]=x[j+1];
                x[j+1]=temp;
            }
            
        }
        
     }
     
     for (int i = 0; i < 5; i++)
     {
        printf("\n %d",x[i]);
     }
     

}