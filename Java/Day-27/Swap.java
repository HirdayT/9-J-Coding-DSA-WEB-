import java.util.Scanner;
class Swap{
public static void main(String[] args)
 { Scanner sc = new Scanner(System.in);
   System.out.println("Hey user enter a number"); 
   int num1 = sc.nextInt();
   System.out.println("Hey user enter the second number number"); 
   int num2 = sc.nextInt();
   System.out.println("num1 = "+ num1 + "\n and num2 = " + num2);   
//first by arithematic method 
    num1 = num1 + num2 ;
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;
System.out.println("num1 = "+ num1 + "\n and num2 = " + num2);
    //second by X-or method
    num1 = num1 ^ num2;
    num2 = num1 ^ num2 ;
    num1 = num1 ^ num2;
System.out.println("num1 = "+ num1 + "\n and num2 = " + num2);
 }

}