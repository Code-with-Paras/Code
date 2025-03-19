#include<stdio.h>
int main()
{
    int n;
    printf("Enter a NUMber :");
    scanf("%d",&n);
    // n! = n*(n-1)!
    int product = 1;
    for(int i=1 ; i<=n ; i++)
    {
        product = product * i ; 
        printf(" THe factorial of %d is : %d\n ",i,product);
    }
    
    return 0;
}