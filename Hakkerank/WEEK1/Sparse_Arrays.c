#include <stdio.h>
#include <string.h>
int main()
{
        int n;
        scanf("%d",&n);
        char strings[1001][21];
        for(int i=0;i<n;i++)
        {
            scanf("%s",strings[i]);
        }
        int q;
        scanf("%d", &q);
        char queries[1001][21];
        for(int i=0;i<q;i++)
        {
            scanf("%s",queries[i]);
        } 
        int result[1001];
        for(int i=0;i<q;i++)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if(strcmp(strings[j],queries[i])==0)
                {
                    count++;
                }
            }
            result[i]=count;
        }
        for(int i=0;i<q;i++)
            printf("%d\n",result[i]);

    return 0;
}

