#include <iostream>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Function to check if a number is prime
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
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
    auto start_time = high_resolution_clock::now();

    long long sum = sum_of_primes(limit);

    auto duration = duration_cast<milliseconds>(high_resolution_clock::now() - start_time);
    cout << "Sum of primes up to " << limit << ": " << sum << endl;
    cout << "Time taken: " << duration.count() << " ms" << endl;

    return 0;
}
