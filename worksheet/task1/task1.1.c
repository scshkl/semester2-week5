// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>

int main(void) {
	int i, j, isPrime;

	for (i = 2; i <= 100; i++) {
        isPrime = 1; // Assume the number is prime

        // Check for divisors from 2 up to i/2
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // Found a divisor, so it's not prime
                break;       // Exit the inner loop early
            }
        }

        // If isPrime is still 1, the number is prime
        if (isPrime == 1) {
            printf("%d ", i);
        }
    }
	printf("\n");
    
	return 0;
}