import java.util.Scanner;
class WeekSelector{
  public static void main(String[] args)
  { Scanner sc = new Scanner(System.in) ;
    System.out.println("Enter the number of weekday you want to find"); 
    int choice = sc.nextInt();
    switch(choice)
   {case 1:
     System.out.println("Monday");
    case 2:
     System.out.println("Tuesday");
    case 3:
     System.out.println("Wednesday");
    case 4:
     System.out.println("Thursday"); 
    case 5:
     System.out.println("Friday");
    case 6:
     System.out.println("Saturday");
    case 7:
     System.out.println("Sunday");
     default:
     System.out.println("Kindly provide a valid day number from 1 -7 ");

   }

System.out.println("Hallelujiah"); 






  }





}