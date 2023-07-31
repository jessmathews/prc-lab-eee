#include <stdio.h>

void main() {
    int a,b,c,d,e,f,g,ans;
    printf("Enter a,b,c,d,e,f and g:");
    scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
    ans = ((a-b/c * d+e )* (f+g));
    printf("The answer is %d \n",ans);

}