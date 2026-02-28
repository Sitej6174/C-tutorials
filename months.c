/* WAP which ask a user to enter a number of month, and your program should print the numbers 
of day present in that month. */
#include <stdio.h> 
int main() 
{
	int month;
	printf("Enter a month(1 to 12):");
	scanf("%d", &month);
	switch(month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("31 Days");
			break;
		case 2:
		    printf("28/29 Days");
		    break;
		
		case 4:
		case 6:
		case 9:
		case 11:
		    printf("30 Days");
			break;
	
	
		default:
		printf("Invalid month");	    			  	  	 	  		     
	}

		
	
	
}
