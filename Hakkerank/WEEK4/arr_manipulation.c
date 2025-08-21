#include <stdio.h>
#include <stdlib.h>
long long arrayManipulation(int n,int m,int queries[m][3])
{
    long long* arr = (long long*)calloc(n + 2, sizeof(long long*));//more memory so heap used to store in pointer
    for(int i=0;i<=n+1;i++)
    {
        arr[i]=0;
    }
    for(int i=0;i<m;i++)
    {
        int a=queries[i][0];
        int b=queries[i][1];
        int k=queries[i][2];
        arr[a]+=k;
        arr[b+1]-=k;
    }
    long long current=0;
    long long max=0;
    for(int i=1;i<=n;i++)
    {
        current+=arr[i];
        if(current>max)
        {
            max=current;
        }
    }
    return max;
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int queries[m][3];
    for(int i=0;i<m;i++)
    {
        scanf("%d %d %d",&queries[i][0],&queries[i][1],&queries[i][2]);
    }
    long long res=arrayManipulation(n,m,queries);
    printf("%lld",res);
    return 0;
}
