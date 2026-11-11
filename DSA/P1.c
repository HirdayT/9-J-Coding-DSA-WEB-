#include<stdio.h>
#define  MAX 100
int arr[MAX];
int n = 0; 


void display(){
    printf("\nArray elements :\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d \n",arr[i]);
     }
    }
void create(){
    printf("Enter the number of elements ");
    scanf("%d", &n);
    printf("\n Enter %d elements", n);
    for(int i = 0 ; i < n ; i++){
        scanf("%d" ,&arr[i]);       
    }
    printf("Array created successfully");
}


void insert(){
    int pos ,val ;
    printf("enter the position to insert ");
    scanf("%d" , &pos);
    printf("enter the value to insert" );
    scanf("%d", &val);

    for(int i = n - 1 ; i >= pos ;i--){
        arr[i+ 1] = arr[i] ;
    }
    arr[pos] = val ;
    n++ ;
    display(); 
}


void delete(){
    int pos ;
    printf("Enter the positions to delete ");
    scanf("%d", &pos);
    
    printf("deleted element: %d \n" , arr[pos]);

    for(int i = 0 ; i < n- 1; i++ ){
        arr[i] = arr[i + 1];
    }
    n-- ;
    display() ;
}


int main(){
    int choice ;

    do{
        printf("\n------ Arrat operation ------\n");
        printf("1.Create\n");
        printf("2.Display\n");
        printf("3.Insert\n");
        printf("4.Delete\n");
        printf("5.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice){
            case 1:create();
            break;
            case 2:display();
            break;
            case 3:insert();
            break;
            case 4:delete();
            break;
            case 5:printf("Exiting the program \n");
            break;
            default:printf("Invalid choice \n");
        }
    }while(choice != 5) ;
    return 0 ;
}