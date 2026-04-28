#include<stdio.h>

int add(int x,int y){
    int z = x+y;
    return z;
}

int sub(int x,int y){
    int z = x-y;
    return z;
}

int mult(int x,int y){
    int z = x*y;
    return z;
}

int divi(int x,int y){
    int z = x/y;
    return z;
}

int main(){
    printf("Addition = %d\n",add(20,10));
    printf("Substraction = %d\n",sub(20,10));
    printf("Multiplication = %d\n",mult(20,10));
    printf("Division = %d\n",divi(20,10));
}

//NOTE : Global Variable : It is accessibe in entire program.
//       Local Variable : Is accessible within that scope only.