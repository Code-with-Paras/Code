#include<stdio.h>
int powerlog (int a,int b){
    if(b==0) return 0;
    int recAns = a*powerlog(a,b-1);
    return recAns;
}
int main()
{
    int a;
    printf("Enter A nuber:");
    scanf("%d",&a);
    int b;
    printf("Enter B power:");
    scanf("%d",&b);
    int p = powerlog(a,b);
    return 0;
}