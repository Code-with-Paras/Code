#include<stdio.h>
int main(){
    
    int x;
    int *ptr;
    ptr = &x;
    *ptr=0;//0

    printf("x = %d\n",x); // output-0
    printf("*ptr = %d\n",*ptr); //output - 0
   
   *ptr+=5;

    printf("x = %d\n",x);
    printf("8ptr = %d\n",*ptr);

    (*ptr)++;

    printf("x = %d\n",x);
    printf("*ptr = %d\n",*ptr);
    return 0;
 }