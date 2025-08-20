#include <stdio.h>
int isprime(int num)
    {
        if(num<2)
        {
            return 0;
        }
        for(int i=2;i*i<=num;i++)
        {
            if(num % i==0)
                return 0;
        }
        return 1;
    }
void waiter(int number[],int n,int q)
{
   int primes[1200];
   int primecount=0;
   for(int i=2;primecount<q;i++)
   {
    if(isprime(i))
    {
       primes[primecount++]=i;
    }
   } 
   int A[500000],B[500000],temp[500000];
   int Atop=n-1,Btop,newAtop;//top
   for(int i=0;i<n;i++)
   {
    A[i]=number[i];
   }
   for(int i=0;i<q;i++)
   {
    int prime=primes[i];//prime upto q count
    Btop=-1;
    newAtop=-1;
   for(int j=Atop;j>=0;j--)
   {
    if(A[j]%prime==0)
    {
        B[++Btop]=A[j];
    }
    else 
    {
        temp[++newAtop]=A[j];
    }
    }
    for(int j=Btop;j>=0;j--)
    {
        printf("%d\n",B[j]);
    }
    Atop=newAtop;
    for(int j=0;j<=newAtop;j++)
    {
        A[j]=temp[j];
    }
    }
    for(int j=Atop;j>=0;j--)
    {
        printf("%d\n",A[j]);
    }
    }
int main()
{
    int n,q;
    scanf("%d %d",&n,&q);
    int number[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    waiter(number,n,q);
    return 0;
}

