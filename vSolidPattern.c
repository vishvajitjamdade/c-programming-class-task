#include<stdio.h>
int main(){
    int row,col;
    printf("enter no of rows : ");
    scanf("%d",&row);
    printf("enter no of columns : ");
    scanf("%d",&col);

    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=col;j++){
            printf("v");
        }
        printf("\n");
    }
}