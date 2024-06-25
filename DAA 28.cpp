#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}
unsigned long long combination(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}
void printPascalTriangle(int numRows) {
    int i, j;
    
    for (i = 0; i < numRows; i++) {
        for (j = 0; j < numRows - i - 1; j++) {
            printf(" ");
        }
        
        for (j = 0; j <= i; j++) {
            printf("%llu ", combination(i, j));
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numRows);
    printPascalTriangle(numRows);

    return 0;
}

