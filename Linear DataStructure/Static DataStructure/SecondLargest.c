#include <stdio.h>

void sort(int a[],int n){
    int t=0;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i=-1;
        }
    }
}

int main(){
    int n;
    printf("Enter the Size: ");
    scanf("%d",&n);
    int pre=0,a[n];
    printf("Enter Elements: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    sort(a,n);
    int mx=a[0];
    for(int i=1;i<n;i++){
        if(mx<a[i]){
            pre=mx;
            mx=a[i];
        }
    }
    printf("Second Maximum Element: %d",pre);

}