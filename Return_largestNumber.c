#include<stdio.h>

int largest(int a,int b){
    if(a>b){
        return a;
    }

    return b;
}

int main(){
    printf("Largest Number is : %d\n",largest(7,8));
}