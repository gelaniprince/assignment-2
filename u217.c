#include<stdio.h>
void main()
{
    char x[100];
    int i=0;

    printf("\n enter  a lowercase string = ");
    scanf("%s",x);

  
    while (x[i]!='\0')
    {
        x[i] = x[i]-32;
        i++;
    }
    printf("\n now string is = %s",x);

}