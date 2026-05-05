#include<stdio.h>
int main(){
    int a = 1;
    int b = 10;

    printf("Before swapping a = %d and b = %d\n",a,b);
    
    int temp = a;
    a = b;
    b = temp;

    printf("After swapping a = %d and b = %d\n",a,b);
}