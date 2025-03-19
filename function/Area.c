#include<stdio.h>
float sqarea(float side);
float circle(float rad);
float recArea(float a,float b);

int main(){
    float a= 5.0;
    float b=10.0;
    printf("area is :%f",recArea(a,b));
    return 0;
}
float sqarea(float side){
    return side * side;
}
float circle(float rad){
    return 3.14 * rad*rad;
}
float rceArea(float a, float b){
    return a * b;
}