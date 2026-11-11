#include<stdio.h>
#define  MAX 100
int stack[MAX];
int top = -1; ;

void display(){
    if(top == -1){
        printf("Stack is emplty \n");
        return ;
    }
    printf("\nStack elements (top to bottom ):\n");
    for(int i = top ; i >= 0 ; i--){
        printf("%d \n",stack[i]);
     }
    }

void push(){
    if(top >= MAX - 1){
        printf("\nStack overflow \n");
        return ;    
    }
    int val ;
    printf("enter the value you want to push : ");
    scanf("%d",&val);
    top++;
    stack[top] = val;
    printf("%d pushed to stack \n",val);
    display();
}    

void pop(){
    if(top == -1){
        printf("Stack underflow \n");
        return ;
    }
    int val = stack[top];
    top--;
    printf("%d popped from stack \n",val);
    display();
}


void peek(){
    if(top == -1){
        printf("Stack is empty \n");
        return ;
    }
    printf("Top element is : %d \n",stack[top]);
}





int main(){
   int choice ;

   do{
    printf("\n----Stack operations----\n");
    printf("1.push\n");
    printf("2.pop\n");
    printf("3.peek\n");
    printf("4.display\n");
    printf("5.exit\n");
    printf("Enter your choice");
    scanf("%d", &choice);

    switch(choice){
        case 1:push();
        break;
        case 2:pop();
        break;
        case 3:peek();
        break;
        case 4:display();
        break;
        case 5:printf("Exiting now .. \n");;
        default: printf("Invalid choice\n");
    }
   }while(choice != 5);
    return 0;
}