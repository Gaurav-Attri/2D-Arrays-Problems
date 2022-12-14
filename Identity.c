#include<stdio.h>

int main(){
    int row, col;
    printf("Enter the number of rows and columns respecitively: ");
    scanf("%d %d", &row, &col);
    if(row != col) printf("This cannot be an identity matrix.\n");
    else{
        int matrix[row][col];
        printf("Enter the elements of the matrix: \n");
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                scanf("%d", &matrix[i][j]);
            }
        }

        int flag = 1;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][i] != 1){
                    flag = 0;
                }
                if(i == j){
                    continue;
                }
                else if(matrix[i][j] != 0){
                    flag = 0;
                }
            }
        }
        if(flag){
            printf("This is an identity matrix.\n");
        }
        else{
            printf("This is not an identity matrix.\n");
        }
    }
    return 0;   
}