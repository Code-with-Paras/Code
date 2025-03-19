#include<stdio.h>
void Hello(int n);

int main(){
    Hello(5);
    return 0;
}
void Hello(int n){
    if(n==0){
        return;
    }
    printf("Hello pw\n");
    Hello(n-1);
}