#include<stdio.h>     // *arr
void printNumbers(int arr[],int n);
int main(){
    int arr[] = {1,2,4,5,3,7};
    printNumbers(arr , 6);
    return 0;
}
void printNumbers(int arr[],int n){
    for(int i = 0 ; i<n ;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}