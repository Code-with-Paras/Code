#include<stdio.h>
int main(){
    int arr[8] = {11,12,1,-7,96,34,-21,4};
    int max =arr[0];
    for(int i=1 ; i<=7 ;i++){
        if(max>arr[i])
        max = arr[i];
    }
    printf("%d",max);
    return 0;
}