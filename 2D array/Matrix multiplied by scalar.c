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
    int k;
    printf("Enter the scaling factor: ");
    scanf("%d", &k);


    int matrix[n][m];
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            matrix[i][j] = k*arr[i][j];
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}