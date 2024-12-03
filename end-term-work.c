// //Palendrome check program
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[4],str1[4],temp[2];
//     int i;
//     printf("Enter a 3 alphabet palendrome : ");
//     scanf("%3s",&str);
//     for(i=strlen(str);i>=0;i--){
//         temp[0]=str[i];temp[1]='\0';
//         strcat(str1,temp);
//     }
//     if(strcmp(str,str1)==0){
//         printf("it's a palendrome");
//     }
//     else{
//         printf("it's not a palendrome");
//     }
//     return 0;
// }

// //Vowel count program
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[10],temp1[2],temp2[2];temp2[1]='\0';temp1[1]='\0';
//     int j,v=0,i,vowels[]={'a','e','i','o','u'};
//     int consonents[]={};
//     scanf("%s",&str);
//     for(i=0;i<strlen(str);i++){
//         for(j=0;j<5;j++){
//             temp1[0]=str[i];temp2[0]=vowels[j];
//             if(strcmp(temp1,temp2)==0)
//                 v++;
//         }
//     }
//     printf("%d",v);
//     return 0;
// }

// //LCM program
// #include<stdio.h>
// int HCF(int x,int y){
//     int temp;
//     if(x>y){
//     while(y!=0){
//         temp=x%y;
//         x=y;
//         y=temp;
//     }
//     return x;}
//     else{
//         while(x!=0){
//         temp=y%x;
//         y=x;
//         x=temp;
//     }
//     return y;
// }}
// int LCM(int a,int b){
//     int HCF(int,int);
//     int lcm;
//     lcm=(a*b)/HCF(a,b);
//     return lcm;
// }
// int main(){
//     int HCF(int,int);
//     printf("%d",HCF(25,20));
//     printf("\n%d",LCM(25,20));
//     return 0;
// }

// //Array sort find second largest no.
// #include <stdio.h>
// void bublsort(int *arr,int n){
//     int *addr = arr;
//     for(int i=0;i<n;i++){
//         arr = addr;
//         for(int j=0;j<n-i-1;j++){
//             int a = *arr;
//             int b = *(arr + 1);
//             if(a>b){
//                 int temp = *arr;
//                 *arr=*(arr+1);
//                 *(arr+1)=temp;
//             }
//             arr++;
//         }
//     }
// }
// int main(){
//     int arr[]={5,4,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printf("Given array : ");
//     for(int i=0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     void bublsort(int[],int);
//     bublsort(arr,n);
//     int sec_large = arr[n-2];
//     printf("Second Largest no. in array : %d",sec_large);
//     return 0;
// }

// //Addtion matrices
// #include <stdio.h>
// int main(){
//     int matr1[2][3]={
//         {1,2,3},
//         {1,2,3}
//     };
//     int matr2[2][3]={
//         {1,2,3},
//         {1,2,3}
//     };
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",matr1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",matr2[i][j]);
//         }
//         printf("\n");
//     }
//     int matr3[2][3];
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             matr3[i][j]=matr1[i][j]+matr2[i][j];
//         }
//     }
//     printf("\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",matr3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Find Sum of Digits By Function
#include <stdio.h>
int digits_sum(int a){
    int sum=0;
    while(a!=0){
        sum = sum + a%10;
        a/=10;
    }
    return sum;
}
int main(){
    int a;
    int digits_sum(int);
    printf("Enter a number for addition : ");
    scanf("%d",&a);
    printf("Sum of Digits of given number : %d",digits_sum(a));
    return 0;
}