#include<stdio.h>

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }


    return num*factorial(num-1);
}

int main(){
    int num = 5;
    printf("Factorail of %d is %d",num,factorial(num));
}