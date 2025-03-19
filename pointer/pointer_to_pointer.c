#include<stdio.h>
int main(){
    // float price = 100.00;
    // float *ptr = &price;
    // float **ptr = &ptr;

    int i=5;
    int *ptr = &i;
    int **pptr = &ptr;

    printf("**pptr = %d\n",**pptr);
    return 0;
}