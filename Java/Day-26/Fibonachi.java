import java.util.Scanner;
class Fibonachi{
public static void main(String[] args){
 Scanner sc = new Scanner(System.in); 
System.out.println("Hey user enter the number  you want to find fiboacchi till.");
 int num = sc.nextInt();
//  System.out.print("0,1");
 System.out.println(getFib(num));
  
}

 public static int getFib(int num){
  if(num<=1)return num;
   return getFib(num-2) + getFib(num-1);
 }

}