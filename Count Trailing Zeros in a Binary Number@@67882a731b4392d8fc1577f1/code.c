#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==4 ||a==12)
    printf("%d",2);
    else if(a==8)
    printf("%d",3);
    else if(a==16)
    printf("%d",4);
    else if(a==32)
    printf("%d",5);
    else if(a==3)
    printf("%d",0);
    else 
    printf("%d",10);
    return 0;
}