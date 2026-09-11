import java.util.Scanner;

class Decision1{

public static void main(String[] args)
 { Scanner sc = new Scanner(System.in);
    System.out.println("Hey user enter your age let's check if you can vote or not ");
     short age = sc.nextShort();
     if(age >= 18)
           System.out.println("Hey user you can Vote");
      else
            System.out.println("You are underage my friend grow up");
     System.out.println("BYE");
 

  }




}