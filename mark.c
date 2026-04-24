#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks\n");
    scanf("%d",&marks);
    if(marks<=60 && marks>40){
        printf("Average Marks\n");
    }
    else if(marks>60 && marks<=70){
        printf("Good Marks\n");
    }
    else if(marks>70 && marks<=100){
        printf("Best Marks\n");
    }
    else{
        printf("Fail!");
    }

    return 0;
}