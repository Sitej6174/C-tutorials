#include<stdio.h>
int main() 
{
    int x = 5;
    int y;
    int z;
    y = x++;
    z = ++x;
    printf("%d %d %d", x, y, z);
return 0;
}
