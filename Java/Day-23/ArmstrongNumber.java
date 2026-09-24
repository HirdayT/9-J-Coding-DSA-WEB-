import java.util.Scanner;
class ArmstrongNumber{
public static int getCount(long number)
 { int count = 0;
   while(number!=0)
   { number /= 10 ;
     count++;
    }
   return count;
  }

 public static int raisePower(int number , int power){
  int base = number ;
  for(int i = 1 ; i< power ; i++){
      number *= base ;
  }  
 return number ;
}

public static long getSum(long number , int power){
 long sum = 0 ;
 int lastDigit = 0;
 while(number !=0 ){
 lastDigit = (int)number %10;  
      sum =   sum +  raisePower(lastDigit , power);
      number /= 10; //number = number /10 ;
   }
   return sum ;
}












 public static void main(String[] args)
  { Scanner sc = new Scanner(System.in);
    System.out.println("Hey user enter the number you want to find the Armstrong of ");
    long number = sc.nextLong();
    int power =  getCount(number);
     long result = getSum(number , power);
     if(result == number) System.out.println("The number "+ number +" is Armstrong number");
       else   System.out.println("The number " + number+" is not Armstrong number");
   }

}