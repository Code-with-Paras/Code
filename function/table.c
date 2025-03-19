#include<stdio.h>

void printTable(int n);
int main(){
    int n;
    printf("Emter  Number is:");
    scanf("%d",&n);
    printTable(n);// argument / actual parameter
    return 0;
}
void printTable(int n){//parametre
    for(int i=1 ; i<=10 ;i++){
        printf("\n%d ",i*n);
    }

}