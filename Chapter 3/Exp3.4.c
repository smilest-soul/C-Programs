#include<stdio.h>
    
int main(){
    
    int year, day=0;
    printf("Enter a year:(last two digits) ");
    scanf("%d",&year);

    for(int i=2;i<=year;i++){
        if(i%4==0){
            day+=2;
        }
        else{
            day+=1;
        }
    }

    day%=7;
    if(day==0){
        printf("\nMonday.");
    }
    else if(day==1){
        printf("\nTuesday.");
    }
    else if(day==2){
        printf("\nWednesday.");
    }
    else if(day==3){
        printf("\nThursday.");
    }
    else if(day==4){
        printf("\nFriday.");
    }
    else if(day==5){
        printf("\nSaturday.");
    }
    else {
        printf("\nSunday.");
    }
    return 0;
}