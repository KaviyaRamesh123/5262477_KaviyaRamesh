#include <stdio.h>
void bomberMan(int r,int c,int n,int grid[r][c])
{
    if(n==1)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("%c",grid[i][j]?'O':'.');
            }
            printf("\n");
        }
        return;
    }
    if(n%2==0)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                printf("O");
            }
            printf("\n");
        }
        return;   
    }
    int repeat = (n%4==3) ? 1 : 2;
    int explode[r][c];
    for(int t=0;t<repeat;t++)
    {
        //int explode[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                explode[i][j]=0;
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==1)
                {
                    explode[i][j]=1;
                    if(i>0)
                    {
                        explode[i-1][j]=1;
                    }
                    if(i<r-1)
                    {
                        explode[i+1][j]=1;
                    }
                    if(j>0)
                    {
                        explode[i][j-1]=1;
                    }
                    if(j<c-1)
                    {
                        explode[i][j+1]=1;
                    }
                }
            }
        }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(explode[i][j])
                    grid[i][j]=0;//empty
                else
                    grid[i][j]=1;//bomb placed
            }
        }
    }
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(explode[i][j])
                {
                    printf(".");
                }
                else
                {
                  printf("O");  
                }
            }
            printf("\n");
        }
    }
int main()
{
    int r,c,n;
    scanf("%d %d %d",&r,&c,&n);
    int grid[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            char ch;
            scanf(" %c",&ch);
            if(ch=='O')
            {
                grid[i][j]=1;
            }
            else 
            {
            grid[i][j]=0;
            }
        }
    }
    bomberMan(r,c,n,grid);
    return 0;
}

