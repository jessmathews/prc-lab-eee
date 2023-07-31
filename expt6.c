#include <stdio.h>

void main() {
    int i,size,search,count=0,flag=0;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the numbers:\n");
    for (i=0; i<size;i++) {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be found:");
    scanf("%d",&search);
    for (i=0;i<size;i++) {
        if (search==arr[i]) {
            flag=1;
            count=i;
            break;
        }
        else {
            continue;
        }
    }
    if (flag==1)
    {
        printf("The search element is present in the array at position %d \n",count+1);
    }
    else
    {
        printf("The search element is not found!\n");
    }
}