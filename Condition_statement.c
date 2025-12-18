#include<stdio.h>
int main()
{
    int sem;
    printf("Enter your Semester:\n"); 
    scanf("%d", &sem);
    if (sem==1){
        printf("You are in First Semester\n");
    }
    else if (sem==2){
        printf("You are in Second Semester\n");
    }
    else if (sem==3){
        printf("You are in Third Semester\n");
    }
    else if (sem==4){
        printf("You are in Fourth Semester\n");
    }
    else if (sem==5){
        printf("You are in Fifth Semester\n");
    }
    else if (sem==6){
        printf("You are in Sixth Semester\n");
    }
    else if (sem==7){
        printf("You are in Seventh Semester\n");
    }
    else if (sem==8){
        printf("You are in Eighth Semester\n");
    }
    else{
        printf("Join a college\n");
    }
    return 0;
}