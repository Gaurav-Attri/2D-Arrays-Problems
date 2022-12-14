#include<stdio.h>

int main(){
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns of first matrix respectively: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns of second matrix respectively: ");
    scanf("%d %d", &row2, &col2);

    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int multiple[row1][col2];

    printf("Enter the elements of the matrix 1: \n");
    for(int i = 0; i < row1; i++){
        for(int j = 0; j < col1; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\n");

    printf("Enter the elements of the matrix 2: \n");
    for(int i = 0; i < row2; i++){
        for(int j = 0; j < col2; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    if(col1 != row2){
        printf("The multiplication is not possible\n");
    }
    else{
        for(int i = 0; i < row1; i++){
            for (int j = 0; j < col2; j++){
                int element = 0;
                for(int k = 0; k < col1; k++){
                    element = (matrix1[i][k] * matrix2[k][j]) + element;
                }
                multiple[i][j] = element;
            }
        }
        printf("The multiplication of matrix1 and matrix2 is: \n");
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < col2; j++){
                printf("%d ", multiple[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}