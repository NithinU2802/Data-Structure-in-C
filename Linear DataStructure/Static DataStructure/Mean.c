#include <stdio.h>

int main(){
    int n;
    float mean=0.0;
    printf("Enter the number of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Elements of array: ");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int s=0;
    for(int i=0;i<n;i++) s+=a[i];
    mean=(float)s/(n*1.0);
    printf("Sum: %d\n",s);
    printf("Mean: %.2f",mean);

}