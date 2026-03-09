#include <stdio.h>

int main() {
    int matrix[10][10];
    int rows, columns;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("The matrix is:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}