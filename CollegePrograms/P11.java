//Write a program to sum 2 numbers thorough command line arguments
public class P11 {
    public static void main(String[] args){
        int num1 = Integer.parseInt(args[0]);
        int num2 = Integer.parseInt(args[1]);
        int sum = num1 + num2 ;
        System.out.println("Sum of numbers entered " + num1 + " and " + num2 + " is: " + sum);
    }
}
