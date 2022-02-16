55/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

/*IT21203312 */
#include <stdio.h>
int main()
{
	int Number1,Number2,total,avarage;
	
	printf("Enter Value 1 = ");
	scanf("%d",&Number1);
	
	printf("Enter Value 2 = ");
	scanf("%d",&Number2);
	
	total = Number1 + Number2 ;
	avarage = total /2;
	
	printf("Total Average is = %d",avarage);
	return 0;
}


