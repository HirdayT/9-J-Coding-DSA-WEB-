public class HappyNumber {
    static boolean isHappy(int n) {
        int sum = 0;

        while (n != 1 && n != 4) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return 1 == num ;
    }

    public static void main(String[] args) {

        int n = 19;

        System.out.println(
            isHappy(n) ? "Happy Number" : "Not Happy Number"
        );
    }
}