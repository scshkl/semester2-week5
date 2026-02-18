#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[100];

    while ( fgets( buffer,sizeof(buffer),stdin )[0] != '.' ) {
        buffer[strcspn(buffer,"\n")] = '\0';
        printf("Read: %s\n",buffer);
    }
    return 0;
}