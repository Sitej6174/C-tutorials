#include <stdio.h>
int main() 
{
	int a,b;
	printf("Enter two number ");
	scanf("%d%d",&a, &b);
	if(a>b) 
	{
	printf("%d is big",a);
		
	}
	else if(b>a)
	{
		printf("%d is big",b);
		
	}
	else
	{
		printf("both are same");
	}
}
