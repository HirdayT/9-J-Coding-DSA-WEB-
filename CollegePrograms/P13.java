//Write a program to find volume of box using method to initialise instance variable 
public class P13 {
 public static void main(String[] args){
    Box b = new Box();
    b.setter(20, 25, 30);
    b.getVolume();
 }     
}
class Box{
    int length ;
    int breadth ;
    int height ;
    Box(){}
    Box(int length , int breadth , int height){
        this.length = length ;
        this.breadth = breadth ;
        this.height = height ;
    }
    void setter(int length , int breadth , int height){
        this.length = length ;
        this.breadth = breadth ;
        this.height = height ;
    }
    void getVolume()
    {
        System.out.println("Volume of box is : " + (length * breadth * height));
    }
}


