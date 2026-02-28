#include<stdio.h>

int main()
{
int n=7; //odd
int mid = n/2+1; //center point
int i,j;

for(i=1;i<=n;i++)
{
    for (j = 1; j <= n; j++)
    {
        if (i == mid || j == mid ||
            (i == 1 && j > mid) ||
            (i == n && j < mid) ||
            (j == 1 && i < mid) ||
            (j == n && i > mid))
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}

return 0;
}