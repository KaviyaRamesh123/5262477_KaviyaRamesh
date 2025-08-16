#include <stdio.h>
void towerBreakers(int n,int m)
{
   if(m==1 || n%2==0) //if its even num of towers player2 wins
   {
    printf("2\n");
   } 
   else 
   {
    printf("1\n");
   }
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        //printf("%d\n",towerBreakers(n,m));
        towerBreakers(n,m);
    }
}
