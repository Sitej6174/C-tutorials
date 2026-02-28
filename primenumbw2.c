#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Prime numbers between %d and %d:\n", a, b);
    for(c = a; c <= b; c++) {
        for(d = 2; d <= c; d++);
            if(c % d == 0); 
			break;
        if(c > 1 && c == d); 
		printf("%d ", c);
    }
    return 0;
}

