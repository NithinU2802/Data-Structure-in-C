/******************************************************************************

Stack Implementation....


Input:
Enter Capacity of the Stack: 2
STACK OPERATIONS
1.Push
2.Pop 
3.Peek 
4.Display 
5.Exit 
Enter Your Choice: 1 
Enter Value to Be Insert: 8 

Output:
Inserted Successfully...

Input:
Enter Capacity of the Stack: 2
STACK OPERATIONS
1.Push
2.Pop 
3.Peek 
4.Display 
5.Exit 
Enter Your Choice: 1 
Enter Value to Be Insert: 3 

Output:
Inserted Successfully...



*******************************************************************************/


#include<stdio.h>
#include<malloc.h>


struct stack{
int capacity;
int top;
int* a;
};

//creation of stack...
struct stack *s=NULL;


_Bool push(int d){
if(s->top==s->capacity-1) return 0;
s->a[++s->top]=d;
return 1;
}

int pop(){
if(s->top==-1) return -1;
return s->a[s->top--];
}

int peek(){
if(s->top==-1) return 0;
return s->a[s->top];
}

void display(){
    int a[s->capacity+1];
    int t=pop();
    int n=0;
    if(t==-1){
        printf("Stack is Empty\n");
        return;
    }
     printf("TOP to BOTTOM -> ");
     while(t!=-1){
         printf("%d ",t);
        a[n++]=t;
         t=pop();
     }
     for(int i=n-1;i>=0;i--) push(a[i]);
     printf("\n");
}

int main(){
int n,c,d;

printf("Enter Capacity of the Stack: ");
scanf("%d",&n);
s=(struct stack*)malloc(sizeof(struct stack));
s->capacity=n;
s->top=-1;
s->a=(int*)malloc((n+1)*sizeof(struct stack));


while(1){
printf("\nSTACK OPERATIONS\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.Exit\nEnter Choice: ");
scanf("%d",&c);
switch(c){

case 1:
printf("Enter Value to Be Insert: ");
scanf("%d",&d);
if(push(d)) printf("Inserted Successfully...");
else printf("Failed to Insert...");
printf("\n");
break;

case 2:
printf("Element %d is Popped from the stack\n",pop());
break;

case 3:
printf("%d is on top of the stack\n",peek());
break;

case 4:
display();
break;

case 5:
return 0;

default:
printf("Invalid Choice...!");

}
}
}

