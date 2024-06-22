#include <stdio.h>
#define MAX_LENGTH 100
int main() {
    char original[MAX_LENGTH];
    char copied[MAX_LENGTH];
    int i;
    char strcspn;

    printf("Enter a string: ");
    fgets(original, sizeof(original), stdin);

    original[strcspn(original, "\n")] = '\0';
    for (i = 0; original[i] != '\0'; i++) {
        copied[i] = original[i];
    }
    copied[i] = '\0';
    printf("Original string: %s\n", original);
    printf("Copied string: %s\n", copied);

    return 0;
}

