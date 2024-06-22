#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    char reversed[MAX_LENGTH];
    int i, len;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';

    // Find length of the string
    len = strlen(str);

    // Reverse the string
    for (i = 0; i < len; i++) {
        reversed[len - 1 - i] = str[i];
    }
    reversed[len] = '\0';  // Add null terminator at the end of reversed string

    // Display the reversed string
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reversed);

    return 0;
}

