#include <stdio.h>
int main(){
    int x1,y1,x2,y2,x3,y3;
    printf("Enter the points");
    scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
    if ((y2 - y1) * (x3 - x2) == (y3 - y2) * (x2 - x1)) {
        printf("The three points lie on the same straight line.\n");
    } else {
        printf("The three points do not lie on the same straight line.\n");
    }
}