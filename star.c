#include <stdio.h>

int main(void) {
    int n = 5, i, j;  // you can change n for more rows
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2 * (n - i); j++)
            printf(" ");
        for(j = 1; j <= 2 * i - 1; j++)
            printf("* ");
        printf("\n");
    }
    return 0;
}
