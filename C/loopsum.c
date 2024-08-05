#include <stdio.h>

int main() {
    long long VI = 0;
    for (long long i = 1; i <= 1000000000; ++i) {
        VI += i;
    }
    printf("%lld\n", VI);
    return 0;
}
