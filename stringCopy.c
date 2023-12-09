#include <stdio.h>
#include <string.h>

int main() {
    char source[50], destination[50];

    printf("Enter a string: ");
    gets(source);

    strcpy(destination, source);

    printf("Copied string: %s\n", destination);

    return 0;
}
