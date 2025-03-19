#include<stdio.h>
int main(){
    float items[3]={100.0,123.0,234.0};
    // printf("enter a 1st item price :");
    // scanf("%f",&items[0]);
    // printf("enter a 2nd item price :");
    // scanf("%f",&items[1]);
    // printf("enter a 3rd item price :");
    // scanf("%f",&items[2]);
    
    printf("Total  price 1 : %f\n",items[0]+(0.18*items[0]));
    printf("Total  price 2 : %f\n",items[1]+(0.18*items[1]));
    printf("Total  price 3 : %f\n",items[2]+(0.18*items[2]));
    return 0;
}