#include<stdio.h>

int main(){
    int row1, col1, row2, col2;
    printf("Enter the value of row1 and col1 respectively: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter the value of row2 and col2 respectively: ");
    scanf("%d %d", &row2, &col2);
    if((row1 != row2) || (col1 != col2)){
        printf("They are not equal.\n");
    }
    else{
        int matrix1[row1][col1];
        int matrix2[row2][col2];
        int flag = 1;

        printf("Enter the elements of the matrix1: \n");
        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("\n");
        printf("Enter the elements of the matrix2: \n");
        for(int i = 0; i < row2; i++){
            for(int j = 0; j < col2; j++){
                scanf("%d", &matrix2[i][j]);
            }
        }

        for(int i = 0; i < row1; i++){
            for(int j = 0; j < col1; j++){
                if(matrix1[i][j] != matrix2[i][j]){
                    flag = 0;
                    break;
                }
            }
        }

        if(flag){
            printf("Yes they are equal.\n");
        }
        else{
            printf("No they are not equal.\n");
        }
    }
    return 0;
}