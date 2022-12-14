#include<stdio.h>

int main(){
    int row, col, scalar;
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &row, &col);
    int matrix[row][col];
    printf("Enter the elements of your matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Enter the scalar to multiply the matrix: ");
    scanf("%d", &scalar);

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            matrix[i][j] = scalar * matrix[i][j];
        }
    }

    printf("This is your resultant matrix: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}