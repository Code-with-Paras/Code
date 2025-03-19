// #include<stdio.h>
// void calculatePrice(float value);
// int main(){
//     float value=100.0;
//     calculatePrice(value);
//     return 0;
// }
// void calculatePrice(float value){
//     value = value +(0.18*value);
//     printf("final price is: %f", value);
// }
#include<stdio.h>
 void calculateprice(float value); 

int main(){
    float value = 100.0;
    calculateprice(value);
    printf("\nActual value is %f: ",value);
    return 0;
}
void calculateprice(float value){
    value = value + (0.18 * value);
    printf("\nFinal price is :%f",value);
}
