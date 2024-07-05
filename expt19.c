#include <stdio.h>

int s(int *p,int x);

void main() {
    int n, a[100],s1,*p,i=0;
    printf("Enter the size:");
    scanf("%d",&n);
    p = a;
    printf("Enter the elements:");
    while (i<n)
    {
        scanf("%d",p);
        p++;
        i++;
    }
    s1 = s(a,n);
    printf("The sum of the array is %d",s1);
}
int s(int *p,int x) {
    int s2=0,i;
    for (i=0;i<x;i++) {
        s2=s2+*p;
        p++;
    }
    return s2;

}