#include<stdio.h>
int main(){
    printf("Using i except initialization\n");
    int i = 0;
    for(;i<=5;i++){
        printf("i = %d\n",i);
    }

    printf("Using j except condition\n");
    for(int j = 0;;j++){
        if(j<=5){
            printf("j = %d\n",j);
        }
        else{
            break;
        }
    }

    printf("Using k except increment/descrement\n");
    for(int k = 0;k<=5;){
        printf("k = %d\n",k);
        k++;
    }
}