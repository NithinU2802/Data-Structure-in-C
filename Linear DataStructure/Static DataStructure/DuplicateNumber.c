#include <stdio.h>

int max(int a[],int n){
    int m=0;
    for(int i=0;i<n;i++)
    if(a[i]>m) m=a[i];
    return m;
}

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m=max(a,n);
    int cn[m+1];
    for(int i=0;i<m+1;i++)
    cn[i]=0;
    for(int i=0;i<n;i++)
    cn[a[i]]++;

    for(int i=0;i<n;i++)
    if(cn[a[i]]>1){ 
        printf("%d ",a[i]);
        cn[a[i]]=0;
    }
}