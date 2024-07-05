#include <stdio.h>

void main() {
    FILE *fp;

    int wcount,lcount,ccount;
    char text[200];
    fp = fopen("a1.DAT","w");
    printf("Enter text to be written. '.' indicates a newline.");
    scanf("%[^\n]",text);

}