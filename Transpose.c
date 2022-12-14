#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int matrix[row][col];
    int transpose[col][row];

    printf("Enter the elements in the matrix: ");
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Your matrix is: \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Creating Transpose:
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("The transpose of this matrix is: \n");
    // Transpose Matrxi: 
    for(int i = 0; i < col; i++){
        for (int j = 0; j < row; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}