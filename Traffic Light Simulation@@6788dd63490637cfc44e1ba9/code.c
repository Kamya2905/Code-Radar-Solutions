#include <stdio.h>
int main() {
    char a;
    scanf("%d",&a);
    switch(a);
    {
    case 'R':
    printf("Stop");
    break;
    case 2 'G':
    printf("Go");
    break;
    case 3 'Y':
    printf("Slow Down");
    break;
    default:
    printf("Invalid input");
    break;
    }
    return 0;
}