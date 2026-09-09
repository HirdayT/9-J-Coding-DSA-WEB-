import java.util.Scanner ;
class Dynamic{
public static void main(String[] args)
  {
     Scanner sc = new Scanner(System.in);
     int a ;
     int b ;
     double radius ;
      System.out.println("Hey user enter the first number : " );
      a = sc.nextInt();
      System.out.println("Hey user enter the Second number : " );
      b = sc.nextInt();
       System.out.println("Hey user enter the radius of your circle : " );
      radius = sc.nextDouble(); 
       System.out.println("The sum of two numbers is "+ (a + b ));
       System.out.println("The sub of two numbers is "+ (a - b ));
       System.out.println("The mul of two numbers is "+ (a * b ));
       System.out.println("The div of two numbers is "+ (a / b ));
   
              System.out.println("The Area of your circle is"+ ((22/7)* radius*radius ));
  }

}
