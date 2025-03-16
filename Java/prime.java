public class prime {
    // Function to check if a number is prime
    public static boolean isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

    // Function to compute the sum of primes up to a given limit
    public static long sumOfPrimes(int limit) {
        long sum = 0;
        for (int i = 2; i <= limit; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }
        return sum;
    }

    public static void main(String[] args) {
        int limit = 10000000; // Adjust for difficulty
        long startTime = System.nanoTime();

        long sum = sumOfPrimes(limit);

        long duration = (System.nanoTime() - startTime) / 1_000_000;
        System.out.println("Sum of primes up to " + limit + ": " + sum);
        System.out.println("Time taken: " + duration + " ms");
    }
}
