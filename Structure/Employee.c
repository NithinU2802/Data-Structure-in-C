#include<stdio.h>

struct Employee{
    char a[101];
    int age;
    int Reg;
};

int main(){
  int n;
  printf("Enter Number of Employee: ");
  scanf("%d",&n);
  struct Employee emp[n];
  for(int i=0;i<n;i++){
    printf("Enter Employee %d details:\n",i+1);
    printf("Enter Name: ");
    scanf("%s",emp[i].a);
    printf("Enter Age: ");
    scanf("%d",&emp[i].age);
    printf("Enter Reg No: ");
    scanf("%d",&emp[i].Reg);
  }
  for(int i=0;i<n;i++){
    printf("\nEnter Employee %d details:\n",i+1);
    printf("Enter Name: %s\n",emp[i].a);
    printf("Enter Age: %d\n",emp[i].age);
    printf("Enter Reg No: %d\n",emp[i].Reg);
  }

}