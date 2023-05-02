#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<stdbool.h>

struct Linked{
    int val;
    struct Linked* next;
};

int n=0;
static struct Linked *head=NULL;

void print(struct Linked* h){
    while(h!=NULL){
        printf("%d ",h->val);
        h=h->next;
    }
}

bool Delete(struct Linked* h,int i){
    int c=0;
    struct Linked *pre=NULL;
    while(h!=NULL){
        c++;
        if(c==i){
            if(c==1) head=h->next;
            else{
                pre->next=h->next;
                free(h);
            }
            return true;
        }
        pre=h;
        h=h->next;
    }
    return false;
}

bool Insert(struct Linked* h,int i,int e){
    int c=0;
    
    struct Linked *t=(struct Linked*)malloc(sizeof(struct Linked)),*pre;
    if(h==NULL){
    t->val=e;
    t->next=NULL;
    head=t;
    return true;
    }
    while(h!=NULL){
        c++;
        if(c==i){
            t->val=e;
            t->next=h;
            if(c==1) head=t;
            else{
                pre->next=t;
                t->next=h;
            }
            return true;
        }
        pre=h;
        h=h->next;
    }
    c++;
    if(i==c || n==0){
    t->val=e;
    t->next=h;
    pre->next=t;
    return true;
    }
    return false;
}

bool Create(){
struct Linked *t;
if(n>0){
    while(head!=NULL){
        t=head;
        head=head->next;
        free(t);
    }
}
printf("\nEnter the Size:");
scanf("%d",&n); 
struct Linked *arr=head,*pre=arr=(struct Linked*)malloc(sizeof(struct Linked));
for(int i=0;i<n;i++){
arr=(struct Linked*)malloc(sizeof(struct Linked));
arr->next=NULL;
if(i!=0) pre->next=arr;
scanf("%d",&arr->val);
if(i==0) head=arr;
pre=arr;
}
}

int main(){
printf("------Singly LinkedList----");
int ch;
Create();
do{
printf("\n1.Insert\n2.Delete\n3.display\n4.Create\n5.Exit\n");
scanf("%d",&ch);
int i,e;
switch(ch){
    case 1:
        printf("Enter Position:");
        scanf("%d",&i);
        printf("Enter Element: ");
        scanf("%d",&e);
        if(Insert(head,i,e)){
        printf("Element Inserted..!\n"); n++; }
        else printf("Input Error Check Size..!");
        break;
    case 2:
        printf("Enter Postion: ");
        scanf("%d",&i);
        if(n==0){
            printf("Please Create an array..!");
            break;
        }
        if(Delete(head,i)){ printf("Element Deleted..!"); n--; }
        else printf("Element Postion Not Occure..!");
        break;
    case 3:
        if(n==0){ printf("Empty Array..!"); break; }
        print(head);
        break;
    case 4:
        Create();
        break;
    case 5:
        break;
    default:
        printf("Invalid Operation..!");
}
}while(ch!=5);


}