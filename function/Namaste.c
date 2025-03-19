#include<stdio.h>

void Namaste();
void Bonjour();

int main(){
    printf("Enter f for French &  i for indian :");
    char a;
    scanf("%c",&a);
    if(a =='i'){
        Namaste();
    }
    else{
        Bonjour();
    }
    return 0;
}

void Namaste(){
    printf("Namaste\n");
    printf("Hey Boy A person whose help\n");
}
void Bonjour(){
    printf("Bonjour\n");
}
