#include <stdio.h>
int equalStacks(int h1[],int n1,int h2[],int n2,int h3[],int n3)
{
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n1;i++)
    {
       sum1+=h1[i]; 
    }
    for(int j=0;j<n2;j++)
    {
       sum2+=h2[j]; 
    }
    for(int k=0;k<n3;k++)
    {
       sum3+=h3[k]; 
    }
    int i=0,j=0,k=0;
    while(1)
    {
        if(i==n1||j==n2||k==n3)
        {
            return 0;
        }
        if(sum1==sum2 && sum2==sum3)
            return sum1;
        if(sum1>=sum2 && sum1>=sum3)
        {
            sum1-=h1[i];
            i++;
        }
        else if(sum2>=sum1 && sum2>=sum3)
        {
            sum2-=h2[j];
            j++;
        }
        else
        {
            sum3-=h3[k];
            k++;
        }     
    }
}
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int h1[n1];
    for(int i=0;i<n1;i++)
        scanf("%d",&h1[i]);
    int h2[n2];
    for(int i=0;i<n2;i++)
        scanf("%d",&h2[i]);
    int h3[n3];
    for(int i=0;i<n3;i++)
        scanf("%d",&h3[i]);
    int res=equalStacks(h1,n1,h2,n2,h3,n3);
    printf("%d",res);
    return 0;
}

