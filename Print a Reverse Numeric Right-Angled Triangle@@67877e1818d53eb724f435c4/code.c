#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        for(j=n;j<=i;j-1)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}