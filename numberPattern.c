#include<stdio.h>
int main(){
    int row;
    int cols;
    printf("Enter no of rows : \n");
    scanf("%d",&row);
    printf("Enter no of cols : \n");
    scanf("%d",&cols);

    for(int i = 1;i<=row;i++){
        int ch = 5;
        for(int j = 1;j<=cols;j++){
            printf("%d",ch++);
        }
        printf("\n");
    }
}