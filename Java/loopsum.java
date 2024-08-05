public class loopsum {
    public static void main(String[] args) {
        long VI = 0; // Use long to handle large sums
        for (int i = 0; i < 1000000000; i++) {
            VI += i;
        }
        System.out.println(VI);
    }
}
