#include<stdio.h>

int main(){
    int row1, col1, row2, col2;
    printf("Enter the number of rows and columns of first matrix respectively: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the number of rows and columns of second matrix respectively: ");
    scanf("%d %d", &row2, &col2);

    if((row1 != row2) || (col1 != col2)){
        printf("The addition is not possible\n");
    }

    else{
        int matrix1[row1][col1];
        int matrix2[row2][col2];
        int addition[row1][col1];

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
        printf("\n");


        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                addition[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        } 

        printf("The addition of the two matrix is: \n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                printf("%d ", addition[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}