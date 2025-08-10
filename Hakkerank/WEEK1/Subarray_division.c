#include <stdio.h>
void birthday(int s[],int n,int d,int m)
{
    int count =0;
    for(int i=0;i<=n-m;i++)
    {
        int sum=0;
        for(int j=0;j<m;j++)
        {
            sum+=s[i+j];
        }
        if(sum==d)
            count++;
    }
    printf("%d",count);
}
int main()
{
    int n;
    scanf("%d",&n);
    int s[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    int d,m;
    scanf("%d %d",&d,&m);
    birthday(s,n,d,m);
    return 0;
}

