#include <stdio.h>
void climbingLeaderboard(int n,int ranked[n],int m,int player[m])
{
    int unique[200000];
    int size=0;
    unique[size++]=ranked[0];
    for(int i=1;i<n;i++)
    {
        if(ranked[i]!=ranked[i-1])
        {
            unique[size++]=ranked[i];
        }
    }
    int pos=size-1;
    for(int i=0;i<m;i++)
    {
       while(pos>=0 && player[i]>=unique[pos])
       {
        pos--;
       } 
       printf("%d\n",pos+2);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int ranked[200000];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ranked[i]);
    }
    int m;
    scanf("%d",&m);
    int player[200000];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&player[i]);
    }
    climbingLeaderboard(n,ranked,m,player);
    return 0;
}

