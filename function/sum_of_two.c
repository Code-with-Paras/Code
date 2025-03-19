#include<stdio.h>
int add(int a, int b);


int main(){
    int a;
    printf("Enter first number:");
    scanf("%d",&a);
    int b;
    printf("Enter second NUmber:");
    scanf("%d",&b);
   int  sum =add(a,b);
   printf("%d",sum);
    return 0;
}
int add(int a,int b){// Argaments
    return a+b;
}