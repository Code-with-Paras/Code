#include<stdio.h>
void greeting(int n)
{
    if(n==0) return;
    //for(int i=1; i<=n; i++){
        printf("Good morning\n");
        greeting(n-1);
    return ;
}

int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
    
    greeting(n);
    return 0;
}