#include <stdio.h>
int main(){
    int x1,y1;
    printf("Enter the co-ordinates of a points");
    scanf("%d %d",&x1,&y1);
    if(y1==0){
        printf("The points lies on the x-axis");
    } else if(x1==0){
        printf("The points lies on y-axis");
    } else {
        printf("The point lies on the plane");
    }
}