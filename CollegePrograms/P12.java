public class P12 {
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
        System.out.println("Volume of box is : " + (length * breadth * height));
    }
void getVolume(){
System.out.println("The Volume of the box is " + length * breadth * height);
}
}
