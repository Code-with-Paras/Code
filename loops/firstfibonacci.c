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
        printf("the %dth fibonacci is %d ",n,sum);
    return 0;
    }
    
}