#include <stdio.h>

int factorial(int num) {
    if (num==0) {
        return 1;
    }
   return num*factorial(num-1);
}

int ncr(int n,int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}

int main() {
   int n, i, j;
   printf("Enter no. of rows:");
   scanf("%d",&n);
   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf("  ");
      for(j = 0; j <= i; j++)
         printf("%d   ", ncr(i, j));

      printf("\n");
   }
   return 0;
}