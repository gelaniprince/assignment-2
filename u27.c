#include<stdio.h>
void main ()
{
    int num[10];
    int sum=0;
    int i;
    float ave;
      

      printf(" enter 10 number:\n");
      for ( i = 0; i < 10; i++)
      {
        printf(" enter number %d:",i+1);
        scanf("%d",&num[i]);
      }

      printf("\n the number you entered are:\n");
      for ( i = 0; i < 10; i++)
      {
        printf("%d ",num[i]);
        sum=sum+num[i];
      }

      ave=sum/10.0;

      printf("\n sum of the number : %d",sum);
      printf("\n average of the numbers: %.2f",ave);
      
      
}