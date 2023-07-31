#include <stdio.h>

void main() {
    int prime=1,n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n==1) {
        printf("1 is neither prime nor composite!\n");

    }
    else if (n==2) {
        printf("2 is a prime number!\n");
    }
    else {
        for (i=2;i<n;i++) {
            if (n%i==0) {
                prime=0;
                break;
            }
        }
        if (prime==0) {
            printf("The number is composite!\n");

        }
        else {
            printf("The number is prime!\n");
        }
    }
}