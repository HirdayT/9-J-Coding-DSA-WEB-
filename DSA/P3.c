#include<stdio.h>

struct student{
    int rollno;
    char name[50];
    float marks ;
};

int main(){
    struct student s ;
    struct student *ptr ;

    ptr = &s ;

    printf("enter roll number ");
    scanf("%d", &ptr -> rollno);
    printf("Enter name :");
    scanf("%s",ptr -> name);

    printf("Enter marks :");
    scanf("%f", &ptr->marks);

    printf("\n --- student details ----\n");
    printf("Roll numbers:  %d\n",ptr -> rollno);
    printf("name: %s\n", ptr -> name);
    printf("marks: %.2f\n", ptr -> marks);

    return 0 ;
}
