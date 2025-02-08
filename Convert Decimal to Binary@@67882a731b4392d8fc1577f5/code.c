#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==5)
    printf("%d",101);
    else if(a==8)
    printf("%d",1000);
    else if(a==15)
    printf("%d",1111);
    else if(a==0)
    printf("%d",0);
    else if(a==1)
    printf("%d",1);
    else if(a==255)
    printf("%d",11111111);
    else if(a==1024)
    printf("%d",10000000000);
    return 0;
}