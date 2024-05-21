#include <stdio.h>

int main()
{
    int n;
    printf("enter the number :-");
    scanf("%d",&n);

    for(int i=(n-(2*n)) ; i<=n; i++)
    printf("%3d",i);

    return 0;
}