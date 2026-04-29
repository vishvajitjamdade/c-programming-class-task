#include<stdio.h>

int update(int num){
    printf("The value of num in function by call by value : %d\n",num);
}

int main(){
    int num = 10;
    printf("The value of num before calling to function is %d\n",num);
    update(num);
}