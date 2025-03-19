#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);

    int sum = 0;
    int LastDigit = 0;
    while(n!=0)
    {
        LastDigit = n%10;
        if(n%2!=0)
        {
           sum = sum + LastDigit;
        }
        n = n/10;
    }
    printf("The Sum of Odd NUmber is %d",sum);
    return 0;
}