#include <stdio.h>
#include <stdbool.h>
#define MAX 201

int size=0,top=-1;
int stack[MAX];

bool push(int a){
     if(top==size-1) return false;
     stack[++top]=a;
     return true; 
}

int pop(){
    return stack[top--];
}

int peek(){
    return stack[top];
}

int display(){
    int res[top+1];
    int i=top,j=0;
    while(i>=0) res[j++]=stack[i--];
    printf("Display: ");
    for(int i=0;i<=top;i++)
    printf("%d ",stack[i]);
    printf("\n");
}

int main(){
    printf("Enter Stack Size (limit 200): ");
    scanf("%d",&size);
    int e,ch;
    do{
    printf("\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter Element: ");
        scanf("%d",&e);
        if(push(e)) printf("Element Pushed Successfully..!\n");
        else printf("Stack OverFlow...!\n");
        break;
        case 2:
        if(top==-1) printf("Stack Underflow..!\n");
        else printf("Popped Element: %d\n",pop());
        break;
        case 3:
        if(top==-1) printf("Stack Underflow..!\n");
        else printf("Peek Element: %d\n",peek());
        break;
        case 4:
        display();
        break;
        case 5:
        break;
        default:
        printf("Invalid Option...!\n");
    }
    }while(ch!=5);
}