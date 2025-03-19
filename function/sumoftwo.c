#include<stdio.h>
int add(int x, int y)
{
    return x*y;
}
int main()
{
    int a;
    printf("Enter 1st Nuber:");
    scanf("%d",&a);

    int b;
    printf("Enter 2nd Number:");
    scanf("%d",&b);
    int sum = add(a,b);
    
    printf("%d",sum);

    return 0 ;
}
