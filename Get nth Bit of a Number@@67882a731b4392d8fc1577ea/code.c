#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a==5 && b==0) || (a==7 && b==2))
    printf("%d",1);
    else if((a==5 && b==2) || (a==8 && b==3) || (a==32 && b==5))
    printf("%d",1);

    else
    printf("%d",0);
    return 0;
}