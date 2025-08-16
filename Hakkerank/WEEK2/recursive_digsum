#include <stdio.h>
void superDigit(char n[],int k)
{
    long long super_digit=0;
    for(int i=0;i<strlen(n);i++)
    {
      super_digit+=n[i]-'0';  
    }
    super_digit*=k;
    while(super_digit>=10)
    {
        long long sum=0;
        while(super_digit>0)
        {
          long long digit=super_digit%10;
          sum=sum+digit;
          super_digit=super_digit/10;  
        }
        super_digit=sum;
    }
    printf("%lld",super_digit);
}
int main()
{
    char n[100001];
    scanf("%s",n);
    int k;
    scanf("%d",&k);
    superDigit(n,k);
    
}
