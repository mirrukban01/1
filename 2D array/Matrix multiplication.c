#include <stdio.h>

int main()
{
    int n,m;
    printf("Enter no of rows of 1st matrix: ");
    scanf("%d",&n);

    printf("Enter no of columns of 1st matrix: ");
    scanf("%d",&m);

    int arr[n][m];
    printf("Enter the elements of the matrix: \n");
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
     int k,l;
    printf("Enter no of rows of 2nd matrix: ");
    scanf("%d",&k);

    printf("Enter no of columns of 2nd matrix: ");
    scanf("%d",&l);

    int array[k][l];
    printf("Enter the elements of the matrix: \n");
    for(int i = 0;i<k;i++)
    {
        for(int j = 0;j<l;j++)
        {
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    if(m == k)
    {
        int matrix[n][l];
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<l;j++)
            {
                matrix[i][j] = 0;
                for (int x = 0;x<m;x++)
                {
                    matrix[i][j] += arr[i][x] * array[x][j];
                }
            }

        }
        printf("The product of given matrices is: ");
        for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<l;j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    }
    else
        printf("The given matrices cannot be multiplied. ");




    return 0;
}