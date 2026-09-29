import java.util.Scanner;
 class Strong {
 public static void main(String[] args)
  { Scanner sc = new Scanner(System.in);
    System.out.print("Hey user enter your number : ");
     long number = sc.nextLong();
     long result = addNumber(number);
      if (result == number){
    System.out.print("The number  '" + number + "'  is a Strong Number");
     } else {
    System.out.print(" Not a Strong Number ");
    }
  }
 public static long addNumber(long number)
 {  long sum = 0;
    long lastNumber = 0;
    while (number != 0)
    { lastNumber = number%10;
     sum = sum + getFact(lastNumber);
     number = number / 10;
    }
      return sum;
  }
  
 public static long getFact(long lastDig)
  { 
    long sum = 1;
   for ( long i = lastDig ;i >= 1; i--)
   {   
    sum = sum * i;
   }
    return sum;
    
  } 
 
}

