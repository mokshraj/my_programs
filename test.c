#include <stdio.h>
int main()
{
   int a,b,c,d,f=0;
   a = 153;
   c= a;
   while(c!=0){
    c/=10;
    b++;
   }
   c=a;
   while(c!=0){
    d= c%10;
    c/=10;
    int i;
    int e=1;
    for(i=1;i<=b;i++){
        e = e*d;
    }
    f= f+e;
   }
   printf("%d",f);}
