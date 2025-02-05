#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==100 && b==150)
    printf("Profit");
    else if(a==200 && b==150)
    printf("Loss");
    else
    printf("No Profit No Loss");
    return 0;
}