class NewThread extends Thread{
    NewThread(String name){
        super(name);
        System.out.println("Child Thread " + this);
    }

    public void run(){
        try{
            for(int i = 5 ; i > 0 ; i--){
                System.out.println(this.getName()+" : " + i);
                Thread.sleep(500);
            }
        }catch(InterruptedException e){
            System.out.println("Child Interrupted: ");
        }
    }
}
public class P19 {
 public static void main(String[] args) {
    NewThread nt1 = new NewThread("First Thread");
    NewThread nt2 = new NewThread("Second Thread");
    NewThread nt3 = new NewThread("Third Thread");

    nt1.start();
    nt2.start();
    nt3.start();

    try{
     nt1.join();
     nt2.join();
     nt3.join();
    }catch(InterruptedException e){
        System.out.println("Main Thread Interrupted");
    }
 }
    
}
