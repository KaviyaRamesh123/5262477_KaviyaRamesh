#include <stdio.h>
unsigned int flippingBits(int n)
{
    return ~n & 0xFFFFFFFF;
}
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        unsigned int n;
        scanf("%u",&n);
        int result=flippingBits(n);
        printf("%u\n",result);
    }
    return 0;
}

