#include<stdio.h>
//Case 1.
 int main(){
//     int age = 22;
//     int *ptr = &age;
//     printf("ptr  = %u\n",ptr);
//     ptr++ ;
//     printf("ptr = %u\n",ptr);
//     ptr-- ;
//     printf("ptr = %u\n",ptr);

//case 2.
    // float price = 20.00;
    // float *ptr = &price;
    // printf("ptr  = %u\n",ptr);
    // ptr++;
    // printf("ptr = %u\n",ptr);
    // ptr--;
    // printf("ptr = %u\n",ptr);
//Case 3.
    char star = '*';
    char *ptr = &star;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr  = %u\n",ptr);
    ptr--;
    printf("ptr  = %u\n",ptr);
    return 0;
}