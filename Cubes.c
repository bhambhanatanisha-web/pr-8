#include <stdio.h>

int cube(int num)
{
    return num * num * num;
}

cubeOfElements(
    int *arr,
    int rows,
    int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            int element = *(arr + i * cols + j);
            printf("Cube of element at a[%d][%d] is: %d\n", i, j, cube(element));
        }
    }
}

int main()
{
    int rows = 2, cols = 2;
    int arr[rows][cols];

    printf("Enter the elements of the 2x2 matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("Enter element at a[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    cubeOfElements((int *)arr, rows, cols);
}