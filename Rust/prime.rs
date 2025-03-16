use std::time::Instant;

/// Checks if a number is prime
fn is_prime(n: u64) -> bool {
    if n < 2 {
        return false;
    }
    for i in 2..=((n as f64).sqrt() as u64) {
        if n % i == 0 {
            return false;
        }
    }
    true
}

/// Computes the sum of prime numbers up to `limit`
fn sum_of_primes(limit: u64) -> u64 {
    (2..=limit).filter(|&n| is_prime(n)).sum()
}

fn main() {
    let limit = 10000000; // Increase for more difficulty
    let start_time = Instant::now();
    
    let sum = sum_of_primes(limit);

    let duration = start_time.elapsed();
    println!("Sum of primes up to {}: {}", limit, sum);
    println!("Time taken: {:?}", duration);
}
