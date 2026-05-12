#include<stdio.h>
int main(){
    int row = 5;
    int cols = 5;
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=cols;j++){
            if(i == 2 || i == 4 || j == 2 || j == 4){
                printf("5");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}