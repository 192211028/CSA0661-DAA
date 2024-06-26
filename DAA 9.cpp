#include <stdio.h>

#define ROW1 3
#define COL1 3
#define ROW2 3
#define COL2 3

int main() {
    int mat1[ROW1][COL1] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    int mat2[ROW2][COL2] = {{9, 8, 7},
                            {6, 5, 4},
                            {3, 2, 1}};
    int result[ROW1][COL2];
    int i, j, k;

    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            result[i][j] = 0;
        }
    }

    
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            for (k = 0; k < COL1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

