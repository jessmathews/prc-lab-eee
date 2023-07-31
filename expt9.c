#include <stdio.h>

void main() {
    int i=0,j;
    char s1[20],s2[20];
    printf("Enter first string:");
    scanf(" %[^\n]",s1);
    printf("Enter second string:");
    scanf(" %[^\n]",s2);
    while (s1[i]!='\0') {
        i++;
    }
    for (j=0;s2[j]!='\0';j++) {
        s1[i]= s2[j];
        i++;
    }
    s1[i]= '\0';
    printf("The concatenated string is %s \n",s1);
}