#include <stdio.h>
#define MAX 100 
int queue[MAX];
int front = -1 ;
int rear = -1 ;

void display(){
    if(front == -1 || front > rear){
        printf("\nQueue is empty\n");
        return ;
    }
    printf("\nqueue elements : ");
    for(int i = front ; i <= rear ; i++){
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void enqueue(){
    if(rear >= MAX -1){
        printf("\nqueue overflow!\n");
        return ;
    }
    int val ;
    printf("Enter Value to insert:");
    scanf("%d",&val);
    if(front == -1){
        front = 0 ;
    }
    rear++ ;
    queue[rear] = val ;
    printf("Inserted successfully \n");
    display();
}


void dequeue(){
    if(front == -1 || front > rear){
        printf("\n Queue underflow\n");
        return ;
    }
    printf("deleted element :  %d \n", queue[front]);
    front++ ;
    if(front > rear){
        front = -1 ;
        rear = -1 ;
    }
    display();
}


int main(){
    int choice ;
     
    do{
        printf("\n---- Queue Operations --------\n");
        printf("1.enqueue (insert) \n");
        printf("2.dequeue(delete)\n");
        printf("3.display\n");
        printf("4.exit \n");
        printf("Enter choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1: enqueue(); break ;
            case 2: dequeue(); break ;
            case 3: display(); break ;
            case 4: printf("exiting ... \n");break;
            default: printf("invalid choice! \n");
        }
    }while(choice != 4);

    return 0 ;
}