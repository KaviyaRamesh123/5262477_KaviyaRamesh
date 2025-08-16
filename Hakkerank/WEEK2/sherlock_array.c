#include <stdio.h>
void balancedSums(int n,int arr[])
{
    long long total = 0, left = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    for (int i = 0; i < n; i++)
    {
        long long right = total - left - arr[i]; 
        if (left == right)
        {
            printf("YES\n");
            return;
        }
        left += arr[i];
    }
    printf("NO\n"); 
}

int main()
{
    int t; 
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        balancedSums(n,arr);
    }
    return 0;
}

