#include<stdio.h>
 
 void hello();
 void Bye();

 int main(){
    hello();
    Bye();
    hello();
    return 0;
 } 
void hello(){
    printf("Hello !\n");
    printf("abused \n");
}
void Bye(){
    printf("Good Bye\n");
}