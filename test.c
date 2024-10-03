#include <stdio.h>
int main()
{
    char G;
    printf("Enter the first letter of your gender : ");
    scanf("%1c",&G);
    if(G=='M'||G=='m')
    {
        printf("\nYou're a MAN");
    }
    else if(G=='W'||G=='w')
    {
        printf("\nYou're a WOMAN");
    }
    else
    {
        printf("\nInvalid Gender");
    }
    return 0;
}