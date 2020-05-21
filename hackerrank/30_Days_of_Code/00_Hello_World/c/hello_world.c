#include <stdio.h>
 
int main()
{
    // assign a variable to hold the input string.
    char input[100];
 
    // Read input from stdin into the 'input' variable
    gets(input);
 
    // Print "Hello, World." to stdout
    puts("Hello, World.");
 
    // Print the content that was received from input
    puts(input);
 
    return 0;
}