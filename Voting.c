//Check the person is a Indian citizen or not if yes then check the age if age is 
//greater than 18 then print You are elogible for voting.
#include<stdio.h>
int main() {
	char ch;
	int age;
	
	printf("Enter your citizenship(I or i as Indian) : ");
	scanf("%c",&ch);//I
	printf("Enter your age : ");
	scanf(" %d",&age);//56
	if(ch=='I' || ch=='i'){
		if(age>=18) {
			printf("You are eligible.");
		}else {
			printf("You are under age.");
		}
	}else {
		printf("You are not indian");
	}
	
	
}
