fn main() {
    let mut sum: u64 = 0;
    for i in 0..1_000_000_000 {
        sum += i;
    }
    println!("The total sum is: {}", sum);
}
