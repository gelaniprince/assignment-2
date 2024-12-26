#include <stdio.h>
void main()
{
    char x[100];
    int end, start = 0, prime = 1;

    printf("\n enter a string for check palidrome or not = ");
    scanf("%s", x);

    for (end = 0; x[end] != '\0'; end++)
        ;
    end--;

    for (start = 0; start < end; start++, end--)
    {
        if (x[start] != x[end])
        {
            prime = 0;
            break;
        }
    }
    if (prime)

        printf("\n string is palindrom");

    else
        printf("\n string is not palindrom");
}
