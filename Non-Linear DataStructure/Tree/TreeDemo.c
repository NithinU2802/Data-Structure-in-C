#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct Binary{
    int val;
    struct Binary *left,*right;
};

int n;
struct Binary* root=NULL;

void Create(){
    printf("No of Element: ");
    scanf("%d",&n);
    int e;
    struct Binary* t=NULL,*pre=NULL;
    for(int i=0;i<n;i++){
        struct Binary* tree=(struct Binary*)malloc(sizeof(struct Binary));
        scanf("%d",&e);
        tree->val=e;
        tree->left=NULL;
        tree->right=NULL;
        if(i==0)
            root=tree;
        else{
            t=root;
            int f=0;
            while(t!=NULL){
                if(t->val==e){ f=1; break; }
                pre=t;
                if(e<t->val) t=t->left;
                else t=t->right;
            }
            if(f==0){
            if(e<pre->val && pre->left==NULL)
                pre->left=tree;
            else
                pre->right=tree;
            }
        }
    }
}

void InOrder(struct Binary *r){
    if(r==NULL) return;
    InOrder(r->left);
    printf("%d ",r->val);
    InOrder(r->right);
}

void PostOrder(struct Binary *r){
    if(r==NULL) return;
    PostOrder(r->left);
    PostOrder(r->right);
    printf("%d ",r->val);
}

void PreOrder(struct Binary *r){
    if(r==NULL) return;
    printf("%d ",r->val);
    PreOrder(r->left);
    PreOrder(r->right);
}

void Traverse(){
    printf("\n\n1.InOrder\n2.PostOrder\n3.PreOrder\n");
    int ch;
    scanf("%d",&ch);
    if(ch==1) InOrder(root);
    else if(ch==2) PostOrder(root);
    else if(ch==3) PreOrder(root);
    else printf("No kind of Option..! Back to lobby..???");
    printf("\n");
}


bool Insert(struct Binary *r,int e){
    struct Binary *t=(struct Binary *)malloc(sizeof(struct Binary)),*pre;
    t->val=e;
    t->left=NULL;
    t->right=NULL;
    if(root==NULL){
        root=t;
        return true;
    }
    while(r!=NULL){
        if(r->val==e){
            free(t);
            return false;
        }
        pre=r;
        if(e<r->val) r=r->left;
        else r=r->right;
    }
    if(e<pre->val && pre->left==NULL)
                pre->left=t;
            else
                pre->right=t;
    return true;

}

void Remove(struct Binary* r){
if(r==NULL) return;
Remove(r->left);
Remove(r->right);
free(r);
}

struct Binary* Highest(struct Binary* r,struct Binary* t){
    if(r==NULL) return t;
    if(t==NULL) t=r;
    else if(r->val>t->val) t=r;
    struct Binary* a=Highest(r->left,t);
    struct Binary* b=Highest(r->right,t);
    if(a->val>b->val) return a;
    return b;
}

Binary* Delete(struct Binary* r,int e){
    if(r==NULL) return NULL;
    else{
        if(e==r->val)
    }
    //if(t->left==NULL && t->right==NULL) 
    return false;
}





int main(){
printf("-----Binary Search Tree -----\n");
Create();
int ch,e;
do{
    printf("\n1.Insert\n2.Delete\n3.Traversal\n4.Create Tree\n5.Delete Tree\n6.Exit\n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("Enter Element: ");
        scanf("%d",&e);
        if(Insert(root,e)) printf("Element Inserted Successfully...!!!\n");
        else printf("Sorry...! Element already available in the tree..?\n");
        n++;
        break;
        case 2:
        printf("Enter Element: ");
        if(Delete(root,e)!=NULL) printf("Element Deleted Successfully..!!\n");
        else printf("Element May Not Available in the tree..?");
        // if(Delete(root,e)) printf("Element Deleted Successfully..!!\n");
        // else printf("Element May Not Available in the tree..?");
        break;
        case 3:
        Traverse();
        break;
        case 4:
        Create();
        break;
        case 5:
        Remove(root);
        root=NULL;
        break;
        case 6:
            break;
        default:
            printf("Invalid Choice...!");
    }
}while(ch!=6);
}