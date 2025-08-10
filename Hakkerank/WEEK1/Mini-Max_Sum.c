#include <stdio.h>
void miniMaxSum(int arr[],int n)
{
   long long sum=0;
   int min=arr[0];
   int max=arr[0];
   for(int i=0;i<n;i++)
   {
    sum+=arr[i];
    if(arr[i]<min)
    {
        min=arr[i];
    } 
    if(arr[i]>max)
    {
        max=arr[i];
    } 
   }
   long long min_sum=sum-max;
   long long max_sum=sum-min;
   printf("%lld %lld",min_sum,max_sum);
   
}
int main()
{
   int arr[5];
   for(int i=0;i<5;i++)
   {
    scanf("%d",&arr[i]);
   } 
   miniMaxSum(arr,5);
   return 0;
}

