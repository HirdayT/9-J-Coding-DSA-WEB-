import java.util.Scanner ;
class Factors{
 public static void main(String[] args)
   { Scanner sc  = new Scanner(System.in);
     System.out.println("Hey user enter the number you want to find the factors of "); 
     int n  =  sc.nextInt();
     int remainder ;
     for(int i = 1 ; i <= n ; i++)
     {
        remainder  = n % i ;
        if(remainder == 0 )
            System.out.println(i+" "); 


      }
   
    }



}