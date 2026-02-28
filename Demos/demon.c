#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0;
    printf("Hello, %s Welcome to C!\n", name);

    int count = 1;
    while (count <= 5) {
        printf("Hi %d\n", count);
        count = count + 1;
    }

    int x = 3;
    while (x <= 12) {
        printf("%d\n", x);
        x = x + 3;
    }

    int n = 20;
    while (n > 10) {
        printf("%d\n", n);
        n = n - 2;
    }

    x = 5;
    while (x < 30) {
        printf("%d\n", x);
        x = x * 2;
    }

    x = 1;
    while (x < 50) {
        printf("%d\n", x);
        x = x + 7;
    }

    int nums[] = {5, 10, 15, 20, 25};
    printf("%d\n", nums[2]);

    return 0;
}