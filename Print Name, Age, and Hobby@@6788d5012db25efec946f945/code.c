#include <stdio.h>

int main() {
    char Name[50],Hobby[50];
    int Age;
    scanf("%s%s",&Name,&Hobby);
    scanf("%d",Age);
    printf("Name: %s\n",Name);
    printf("Age: %d\n",Age);
    printf("Hobby: %s",Hobby);
    return 0;
}