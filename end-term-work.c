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

//Vowel count program
#include <stdio.h>
#include <string.h>
int vowel_count(char str[]){
    char temp1[2],temp2[2];temp2[1]='\0';temp1[1]='\0';
    int j,v=0,i,vowels[]={'a','e','i','o','u'};
    for(i=0;i<strlen(str);i++){
        for(j=0;j<5;j++){
            temp1[0]=str[i];temp2[0]=vowels[j];
            if(strcmp(temp1,temp2)==0)
                v++;
        }
    }
    return v;
}
int main(){
    char str[10];
    printf("Enter a string of lenght 9 : ");
    scanf("%s",&str);
    int vowel_count(char[]);
    printf("%d",vowel_count(str));
    return 0;
}

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
//     printf("Matrix 1: \n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",matr1[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Matrix 2: \n");
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
//     printf("Addition of Matrix 1 and 2: \n");
//     printf("\n");
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++){
//             printf("%d ",matr3[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// //Find Sum of Digits By Function
// #include <stdio.h>
// int digits_sum(int a){
//     int sum=0;
//     while(a!=0){
//         sum = sum + a%10;
//         a/=10;
//     }
//     return sum;
// }
// int main(){
//     int a;
//     int digits_sum(int);
//     printf("Enter a number for addition : ");
//     scanf("%d",&a);
//     printf("Sum of Digits of given number : %d",digits_sum(a));
//     return 0;
// }

// //Length of String using Pointers
// #include <stdio.h>
// int main(){
// char str[] ="asdfghjk";
// char *pstr = str;
// int slen=0;
// printf("Given string : %s",str);
// while(*pstr!='\0'){
//     slen++;
//     pstr++;
// }
// printf("\nLength of given string : %d",slen);
// return 0;
// }

// //Total and avg marks using struct array
// #include <stdio.h>
// #include <stdlib.h>
// struct stu{
//     int roll_no;
//     int marks;
// };
// int main(){    
//     int n,avg,total=0;
//     printf("Enter the no. of students : ");
//     scanf("%d",&n);
//     struct stu *arr=(struct stu*)malloc(n*sizeof(struct stu));
//     for(int i=0;i<n;i++){
//         printf("Enter a roll no. : ");
//         scanf("%d",&arr[i].roll_no);
//         printf("Enter the marks : ");
//         scanf("%d",&arr[i].marks);
//     }
//     for(int i=0;i<n;i++){
//         total = total+arr[i].marks;
//     }
//     avg = total/n;
//     printf("\nTotal marks %d , Average marks %d",total,avg);
//     return 0;
// }

// // Linear search 
// #include<stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int key = 9;
//     printf("searching element %d",key);
//     for(int i=0;i<n;i++){
//         if(arr[i] == key){
//             printf("\nFound %d in array at index %d",key,i);
//             break;
//         }
//     }
//     return 0;
// }

// //Merge and sort two arrays
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
//     int arr1[]={1,5,1,2,7,8,9,4,56};
//     int arr2[]={7,8,9,6,9,5,35,8,25};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);
//     int n2 = sizeof(arr1)/sizeof(arr2[0]);
//     printf("first array before sort: ");
//     for(int i=0;i<n1;i++){
//         printf("%d ",arr1[i]);
//     }
//     bublsort(arr1,n1);
//     printf("\nfirst array after sort: ");
//     for(int i=0;i<n1;i++){
//         printf("%d ",arr1[i]);
//     }
//     printf("\nsecond array before sort: ");
//     for(int i=0;i<n2;i++){
//         printf("%d ",arr2[i]);
//     }
//     bublsort(arr2,n2);
//     printf("\nsecond array after sort: ");
//     for(int i=0;i<n2;i++){
//         printf("%d ",arr2[i]);
//     }
//     int arr3[n1+n2];
//     for(int i=0;i<n1;i++){
//         arr3[i]=arr1[i];
//     }
//     int j =0;
//     for(int i=n1;i<n1+n2;i++){
//         arr3[i]=arr2[j];
//         j++;
//     }
//     printf("\nmerged array before sort: ");
//     for(int i=0;i<n1+n2;i++){
//         printf("%d ",arr3[i]);
//     }
//     bublsort(arr3,n1+n2);
//     printf("\nmerged array after sort: ");
//     for(int i=0;i<n1+n2;i++){
//         printf("%d ",arr3[i]);
//     }
//     return 0;
// }

// //Count freq of each character in string
// #include <stdio.h>
// int main() {
//     char str[100];
//     int freq[256] = {0}; //Maximum character possible in ASCII is 256
//     printf("Enter a string: ");
//     scanf("%[^\n]", str);//[^\n] read string until new line character
//     for (int i = 0; str[i] != '\0'; i++) {
//         freq[(int)str[i]]++;
//     }
//     printf("Character frequencies:\n");
//     for (int i = 0; i < 256; i++) {
//         if (freq[i] > 0) {
//             printf("'%c' = %d\n", i, freq[i]);
//         }
//     }
//     return 0;
// }

