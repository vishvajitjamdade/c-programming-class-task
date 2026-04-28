#include<stdio.h>

int functionCall(){
    static int count = 0;
    count += 1;
    return count;
}

int main(){
    printf("%dst : time function is called\n",functionCall());
    printf("%dst : time function is called\n",functionCall());
    printf("%dst : time function is called\n",functionCall());
}