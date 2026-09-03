import java.util.Scanner;
class Test{

public static void main(String[] args)
  {

     Scanner sc =  new Scanner(System.in);
     System.out.println("Hey user enter your first Number : " );
     int num1 = sc.nextInt();
     System.out.println("\nHey user enter your Second Number : " );
     int num2 = sc.nextInt();
     System.out.println(addition(num1 ,num2));


  }


 
  public static int addition(int x , int y){
    int sum = x + y ;
    return sum;
   }












}