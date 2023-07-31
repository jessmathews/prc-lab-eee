#include <stdio.h>

void main() {
    int n,num,sum,rem;
    printf("Enter a number:");
    scanf("%d",&n);
    num=n;
    sum=0;
    while (num>0) {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
        if (n==0) {
            break;
        }


    }
    if (n==sum) {
        printf("%d is an Armstrong number\n",n);
        
    }
    else {
        printf("%d is not an Armstrong number!\n",n);
    }
}