#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=n;i<=200;i=i+n)
    printf("%d ",i);
    return 0;
}