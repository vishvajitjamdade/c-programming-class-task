#include<stdio.h>

int hello(){
    printf("Hello Function\n");
    return 0;
}


//types of function
// default function
int add(){
    int a = 10;
    int b = 45;
    int c = a+b;
    printf("%d\n",c);
    return c;
}

//parameterized function
int substract(int x, int y){  //parameters
    int c = x+y;
    printf("%d\n",c);
    return c;
}

int main(){
    hello();
    add();
    substract(10,100); //arguments
}
