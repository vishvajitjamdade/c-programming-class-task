#include<stdio.h>
int main(){
    int start = 1;
    int end = 100;
    int num;
    printf("Check number to lies within 1-100\n");
    scanf("%d",&num);
    if(num>start && num<end){
        printf("%d is within range 1-100",num);
    }
    else{
        printf("%d is not within range 1-100",num);
    }
}