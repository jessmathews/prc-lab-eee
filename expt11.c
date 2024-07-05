#include <stdio.h>
#define c_size 50

void main () {
    union Person
    {
        char name[c_size];
        char hrname[c_size];
        char cname[c_size];
        char state[c_size];
        char pincode[c_size];
    };
    
}