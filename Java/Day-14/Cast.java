class Cast{
 public static void main(String[] args)
 {
    int sal = 5000 ;
   // System.out.println(sal); 
     double sal2 ;
     sal2 = sal ;
//   WIDENING
      System.out.println("Original sal = " + sal);
        System.out.println("Implicit casted sal = " + sal2);
           System.out.println("Original sal explicitly typecasted = " + (double)sal);
      
  //  Narrowing
      short sal3 = 0;
     //  sal3 = sal ;
        System.out.println("Original sal = " + sal);
        System.out.println("Implicit casted sal = " + sal3);
           System.out.println("Original sal explicitly typecasted = " + (byte)sal);
      

 }



 }