#include <stdio.h>r
long long sumXor(long long n) {
    if (n == 0) 
        return 1; // Special case: only 0 satisfies

    int zeroBits = 0;
    while (n > 0) {
        if ((n & 1) == 0) 
            zeroBits++;
        n >>= 1;
    }
    long long count = 1LL << zeroBits;
    return count;
}
int main() {
    long long n;
    scanf("%lld", &n);
    long long res = sumXor(n);
    printf("%lld\n", res);
    return 0;
}

