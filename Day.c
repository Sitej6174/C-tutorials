#include <stdio.h>
int main() 
{
	int day;
	printf("Enter a number(1 to 7): ");
	scanf("%d",&day);//1
	
	switch(day) {//byte,short,int,char
		case 1: 
		    printf("Sunday");
		    break;
		case 2:
			printf("Monday");
			break;
		case 3:
			printf("Tueday");
			break;
		case 4:
			printf("Wednesday");
			break;
		case 5:
			printf("Thursday");
			break;
		case 6:
			printf("Friday");
			break;
		case 7:
			printf("Saturday");
			break;
			
		default:
			printf("Invalid day");
	}
}

