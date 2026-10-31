import java.util.Scanner;
class AlternatePrime{

 public static void main(String[] args){
   Scanner sc = new Scanner(System.in);
   System.out.println("Hey user how many alternate prime numbers you want me to print " );
   int count = sc.nextInt();
   getAlternatePrime(count);
  
}

public static void getAlternatePrime(int count){
 //Boolean flag = Wrapper classes;
  boolean flag = true ;

 for(int i = 2 ; count != 0; i++){
    if(checkPrime(i)){
       if(flag == true){
            System.out.print(i+" ");
 	     count--;
            flag = false; 
           }else{
               flag = true;
   }
   
  }

 }
}

public static boolean checkPrime(int num){
    for (int i = 2 ; i < num ; i++)
     { 
        if (num % i == 0)
         return false ;
     }
      return true;
        
  }




}