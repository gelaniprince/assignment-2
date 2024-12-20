#include<stdio.h>
int sum(int a,int b);
int ave(int a,int b);

void main ()
{
    int num1,num2;

    printf("\n enter a two number = ");
    scanf("%d%d",&num1,&num2);

    sum(num1,num2);
    ave(num1,num2);

}

int sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("\n sum : %d",sum);
}

int ave(int a,int b)
{
    float ave;
    ave=(a+b)/2.0;
    printf("\n ave : %.2lf",ave);
}