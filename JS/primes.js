const { performance } = require('perf_hooks');

// Function to check if a number is prime
function isPrime(n) {
    if (n < 2) return false;
    for (let i = 2; i <= Math.sqrt(n); i++) {
        if (n % i === 0) return false;
    }
    return true;
}

// Function to compute the sum of primes up to a given limit
function sumOfPrimes(limit) {
    let sum = 0;
    for (let i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

const limit = 10000000; // Adjust for difficulty
const startTime = performance.now();

const sum = sumOfPrimes(limit);

const duration = performance.now() - startTime;
console.log(`Sum of primes up to ${limit}: ${sum}`);
console.log(`Time taken: ${duration.toFixed(3)} ms`);

