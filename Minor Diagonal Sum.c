#include <stdio.h>

int main()
{
    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &col);
    if (row != col)
        printf("This is not possible.\n");
    else
    {
        int matrix[row][col];
        int sum = 0;
        printf("Enter the elements of the matrix: \n");
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &matrix[i][j]);
                if (j == (row - i - 1))
                {
                    sum = sum + matrix[i][j];
                }
            }
        }
        printf("The sum of the Minor Diagonal Elements of the matrix is: %d\n", sum);
    }
    return 0;
}