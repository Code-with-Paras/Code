#include<stdio.h>
void _sq(int *n);
void sq(int n);
int main(){
    int n;
    printf("Enter a Number is :");
    scanf("%d",&n);
     sq(n);
    printf("n  = %d\n",n);
    
    _sq(&n);
    printf("n  = %d\n",n);
    
    return 0;
}
void sq(int n){
    n = n *n;
    printf("Sq=%d\n",n);
}
void _sq(int *n){
    *n = (*n) *(*n);
    printf("Sq=%d\n",*n);

}