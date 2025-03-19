#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
     int flag=0,temp;
     
    for(int i=2 ; i<=n/2 ;i++)
    {       if(n%i==0){
        flag=flag+1;}
    }
    if(flag==0){
        temp++;
        printf("It is prime Number");
    }
    else{
        printf("it is not a prime number"); }
   return 0;
}