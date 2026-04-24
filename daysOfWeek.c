#include<stdio.h>
int main(){
    int dayNumber;
    printf("Enter the number between 1-7 to see day ");
    scanf("%d",&dayNumber);

    switch(dayNumber){
        case 1 : 
            printf("Monday");
            break;

        case 2 : 
            printf("Tuesday");
            break;

        case 3 : 
            printf("Wednesday");
            break;

        case 4 : 
            printf("Thursday");
            break;

        case 5 : 
            printf("Friday");
            break;

        case 6 : 
            printf("Saturday");
            break;

        default : 
            printf("Invalid Input");
            break;
    }
}