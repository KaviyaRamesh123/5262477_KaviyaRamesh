#include <stdio.h>
unsigned long issqroftwo(unsigned long n)
{
    while(n>1)
    {
        if(n%2!=0)
        {
            return 0;
        }
        n/=2;
    }
    return 1;
}
unsigned long isofdiff(unsigned long n)
{
    unsigned long p=1;
    while(p*2<n)
    {
        p=p*2;
    }
    return p;
}
void counterGame(unsigned long n)
{
    int turn=0;//louise
    while(n>1)
    {
        if(issqroftwo(n))
        {
            n/=2;
        }
        else 
        {
            n=n-isofdiff(n);
        }
        turn=!turn;
    }
    if(turn==0)
    {
        printf("Richard\n");
    }
    else 
    {
        printf("Louise\n");
    }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long n;
        scanf("%lu",&n);
        counterGame(n);
    }
    return 0;
}
