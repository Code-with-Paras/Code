#include<stdio.h>
void hello(int count);
int main(){
    hello(10);
    return 0;
}
//recursive function
void hello(int count){
    if(count == 0){
        return ;
    }
    printf("Hello world\n");
    hello(count -1);
}