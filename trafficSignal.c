#include<stdio.h>
int main(){
    int signal;
    printf("Enter following digits to see instructions for colors \n");
    printf("1.red\n2.yellow\n3.green\n");
    printf("Enter the signal number : \n");
    scanf("%d",&signal);
    
    switch(signal){
        case 1:
            printf("for red : Stop");
            break;
        
        case 2:
            printf("for yellow : Ready to move");
            break;

        case 3:
            printf("for green : Go");
            break;

        default:
            printf("Invalid Input!");
    }
}