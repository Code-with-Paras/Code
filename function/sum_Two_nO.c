#include<stdio.h>
int sum(int a, int b);

int main(){
    int a,b;
    printf("Emter 1st Number is:");
    scanf("%d",&a);
    printf("Enter 2nd Number is :");
    scanf("%d",&b);
    //int s = sum(a,b);
    //printf("sum is %d:",s);
    sum(a,b);
    return 0;
}
int sum(int x, int y){
    printf("sum is %d:",x+y);
    return 0 ;
}