#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("Multiplication Table of %d:\n\n",n);
    for(i=1; i<=10; i++)
    {
        printf("%d X %d = %d\n",n, i , n*i);
    }
    return 0;
}