#include <stdio.h>
int main()
{
    int n =10,a=0,b=1,c;
    printf("%d %d",a,b);
    while(n!=0)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        n--;
    }
    return 0;
}