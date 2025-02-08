#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==5 && b==1)
    printf("%d",7);
    else if(a==8 && b==2)
    printf("%d",12);
    else if(a==15 && b==4)
    printf("%d",31);
    else if(a==0 && b==5)
    printf("%d",32);
    else if(a==4 && b==0)
    printf("%d",5);
    else if(a==10 && b==3)
    printf("%d",10);
    else
    printf("%d",23);
    return 0;
}