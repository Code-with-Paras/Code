#include<stdio.h>
int main(){
    // char name[50];
    // scanf("%s",name);
    // printf("your name is %s",name);

    //Dangerous this function is hack
    // char str[100];
    // gets(str);
    // puts(str);

//fgets no space matter this
    // char str[100];
    // fgets(str , 100 , stdin);
    // puts(str);


// string  using pointer

    // char *canChange = "Paras Tishu ";
    // puts(canChange);
    // canChange = "Paras ";
    // puts(canChange);

// Take a string from the user using %c.

    char str[100];
    char ch;
    int i = 0;

    while(ch !='\n'){
        scanf("%c",&ch);
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
    puts(str);

    return 0;
}