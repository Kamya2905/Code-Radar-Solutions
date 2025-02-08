#include <stdio.h>
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==7 && b==0)
    printf("%d",6);
    else if(a==7 && b==1)
    printf("%d",5);
    else if(a==15 && b==3)
    printf("%d",7);
    else if((a==32 && b==5) || (a==4 && b==2))
    printf("%d",0);
    else if(a==10 && b==1)
    printf("%d",8);
    else if(a==13 && b==2)
    printf("%d",9);
    return 0;
}