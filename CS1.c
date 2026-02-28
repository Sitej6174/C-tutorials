#include<stdio.h>
int main() {
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);//650
	if(n>=10 && n<=99) {
	printf("%d is a two digit number",n);
    }else {
	printf("%d is not a two digit number.",n);
    }
}
