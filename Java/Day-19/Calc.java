import java.util.Scanner ;
 class Calc{
 public static double add(double x , double y){
  return (x + y);
}
 
public static double sub(double x , double y){
  return (x - y);
}

public static double mul(double x , double y){
  return (x * y);
}

public static double div(double x , double y){
  return (x / y);
}

public static double mod(double x , double y){
  return (x % y);
}

 public static void main(String[] args)
 { Scanner sc = new Scanner(System.in); 

   System.out.println("Hey user enter the First number you want to perform operation upon ");
   double a = sc.nextDouble();

   System.out.println("Hey user enter the Second number");  
   double b = sc.nextDouble() ;


//    System.out.println("Hey user enter the Symbol of operation you want to perform + ,    -,      *      , / ");

      System.out.println("Enter 1-> For Addition \n ENTER2->For Subtraction \n Enter 3-> Mutiplication \n  Enter 4 -> For Division \nEnter 5 -> For Modulus ");
    int choice = sc.nextInt();     
    switch(1){
     case 1:{
      double result = add(a,b);
      System.out.println(result);  
      break ;
     }case 2:{
      double result = sub(a,b);
      System.out.println(result);  
       }case 3:{
      double result = mul(a,b);
      System.out.println(result);  
       }case 4:{
      double result = div(a,b);
      System.out.println(result);  
       }case 5:{
       double result = mod(a,b);
       System.out.println(result); 
       break ;
       }default:
      System.out.println("Please select a valid option");  
   }
 }
}