#include<stdio.h>

int fibon(int n);

int main(){
    fibon(6);
    return 0;
}
int fibon(int n){
    if (n==0){
        return 0 ;
    }
    if(n==1){
        return 1;
    }
    int fibn1= fibon(n-1);
    int fibnm2= fibon(n-2); 
    int fibN = fibn1 + fibnm2;
    printf("fib of %d is :%d\n",n ,fibN);
}