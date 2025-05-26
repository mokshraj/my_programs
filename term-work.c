// //1. Design a C program and draw a flowchart that creates an array of n integers,accepts elements, and inserts a new element at a given position.
// #include <stdio.h>
// int main(){
//     int i,n,pos,e;
//     printf("Enter a no. : ");
//     scanf("%d",&n);
//     int a[n+1];
//     for(i=0;i<n;i++){
//         printf("Enter element %d : ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the position you want to enter : ");
//     scanf("%d",&pos);
//     for(i=n;i>pos-1;i--){
//         a[i] = a[i-1];
//     }
//     printf("Enter the element you want to enter : ");
//     scanf("%d",&e);
//     a[pos-1] = e;
//     for(i=0;i<n+1;i++){
//         printf("\nElement %d : ",i+1);
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

//2.
#include<stdio.h>
int total(float a[],int s){
    int i;
    float sum =0;
    for(i=0;i<s;i++){
        sum = sum + a[i];
    }
    return sum;
}
float percentage(float a[],int s,int total){
    return ((a,s)/(s*total))*100;
}
int main(){
    int s,n,i,j,tol;
    printf("Enter the no. of students : ");
    scanf("%d",&n);
    printf("Enter the no. of subjects : ");
    scanf("%d",&s);
    printf("Enter the total marks : ");
    scanf("%d",&tol);
    float student[n][s];
    for(i=0;i<n;i++){
        printf("Enter marks of student %d : \n",i+1);
        for(j=0;j<s;j++){
            printf("Enter marks of subject %d : ",j+1);
            scanf("%f",&student[i][j]);
        }
    }
    printf("%.2f",percentage(student[0],s,tol));
    return 0;
}