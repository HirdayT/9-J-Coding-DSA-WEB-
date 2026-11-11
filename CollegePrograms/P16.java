//. Write a program in java to find volumes of cuboid and cube using the concepts of dynamic method dispatch and abstract class.
abstract class Figure{
    double dimension1 ;
    double dimension2 ;
    Figure(){}
    Figure(double a , double b ){
        dimension1 = a ;
        dimension2 = b ;
    }
     
    abstract double getVolume();
}

class Cuboid extends Figure{
    Cuboid(){}
    Cuboid(double length, double width){
        super(length, width);
    }

    double getVolume(){
        return dimension1 * dimension2 * 1 ;//Assuming height is 1 for simplicity
    }
}

class Cube extends Figure{
    Cube() {}
    Cube(double side){
        super(side,side);
    }
    double getVolume(){
        return dimension1 * dimension1 * dimension1 ;
    }
}

public class P16 {
    public static void main(String[] args ){
      Figure figref ;
      Cuboid cuboid = new Cuboid(15,10);
      Cube cube = new Cube(10);

      figref = cuboid ;
      System.out.println("The volume of the cuboid is : " + figref.getVolume());
      
      figref = cube ;
      System.out.println("The volume of the cube is : " + figref.getVolume());
    }
    
}
