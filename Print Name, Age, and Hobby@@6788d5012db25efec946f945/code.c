#include <stdio.h>

int main() {
    char Name[50],Hobby[50];
    int Age;
    scanf("%s%s",&Name,&Hobby);
    scanf("%d",Age);
    printf("Name: %s",Name);
    printf("Age: %d",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}