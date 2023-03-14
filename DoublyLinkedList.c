/******************************************************************************

Element, Display Next and Previous element of a node.....

Input:
4 
1 2 3 4 

Output:
Current Value: 1 Next Value: 2 
Current Value: 2 Previous Value: 1 Next Value: 3 
Current Value: 3 Previous Value: 2 Next Value: 4 
Current Value: 4 Previous Value: 3 

Input:
7 
1 2 3 2 3 3 4

Output:
Current Value: 1 Next Value: 2 
Current Value: 2 Previous Value: 1 Next Value: 3 
Current Value: 3 Previous Value: 2 Next Value: 4 
Current Value: 2 Previous Value: 1 Next Value: 3 
Current Value: 3 Previous Value: 2 Next Value: 4 
Current Value: 2 Previous Value: 1 Next Value: 3 
Current Value: 4 Previous Value: 2 

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct node{
int n;
struct node *next, *prev;
};

void print(struct node *h){
while(h!=NULL){
printf("Current value: %d ",h->n);
if(h->prev!=NULL) printf("Previous Value: %d ",h->prev->n);
if(h->next!=NULL) printf("Next Value: %d ",h->next->n);
printf("\n");
h=h->next;
}
}

int main(){
int n,a;
struct node *h=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n);
struct node *b,*t=NULL;
t=(struct node*)malloc(sizeof(struct node));
for(int i=0;i<n;i++){ 
scanf("%d",&a);
b=(struct node*)malloc(sizeof(struct node));
if(i==0){
b->n=a;
b->next=NULL;
b->prev=NULL;
h=b;
t=h;
}else{
t->next=b;
b->prev=t;
b->n=a;
t=b;
b->next=NULL;
}

}
print(h);

}
