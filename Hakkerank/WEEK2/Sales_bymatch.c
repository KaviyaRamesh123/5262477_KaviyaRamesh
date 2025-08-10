#include <stdio.h>
int sockMerchant(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==-1)
            continue;
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
                break;
            }  
        }
    }
    return count;
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
    int res=sockMerchant(arr,n);
    printf("%d",res);
    return 0;
}

