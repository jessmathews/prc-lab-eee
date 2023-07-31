#include <stdio.h>

void main() {
    int sum=0,size,i;
    float avg;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers:\n");
    for (i=0;i<size;i++) {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<size;i++) {
        sum= sum+arr[i];
    }
    avg= sum/size;
    printf("The Sum is %d\n",sum);
    printf("The Average is %f\n",avg);
    
}