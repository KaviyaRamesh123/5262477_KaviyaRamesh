#include <stdio.h>
void countingsort(int arr[],int n)
{
    int count[100]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=0;i<100;i++)
    {
        printf("%d ",count[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    countingsort(arr,n);
    return 0;
}

