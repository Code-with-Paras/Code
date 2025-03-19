#include<stdio.h>
#include<string.h>

int main(){
   // 1.strlen
    // char name[] = "hdfghjsdfghjsdfghjdsfg";
    // int length = strlen(name);
    // printf("Length is :%d",length);

// 2. strcpy
    // char oldstr[]="oldStr";
    // char newstr[] = "newStr";
    // strcpy(newstr,oldstr);
    // puts(newstr);

//3. strcat
    
    // char firstStr[100]="Hello";
    // char secStr[] = "world";
    // strcat(firstStr,secStr);
    // puts(firstStr);

// 4. Strcmp

    char firstStr[] = "apple";
    char secStr [] = "mango";
    printf("%d\n",strcmp(firstStr,secStr));

    return 0;
}
