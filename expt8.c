#include <stdio.h>
#include <string.h>

void main() {
    char s1[100],flag=0;
    int i=0,j=0;
    printf("Enter the string:");
    scanf("%[^\n]",s1);
    j = strlen(s1)-1;
    while (i<j) {
        if (s1[i]==s1[j]) {
            flag =1;
            break;
        }
        else {
            i++;
            j--;
        }
    }
    if (flag==1) {
        printf("The string is a palindrome!\n");
    }
    else {
        printf("The string is not a palindrome! \n");
    }

}