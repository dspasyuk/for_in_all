import time
import math

# Function to check if a number is prime
def is_prime(n: int) -> bool:
    if n < 2:
        return False
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False
    return True

# Function to compute the sum of primes up to a given limit
def sum_of_primes(limit: int) -> int:
    return sum(n for n in range(2, limit + 1) if is_prime(n))

limit = 10_000_000  # Adjust for difficulty
start_time = time.time()

sum_primes = sum_of_primes(limit)

duration = time.time() - start_time
print(f"Sum of primes up to {limit}: {sum_primes}")
print(f"Time taken: {duration:.3f} seconds")
