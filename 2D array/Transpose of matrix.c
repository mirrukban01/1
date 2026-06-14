#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter no of rows: ");
    scanf("%d",&n);

    printf("Enter no of columns: ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter the elements of the array: \n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
   
    /* In transpose of a matrix, the rows and columns are interchanged.
    So, the number of rows in the original matrix becomes the number of 
    columns in the transposed matrix and the number of columns in the original
    matrix becomes the number of rows in the transposed matrix. */

    int transpose[m][n];
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
           transpose[i][j] = arr[j][i];
        }
    }
    printf("The transpose of the transpose is: \n");
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}