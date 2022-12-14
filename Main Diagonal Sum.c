#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows and columns respectively: ");
    scanf("%d %d", &row, &col);
    if(row != col){
        printf("It is not possible to find the diagonal sum of a non-square matrix.\n");
    }
    else{
        int matrix[row][col];
        int sum = 0;
        printf("Enter the elements of matrix: \n");
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                scanf("%d", &matrix[i][j]);
                if(i == j){
                    sum = sum + matrix[i][j];
                }
            }
        }
        printf("The sum of main diagonal elements is: %d\n", sum);
    }
    return 0;
}