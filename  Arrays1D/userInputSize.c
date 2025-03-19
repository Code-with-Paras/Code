#include<stdio.h>
int main(){
    int arr[4] = {1,3,5,7};
     int sum = 1;
     for(int i=0 ; i<4 ; i++){
        sum = sum * arr[i];
     }
     printf("%d",sum);

    return 0;
}