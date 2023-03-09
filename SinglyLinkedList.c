/******************************************************************************

SinglyLinked List to get and print the value...

Input:
4
1 2 3 4
 
Output:
1 2 3 4 

Input:
6
1 2 3 4 2 9

Output:
1 2 3 4 2 9

*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct node{
int d;
struct node* next;
};

void print(struct node* n){
while(n!=NULL){
printf("%d ",n->d);
n=n->next;
}
}

int main(){
int n,a;
printf("Enter the size: ");
scanf("%d",&n);
struct node *t=NULL,*h=NULL;
t=(struct node*)malloc(sizeof(struct node));
h=(struct node*)malloc(sizeof(struct node));

for(int i=0;i<n;i++){
scanf("%d",&a);
t->d=a;
struct node *b=NULL;
b=(struct node*)malloc(sizeof(struct node));
if(i==n-1) t->next=NULL;
else t->next=b;
if(i==0) h=t;
t=t->next;
}

print(h);
}
