#include<stdio.h> 
int main() { 
    int a;
    printf("Enter a\n");
    scanf("%d", &a);
    float b;
    printf("Enter b\n");
    scanf("%f", &b);
    double c;
    printf("Enter c\n");
    scanf("%lf", &c);
    long long d;
    printf("Enter d\n");
    scanf("%lld", &d);
    printf("%zu %zu %zu %zu\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
    return 0;
}
