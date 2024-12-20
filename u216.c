#include<stdio.h>
void main()
{
    char x[100];
    int len=0;

    printf("\n enter a value = ");
    scanf("%s",x);

    while (x[len]!='\0')
    {
        len++;
    }
    
    printf("\n lenth is = %d",len);
}