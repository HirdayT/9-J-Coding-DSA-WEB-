//Write a program to find volume of box by directly initialising instance variables 
public class P14 {
    public static void main(String[] args){
        Box b1 = new Box(10, 20, 30);
    }
}
 class Box{
int length , breadth , height ;
    Box(){}
    Box(int length , int breadth , int height){
        this.length = length ;
        this.breadth = breadth ;
        this.height = height ;
        System.out.println("Volume of box directly from instantiation is  : " + (length * breadth * height));
    }
}
