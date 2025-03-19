#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int sum =0;
    int a=1,b=1;

    for(int i=1 ; i<=n-2 ; i++) 
    {
        sum = a+b;
        a = b;
        b = sum;
        
    }
    printf("%d",sum);
    return 0;
}