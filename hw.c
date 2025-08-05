#include <stdio.h>
int main(){
    int a = 1;
    int b = 2;
    int c = 0;
    printf("values of a and b %d , %d\n",a,b);
    c= a;
    a= b;
    b= c;
    printf("swaped a and b %d , %d",a,b);
    printf("Odd even check");
    scanf("%d",&a);
    if(a%2==0){
        printf("given no. is even");
    }
    else{
        printf("given no. is odd");
    }
    return 0;
}