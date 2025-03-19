#include<stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
   
    int r=0;
    // int sum = n+r;
  
    while(n!=0)
    {
        r = r*10;
        r = r+(n%10);
        n = n/10;
    }
     int sum = n+r;
     printf("%d",sum);    
    return 0;
}