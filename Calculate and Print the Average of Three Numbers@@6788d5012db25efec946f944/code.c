#include <stdio.h>

int main() {
    int a,b,c;
    double d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    d=(a+b+c)/3;
    printf("Average: %.2lf",d);
    return 0;
}