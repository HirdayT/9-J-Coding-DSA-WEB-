//Write a program in java to demonstrate the different conditions under which finally block executes.

// Throw an exceeption out of the method 
public class P18 {
 static void procA(){
    try{
        System.out.println("Inside procA");
        throw new RuntimeException("Testing");
    }finally{
        System.out.println("procA's finally");
    }
 }
//Return from within a try block 
static void procB(){
    try{
        System.out.println("Inside procB");
        return ;
    }finally{
        System.out.println("ProcB's Finally ");
    }
}

//execute a try block normally
static void procC(){
    try{
        System.out.println("Inside procC");
    }finally{
        System.out.println("procC's finally");
    }
}




public static void main(String[] args) {
    try{
        procA();
    }catch(Exception e){
        System.out.println("Exception caught");
    }
    procB();
    procC();
}
 
    






}
