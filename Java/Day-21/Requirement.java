import java.util.Scanner;
class Requirement{
public static void main(String[] args) 
 { Scanner sc = new Scanner(System.in); 
   System.out.println("Hey user enter the base of the triangle ");
   double h = sc.nextDouble(); 
   System.out.println("Hey user enter the height of the triangle ");
   double b = sc.nextDouble() ;
   getArea( b , h ) ;
   //----------------------------------------------------------------------------
   
   System.out.println("Hey user enter the Length of the Rectangle");
   double len = sc.nextDouble(); 
   System.out.println("Hey user enter the Breadth of the Rectangle ");
   double bread = sc.nextDouble();
  double para =  getParam(len , bread); 
  System.out.println("Paramter of the rectangle is "  + para);
  


 //----------------------------------------------------------------------------
   
  System.out.println("Hey user enter the radius of the Circle ");
   double radius = sc.nextDouble();
   System.out.println("Perimeter of the Circel is " + getParam(radius) ) ;  
 }


public static void getArea(double base ,double height){
  double area =1/2 * base * height ;
  System.out.println(area); 
 }




public static double getParam(double length , double breadth){
   double parameter = 2 * (length + breadth ) ;
   return parameter ;
 }


public static double getParam(double radius)
{  double para =  2 * 22 / 7 * radius ;
   return para ;
 }


}












