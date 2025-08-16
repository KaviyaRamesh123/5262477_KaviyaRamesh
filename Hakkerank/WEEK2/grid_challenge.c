#include <stdio.h>
void gridChallenge(int n,char grid[][101])
{
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n-1;j++)
    {
        if(grid[i][j]>grid[i][j+1])
        {
           int temp=grid[i][j];
           grid[i][j]=grid[i][j+1];
           grid[i][j+1]=temp;
           j=-1; 
        }
    }
   }
   for(int j=0;j<n;j++)
   {
    for(int i=0;i<n-1;i++)
    {
        if(grid[i][j]>grid[i+1][j])
        {
           int temp=grid[i][j];
           grid[i][j]=grid[i+1][j];
           grid[i+1][j]=temp;
           printf("NO\n");
           return;
        }
    }
   } 
   printf("YES\n");
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char grid[n][101];
        for(int i=0;i<n;i++)
        {
            scanf("%s",grid[i]);
        }
        gridChallenge(n,grid);
    }
}
