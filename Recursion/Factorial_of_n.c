#include<stdio.h>
int fact(int n);

int main(){
    printf("Fact is :%d",fact(4));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    int factt = fact(n-1)*n;
    return factt;
}