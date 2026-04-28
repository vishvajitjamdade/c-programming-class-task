#include<stdio.h>

int globalVariable = 60;

int add(){
    int localVariable = 50;
    static int staticVariable = 70;
    localVariable += 1;
    staticVariable += 1;
    globalVariable += 1;
    printf("localVariable = %d \n",localVariable);
    printf("globalVariable = %d \n",globalVariable);
    printf("staticVariable = %d \n",staticVariable);
}

int main(){
    add();
    add();
    add();
}