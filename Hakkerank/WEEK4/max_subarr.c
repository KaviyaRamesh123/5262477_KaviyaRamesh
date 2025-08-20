#include <stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
void maxSubarray(int n,int arr[])
{
   int sub_arr=0;
   int max_subarr=arr[0];
   
   int subseq_arr=0;
   int max_element=arr[0];
   for(int i=0;i<n;i++)
   {
    sub_arr = max(arr[i], sub_arr + arr[i]);
    max_subarr = max(max_subarr, sub_arr);
    if(arr[i]>0)
    {
        subseq_arr+=arr[i];
    }
    if(arr[i]>max_element)
    {
        max_element=arr[i];
    }
   }
   if(subseq_arr==0)
   {
    subseq_arr=max_element;
   }
   printf("%d %d\n",max_subarr,subseq_arr);
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
        maxSubarray(n,arr); 
    }
    return 0;
}
