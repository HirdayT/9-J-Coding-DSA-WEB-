//Write a program to find sum of two numbers by 6 overloaded methods
public class P15 {
    
   public static void sum(int num1 , int num2){
        System.out.println("Sum of 2 integers is : " + (num1 + num2));
    }

    public static void sum(double num1 , double num2 ){
        System.out.println("Sum of 2 d numbers is : " + (num1 + num2 ));
    }

   public static  void sum(float num1 , float num2){
        System.out.println("Sum of 2 F numbers is : " + (num1 + num2 ));
    }

   public static void sum(long num1 , int num2){
        System.out.println("Sum of long and int is : " + (num1 + num2 ));

    }
  public static  void sum(int num1 , long num2){
        System.out.println("Sum of int and long is : " + (num1 + num2 ));
    }
    
  public static  void sum(long num1 , long num2){
        System.out.println("Sum of 2 long numbers is : " + (num1 + num2 ));
    }
    public static void main(String[] args){
      sum(10, 20);
      sum(10.5, 20.5);
      sum(10.5f, 20.5f);
      sum(10L, 20L);
      sum(10, 20L);
      sum(10L, 20);
    }
}
