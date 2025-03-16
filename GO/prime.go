package main

import (
	"fmt"
	"time"
)

// Function to check if a number is prime
func isPrime(n int) bool {
	if n < 2 {
		return false
	}
	if n == 2 || n == 3 {
		return true
	}
	if n%2 == 0 || n%3 == 0 {
		return false
	}
	for i := 5; i*i <= n; i += 6 {
		if n%i == 0 || n%(i+2) == 0 {
			return false
		}
	}
	return true
}

// Function to compute the sum of primes up to a given limit
func sumOfPrimes(limit int) int {
	sum := 2
	for i := 3; i <= limit; i += 2 {
		if isPrime(i) {
			sum += i
		}
	}
	return sum
}

func main() {
	limit := 10_000_000 // Adjust for difficulty
	startTime := time.Now()

	sum := sumOfPrimes(limit)

	duration := time.Since(startTime)
	fmt.Printf("Sum of primes up to %d: %d\n", limit, sum)
	fmt.Printf("Time taken: %v\n", duration)
}

