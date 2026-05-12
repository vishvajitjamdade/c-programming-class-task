#include<stdio.h>
int main(){
    int row;
    int cols;
    printf("Enter no of rows : \n");
    scanf("%d",&row);
    printf("Enter no of cols : \n");
    scanf("%d",&cols);

    for(int i = 1;i<=row;i++){
        char ch = 'a';
        for(int j = 1;j<=cols;j++){
            printf("%c",ch++);
        }
        printf("\n");
    }
}