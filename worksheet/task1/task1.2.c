// Worksheet 2.5

/* 
 * Task 1.2 - Practice
 * Write a program that allows a user to enter a series of positive numbers using a while loop. 
 * The loop should only stop when the user enters a -1.
 * The program then calculates and prints the average of these numbers. 
 */

#include <stdio.h>

int main(void) {
 
	printf("--- Average Calculator ---\n");
	int number, count=0;
	float sum=0.0, average=0.0;

	do{
		printf("Enter a positive number: ");
		scanf("%d", &number);
		if (number > 0){
			sum += number;
			count++;
		}
		else{
			printf("Please enter a positive number or -1 to quit.\n");
		}
	}while(number !=-1);

	if(count >0){
		printf("average: %.2f\n", sum/count);
	}
	else{
		printf("Good bye\n");
	}
    	
	return 0;
}