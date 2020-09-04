#include<stdio.h>
void push(int element,int stack[],int size,int top);
void pop(int stack[],int size,int top);
void display(int stack[],int size,int top);

int main(){
    int size=5;
    int top=-1;
    int stack[5];
    push(1,stack,size,top);
    top++;
    push(2,stack,size,top);
    top++;
    push(3,stack,size,top);
    top++;
    push(4,stack,size,top);
    top++;
    push(5,stack,size,top);
    top++;
    push(6,stack,size,top);
    pop(stack,size,top);
    top--;
    pop(stack,size,top);
    top--;
    display(stack,size,top);
}
void push(int element,int stack[],int size,int top){
       
        if(top==(size-1)){
            printf("OVERFLOW");
        }
        else{
            top++;
            stack[top]=element;
            
        }
    
}
void display(int stack[],int size,int top){
    if(top!=-1){
                for(int i=top;i>=0;i--){
                                printf("%d",stack[i]);
                }
    }
    else{
        printf("empty stack");
    }
    }

void pop(int stack[],int size,int top){
    
    if(top==-1){
        printf("UNDERFLOW");
    }
   
}