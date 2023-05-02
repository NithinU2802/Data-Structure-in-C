#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct Linked{
    int val;
    struct Linked* next;
};

void print(struct Linked* h){
    while(h!=NULL){
        printf("%d ",h->val);
        h=h->next;
    }
}

int main(){
int n;
printf("Enter the Size:");
scanf("%d",&n); 
struct Linked *head=NULL,*arr=head,*pre=arr=(struct Linked*)malloc(sizeof(struct Linked));;
for(int i=0;i<n;i++){
arr=(struct Linked*)malloc(sizeof(struct Linked));
arr->next=NULL;
if(i!=0) pre->next=arr;
scanf("%d",&arr->val);
if(i==0) head=arr;
pre=arr;
}
print(head);
}