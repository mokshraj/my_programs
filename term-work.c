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

// //2. Check student result
// #include<stdio.h>
// int total(float a[],int s){
//     int i;
//     float sum =0;
//     for(i=0;i<s;i++){
//         sum = sum + a[i];
//     }
//     return sum;
// }
// float percentage(float a[],int s,int tol){
//     return (float)(total(a,s)/(float)(s*tol))*100.0;
// }
// int failcheck(float a[],int s,int tol){
//     int i = 1;
//     for(i=0;i<s;i++){
//         if (a[i] >= (0.4 * tol)){}
//         else{
//             i = 0;
//             break;
//         }
//     }
//     return i;
// }
// int main(){
//     int s,n,i,j,tol;
//     printf("Enter the no. of students : ");
//     scanf("%d",&n);
//     printf("Enter the no. of subjects : ");
//     scanf("%d",&s);
//     printf("Enter the total marks : ");
//     scanf("%d",&tol);
//     float student[n][s];
//     for(i=0;i<n;i++){
//         printf("Enter marks of student %d : \n",i+1);
//         for(j=0;j<s;j++){
//             printf("Enter marks of subject %d : ",j+1);
//             scanf("%f",&student[i][j]);
//         }
//     }
//     printf("\nResult : \n\n");
//     for(i=0;i<n;i++){
//         if(failcheck(student[i],s,tol)){
//         printf("Student %d : PASS : %.2f\n",i+1,percentage(student[i],s,tol));
//         }
//         else{
//             printf("Student %d :FAIL\n",i+1);
//         }
//     }
//     return 0;
// }

// //3. check palindrome sentence
// #include <stdio.h>
// #include <stdlib.h>
// void getsinput(char ** a){
//     *a = NULL;
//     char ch;
//     int size = 0;
//     while((ch=getchar())!='\n' && ch != EOF && ch !='\r'){
//         *a = (char *)realloc(*a,((size+1)*sizeof(char)));
//         (*a)[size]=ch;
//         size++;
//     }
//     *a = (char *)realloc(*a,size+1);
//         (*a)[size]='\0';
//         size++;
// }
// void remove_space(char ** a){
//     char *b=NULL;
//     int i,size=0;
//     for(i=0;(*a)[i]!='\0';i++){
//         if((*a)[i]!=' '){
//             b = (char *)realloc(b,((size+1)*sizeof(char)));
//             b[size]=(*a)[i];
//             size++;
//         }
//     }
//     b = (char *)realloc(b,size+1);
//         b[size]='\0';
//         size++;
//     free(*a);
//     *a = (char *)realloc(b,((size)*sizeof(char)));
// }
// void lowercase(char *a){
//     if((int)(*a)<91 && (int)(*a)>64){
//         *a = *a + 32;
//     }
// }
// int main(){
//     char *a;
//     int i,size;
//     printf("Please Enter a Sentence : ");
//     getsinput(&a);
//     remove_space(&a);
//     for(size=0;a[size]!='\0';size++){}
//     for(i=0;a[i]!='\0';i++){
//         lowercase(&a[i]);
//     }
//     for(i=0;i <(int)size/2;i++){
//         if(a[i]!=a[size-1-i]){
//             printf("This sentence is not plindrome.");
//             free(a);
//             return 0;
//         }
//     }
//     printf("Yes, it is a palindrome");
//     free(a);
//     return 0;
// }

// //4. find the second largest and second smallest element in an unsorted dynamic array without sorting.
// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);
//     int * arr = (int*)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter a no. : ");
//         scanf("%d",&arr[i]);
//     }
//     int size,largest=arr[0],secondlargest=arr[0];
//     if(n%2==0){
//         size = n/2;
//     }
//     else{
//         size = (n/2) +1;
//     }
//     for(i=0;i<n;i++){
//         if(largest<arr[i]){
//             largest = arr[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(secondlargest<arr[i]){
//             if(arr[i]!=largest)
//                 secondlargest = arr[i];
//         }
//     }
//     int smallest = largest;
//     int secondsmallest = largest;
//     for(i=0;i<n;i++){
//         if(smallest>arr[i]){
//             smallest = arr[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(secondsmallest>arr[i]){
//             if(arr[i]!=smallest)
//                 secondsmallest = arr[i];
//         }
//     }
//     printf("second largest %d second smallest %d ",secondlargest,secondsmallest);
//     free(arr);
//     return 0;
// }

//5. 
#include <stdio.h>