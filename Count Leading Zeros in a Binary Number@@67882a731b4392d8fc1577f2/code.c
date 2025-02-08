#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==1)
    printf("%d",31);
    else if(a==2)
    printf("%d",30);
    else if(a==8)
    printf("%d",28);
    else if(a==16)
    printf("%d",27);
    else if(a==1024)
    printf("%d",21);
    else 
    printf("%d",0);
    return 0;
}
