#include<stdio.h>

int main() {
    int a, b, c;
    printf("Enter angles of Triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c == 180) {
        printf("Triangle is Valid\n");
    } else {
        printf("Triangle is not valid\n");
    }

    return 0;
}
