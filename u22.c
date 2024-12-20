#include <stdio.h>

int main() {
    int N;
    
    // Accept input from user
    printf("Enter the value of N: ");
    scanf("%d", &N);
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <=i; j++)
        { 
            printf("%d ",j);
        }
            for ( int j= i-i; j >=1; j--)
            {
                printf("%d ",j);
            }
            
        
        printf("\n");
    }
    
}
