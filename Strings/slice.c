#include<stdio.h>
#include<string.h>
void slice(char str[],int n ,int m);
int main(){
    return 0;
}
void slice(char str[],int n, int m){
    char newstr[100];
    for(int i=n ,j=0; i<=m ;i++,j++){
        newstr[j] =str[i];
    }
    newstr[j] = '\0';
    puts(newstr);
}