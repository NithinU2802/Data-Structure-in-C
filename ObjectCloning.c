/******************************************************************************

Object Cloning of structure object....

r=k to assign value of objects...

*******************************************************************************/

#include <stdio.h>

struct emp{
    int empno;
    char empname[20];
};

int main()
{
    int n;
    printf("Enter Number Of Employee: ");
    scanf("%d",&n);
    struct emp k[n],r[n];
    for(int i=0;i<n;i++){
        printf("Enter ID: ");
        scanf("%d",&k[i].empno);
        printf("Enter Name: ");
        scanf("%s",k[i].empname);
        r[i]=k[i];
    }
    
    for(int i=0;i<sizeof(r)/sizeof(struct emp);i++){
        printf("%d %s\n",r[i].empno,r[i].empname);
    }
    return 0;
}
