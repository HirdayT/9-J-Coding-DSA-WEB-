//Write a program in java to handle to two types of exceptions ie. ArithmeticException and          ArrayIndexOutOfBoundsException .

public class P17 {
    public static void main(String[] args) {
        int length = args.length ;
        System.out.println("The length of the array of args is : " + length);
        try{
            int a_e_num = 10/length ;
            int[] array = {1};
            array[20] = 100 ;
        }catch(ArithmeticException e){
            System.out.println("ArithematicException has occured  " + e.getMessage());
        }catch(ArrayIndexOutOfBoundsException e ){
        System.out.println("Array INdexOutOfBoundsException has occured  " + e.getMessage());
        }
        System.out.println("After TRY CATCH block ");
    }


}
