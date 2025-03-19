#include<stdio.h>
int main()
{
    int n;
    printf("Enter a NUmber:");
    scanf("%d",&n);

    int sum=0;
    int LastDigit=0;
    while (n!=0)
    {
        LastDigit=n%10;
        sum=sum+LastDigit;
        n = n/10;
    }
    printf("The No of digit are %d",sum);
    
    return 0;
}