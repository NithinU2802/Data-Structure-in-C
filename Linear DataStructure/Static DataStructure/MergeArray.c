#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&m,&n);
    printf("Enter 1st Array: ");
    int a[m],b[n];
    for(int i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Enter 2st Array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&b[i]);
    int r[n+m],k=0;
    for(int i=0;i<m;i++) r[k++]=a[i];
    for(int i=0;i<n;i++) r[k++]=b[i];

    for(int i=0;i<k;i++)
    printf("%d ",r[i]);
}