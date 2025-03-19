#include<stdio.h>
//int countodd(int arr[],int n);
void reverse(int arr[],int n);
void printfArr(int arr[],int n);
int main(){
    int arr[]={1,2,3,4,5};
    //printf("%d", countodd (arr,6));
    reverse(arr,5);
    printfArr(arr,5);
    return 0;
}
void printfArr(int arr[],int n){
    for(int i=0 ; i<n ; i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
void reverse(int arr[],int n){
    for(int i=0 ;i<n/2;i++){
        int firstval = arr[i];
        int secondval = arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1] =firstval;
    }
}
// int countodd(int arr[],int n){
//     int count = 0;
//     for(int i = 0; i<n ;i++){
//         if(arr[i] % 2 !=0){
//             count++;
//         }
//     }
//      return count; 
// }