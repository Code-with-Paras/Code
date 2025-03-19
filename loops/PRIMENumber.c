#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    int a=0 ;
    for(int i=2 ; i<=n-1 ; i++)
    {
        if(n%i==0)
        {
            a = 1;
            break;
        }
    }
    if(n==1) printf("nor prime");
    if(a==0) printf("It is prime NUmber");
        else printf("It is Not a  prime Number");  
    return 0;
}