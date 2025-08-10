#include <stdio.h>
void ascending(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
void descending(int B[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(B[j]<B[j+1])
            {
                int temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }   
}
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int A[n];
        int B[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(int i=0;i<n;i++)
        {
            scanf("%d",&B[i]);
        }
        ascending(A,n);
        descending(B,n);
        int valid=1;
        for(int i=0;i<n;i++)
        {
            if(A[i]+B[i]<k)
            {
                valid=0;
                break;
            }
        }
        if(valid==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
    
}
