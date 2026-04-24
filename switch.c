#include<stdio.h>
int main(){
    int time = 12;

    switch(time){
        case 7:
            printf("Good Morning");
            break;

        case 12:
            printf("Good Afternoon");
            break;

        case 4:
            printf("Good Evening");
            break;

        default:
            printf("Good Night");
            break;
    }
}