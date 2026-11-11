class NewThread implements Runnable {
 String name ;
 Thread t ;
 NewThread(String threadname){
    name = threadname ;
    t = new Thread(this,name);
    System.out.println("New Thread: "+ t);
 }
 public void run(){
    try{
        for(int i =5 ; i > 0 ; i--){
            System.out.println(name + " : " + i);
            Thread.sleep(500);
        }
    }catch(InterruptedException e){
        System.out.println(name + " interrupted . ");
    }
 System.out.println(name + " exiting . ");
 }


}


public class P20 {
  public static void main(String[] args) {
    NewThread ob1 =  new NewThread("One");
    NewThread ob2 =  new NewThread("Two");
    NewThread ob3 =  new NewThread("Three");

    ob1.t.start();
    ob2.t.start();
    ob3.t.start();
    try{
        Thread.sleep(10000);
    }catch(InterruptedException e){
        System.out.println("Main thread interrupted.");
    }
  }  
}
