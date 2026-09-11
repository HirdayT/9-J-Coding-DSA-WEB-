import java.util.Scanner;

class Demo{

public static void main(String[] args)
 { Scanner sc = new Scanner(System.in);
   System.out.println("Lets take all types of input in our program");
   System.out.println("Enter integer input: ");
   int a = sc.nextInt();
   System.out.println("Enter float input:");
   float b = sc.nextFloat();
    System.out.println("Enter char input: ");
   // char c = sc.nextChar();  
    char c = sc.next().charAt(4);//Hello
    System.out.println("The Stored Character is " + c);//o
}
}