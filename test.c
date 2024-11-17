#include <stdio.h>
int main()
{
    int a=0,i,array[5]={1,2,3,4,5};
    for(i=0;i<5;i++){
        if(array[i] > array[i+1]){
            a = array[i];
        }
    }
    printf("%d",a);
    return 0;
}