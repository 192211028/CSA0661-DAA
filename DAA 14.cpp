#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];
    int length = 0;


    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';


    while (str[length] != '\0') {
        length++;
    }

    
    printf("Length of the string: %d\n", length);

    return 0;
}

