#include<stdio.h>
int main()
{
    int a;
    printf("Enter A:");
    scanf("%d",&a);
    int b;
    printf("Enter B:");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The Value of a is%d\n",a);
     printf("The Value of b is%d",b);

    return 0;
}