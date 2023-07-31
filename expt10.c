#include <stdio.h>
#include <stdlib.h>

void main() {
    int i=0,v=0,c=0,s=0;
    char s1[50];
    printf("Enter a string:");
    scanf(" %[^\n]",s1);
    while (s1[i]!='\0')
    {
        if (s1[i]==' ')
        {
            s++;
        }
        else if (s1[i]=='a'|| s1[i]=='e'|| s1[i]=='i'|| s1[i]=='o'|| s1[i]=='u'|| s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O' || s1[i]=='U')
        {
            v++;
        }
        else if ((s1[i]>='A' && s1[i]<='Z') || (s1[i]>='a' && s1[i]<='z'))
        {
            c++;
        }
        i++;  
    }
    printf("Number of vowels:%d\n",v);
    printf("Number of spaces:%d\n",s);
    printf("Number of consonants:%d\n",c);
}