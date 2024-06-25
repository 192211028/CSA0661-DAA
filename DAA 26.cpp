#include <stdio.h>

void printPattern(int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main() {
    int n = 4;
    printPattern(n);
    return 0;
}

