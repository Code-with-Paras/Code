#include<stdio.h>
int main(){
    int arr[8] = {11,12,4,7,96,34,21,4};
    int max = arr[0];
    for(int i=0 ; i<=8 ;i++){
        if(max<arr[i])
        max = arr[i];
    }
    printf("%d",max);
    return 0;
}