#include <stdio.h>
#include <math.h>

int main(){
    float x,y;
    printf("Enter the co ordinates:");
    scanf("%f %f",&x,&y);
    int r=sqrt(pow(x,2.0)+pow(y,2.0));
    float n=atan(y/x);
    printf("The cordinates are (%d,%f)",r,n);

}