#include<stdio.h>
int calPer(int science , int math , int sanskrit);
int main(){
    int sc = 98;
    int math = 95;
    int sanskrit = 99;
    printf("Presentage is:%d",calPer(sc,math,sanskrit));
    return 0;
}
 int calPer(int science , int math , int sanskrit){
    return( (science + math + sanskrit)/3) ;
 }