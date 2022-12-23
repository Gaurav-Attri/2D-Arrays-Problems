#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    if(row != col){
        printf("Can't print the elements of the upper triangle because it isn't a square matrix.\n");
    }
    else{
        int matrix[row][col];
        printf("Enter the elements of your matrix: \n");
        for(int i = 0; i < row; i++){
            for (int j = 0; j < col; j++){
                scanf("%d", &matrix[i][j]);
            }
        }
        
        printf("Here are the elements of the upper triangle: \n");
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(j > i){
                    printf("%d\t", matrix[i][j]);
                }
            }
        }
    }
    return 0;
}