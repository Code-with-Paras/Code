#include<stdio.h>
float celsiuc(float c);
int main(){
    int n;
    // printf("Enter Celsius:");
    // scanf("%d",&n);
    printf("far : %f",celsiuc(40));
    return 0;
}
float celsiuc(float c){
    float far = c *(9.00/5.0)+32;
    return far;
}