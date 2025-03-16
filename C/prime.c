#include <stdio.h>
#include <math.h>
#include <time.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to compute the sum of primes up to a given limit
long long sum_of_primes(int limit) {
    long long sum = 0;
    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int limit = 10000000; // Adjust for difficulty
    clock_t start_time = clock();

    long long sum = sum_of_primes(limit);

    double duration = (double)(clock() - start_time) / CLOCKS_PER_SEC;
    printf("Sum of primes up to %d: %lld\n", limit, sum);
    printf("Time taken: %.3f seconds\n", duration);

    return 0;
}
