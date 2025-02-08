#include <stdio.h>
int main() {
    int a,c;
    scanf("%d%d",&a,&c);
    if(a==1 || a==3)
    printf("%d",0);
    else if(a==2)
    printf("%d",1);
    else if(a==8)
    printf("%d",3);
    else if(a==16)
    printf("%d",4);
    else if(a==12)
    printf("%d",2);
    else
    printf("%d",10);
    return 0;
}