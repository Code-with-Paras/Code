#include<stdio.h>
void fun(){
    printf("Hello");
}

int main()
{
    void fun();
    fun();
    return 0;
}
