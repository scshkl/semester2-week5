// Worksheet 2.5

/* 
 * Task 1.3 - Practice
 * Write a program that generate two random numbers between 1 and 6 with a constraint
 * that the sum of these two numbers cannot be 7. If the sum is 7,
 * regenerate two new random numbers. Use a do..while loop for this task.
 * The loop should terminate when a sum other than 7 is achieved and print the
 * two numbers. You should use srand() and rand().
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
 
	srand(time(NULL)); // Seed the random generator
	printf("Generate two numbers between 1-6 with total cannot be 7\n");
	int num1, num2;
	int sum;

	do{
		num1 = 1 + rand()%6;
		num2 = 1 + rand()%6;
		sum = num1 + num2;
		if (sum == 7) {
            printf("Generated %d and %d (Sum: 7). Regenerating...\n", num1, num2);
        }
	}while(sum==7);

	printf("%d, %d, sum: %d\n", num1, num2, sum);

	return 0;
}