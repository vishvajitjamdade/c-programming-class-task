#include<stdio.h>

int update(int *n){
    *n = *n+1;
    // printf("\nAfter the execution value is : %d",*n);
}

int main(){
    int a = 10;
    printf("\nBefore calling to function value is : %d",a);
    update(&a);
    printf("\nAfter calling to function value is : %d",a);
}