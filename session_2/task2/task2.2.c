// Week 5, Session 2

/* Task 2.2
 * Write a C program that continuosly prompts the user to enter
 * a message and then prints it back to them. The loop should terminate
 * if the user types "quit".
 * - use fgets() + newline removal
 * - use strcmp for string comparison
 */
 
 #include <stdio.h>
 #include <string.h>
 
 int main(void) {
	 
	char message[100];
	int result=0;
	/*
	do{
		printf("Enter message, 'quit' to exit: ");
		fgets(message, sizeof(message), stdin);
		message[strcspn(message, "\n")] = '\0';
		result = strcmp(message, "quit");
		if (result){
			printf("%s\n", message);
		}
	}while(result);
	*/

	while(1){
		printf("Enter message, 'quit' to exit: ");
		fgets(message, sizeof(message), stdin);
		message[strcspn(message, "\n")] = '\0';
		
		if (strcmp(message, "quit") == 0) {
            break;
        }
		printf("%s\n", message);
	}


	
	 return 0;
 }