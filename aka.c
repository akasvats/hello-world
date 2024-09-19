#include <stdio.h>

#define MAXSIZE 5
int stack[MAXSIZE];
int top=-1;
void push(int item){
    if(top==MAXSIZE-1){
        printf("Overflow and Exit\n");
    }
    else{
        stack[++top]=item;
        printf("%d",item);
    }
}
void pop(){
    if(top==-1){
        printf("Underflow and exit");
    }
    else{
        int item =stack[top--];
        printf("%d",item);

    }
}
void display(){
    if(top==-1){
        printf("stack is Empty.");

    }
    else{
        printf("stack elements :");
        for(int i=0;i<=top;i++){
            printf("%d",stack[i]);
        }
        printf("\n");
    }
}

int main(){

    int choice,item;
    printf(" 1.Push\n 2.Pop\n 3.Display\n 4.Exit\n");
    while(1){
    printf("enter your choice :");
    scanf("%d",&choice);

    switch(choice){
        case 1:
             printf("Enter the value to push :");
             scanf("%d",&item);
             push(item);
             break;
        case 2:
           pop();
           break;
        case 3:
           display();
           break;
        case 4:
           return 0;
        default :
        printf("Invalid choice .\n");   }      
    
    }
    return 0;
}