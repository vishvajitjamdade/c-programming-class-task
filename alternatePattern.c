#include<stdio.h>
int main(){
    int row = 4;
    int col = 5;
    for(int i = 0;i<row;i++){
        for(int j = 1;j<=col;j++){
            if(i%2==0){
                printf("a");
            }
            else{
                printf("b");
            }
        }
        printf("\n");
    }
}