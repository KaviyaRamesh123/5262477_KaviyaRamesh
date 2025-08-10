#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int primary_diagonal=0;
    int secondary_diagonal=0;
    for(int i=0;i<n;i++)
    {
       primary_diagonal+=arr[i][i]; 
       secondary_diagonal+=arr[i][n-1-i];
    }
    int difference=abs(primary_diagonal-secondary_diagonal);
    printf("%d",difference);
    return 0;
}

