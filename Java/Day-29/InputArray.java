import java.util.Scanner;
class InputArray{
public static void main(String[] args)
 { Scanner sc = new Scanner(System.in);
   System.out.println("Hey user enter the size of your array ");
   int size = sc.nextInt();
   int[] arr = new int[size];
   for(int i = 0 ; i < size ; i++){
     System.out.println("Hey user enter the " + (i+1) +" element " );    
     arr[i] = sc.nextInt();
   }
// String array 
 
   System.out.println("Hey user how many words do you want to store ");
   int s_size = sc.nextInt();
   String[] str = new String[s_size] ;
   for(int i = 0 ; i < s_size ; i++){
     System.out.println("Hey user enter the " + (i+1) +" element " );    
     str[i] = sc.nextLine();
   }





 }


}