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
// int vowel_count(char str[]){
//     char temp1[2],temp2[2];temp2[1]='\0';temp1[1]='\0';
//     int j,v=0,i,vowels[]={'a','e','i','o','u'};
//     for(i=0;i<strlen(str);i++){
//         for(j=0;j<5;j++){
//             temp1[0]=str[i];temp2[0]=vowels[j];
//             if(strcmp(temp1,temp2)==0)
//                 v++;
//         }
//     }
//     return v;
// }
// int main(){
//     char str[10];
//     printf("Enter a string of lenght 9 : ");
//     scanf("%s",&str);
//     int vowel_count(char[]);
//     printf("%d",vowel_count(str));
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

// // Function to perform matrix multiplication
// #include <stdio.h>
// void multiplyMatrices(int mat1[][10], int mat2[][10], int res[][10], int row1, int col1, int row2, int col2) {
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             res[i][j] = 0;
//         }
//     }
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             for (int k = 0; k < col1; k++) {
//                 res[i][j] += mat1[i][k] * mat2[k][j];
//             }
//         }
//     }
// }
// int main() {
//     int mat1[10][10], mat2[10][10], res[10][10];
//     int row1, col1, row2, col2;
//     printf("Enter the number of rows and columns for the first matrix: ");
//     scanf("%d %d", &row1, &col1);
//     printf("Enter the number of rows and columns for the second matrix: ");
//     scanf("%d %d", &row2, &col2);
//     if (col1 != row2) {
//         printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
//         return 1;
//     }
//     printf("Enter elements of the first matrix:\n");
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col1; j++) {
//             scanf("%d", &mat1[i][j]);
//         }
//     }
//     printf("Enter elements of the second matrix:\n");
//     for (int i = 0; i < row2; i++) {
//         for (int j = 0; j < col2; j++) {
//             scanf("%d", &mat2[i][j]);
//         }
//     }
//     multiplyMatrices(mat1, mat2, res, row1, col1, row2, col2);
//     printf("Resultant matrix after multiplication:\n");
//     for (int i = 0; i < row1; i++) {
//         for (int j = 0; j < col2; j++) {
//             printf("%d ", res[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// // Dynamically allocate memory for an array
// #include <stdio.h>
// #include <stdlib.h>
// int* allocateArray(int size)
// {
// int* arr = (int*) malloc(size * sizeof(int));
// if (arr == NULL)
// {
// printf("Memory allocation failed!\n");
// exit(1);
// }
// return arr;
// }
// void inputArray(int* arr, int size)
// {
// printf("Enter %d elements:\n", size);
// for (int i = 0; i < size; i++)
// {
// scanf("%d", &arr[i]);
// }
// }
// void printArray(int* arr, int size)
// {
// printf("Array elements:\n");
// for (int i = 0; i < size; i++)
// {
// printf("%d ", arr[i]);
// }
// printf("\n");
// }
// void performOperations(int* arr, int size)
// {
// int sum = 0, max = arr[0], min = arr[0];
// for (int i = 0; i < size; i++)
// {
// sum += arr[i];
// if (arr[i] > max)
// {
// max = arr[i];
// }
// if (arr[i] < min)
// {
// min = arr[i];
// }
// }
// printf("Sum of elements: %d\n", sum);
// printf("Maximum element: %d\n", max);
// printf("Minimum element: %d\n", min);
// }
// void freeMemory(int* arr)
// {
// free(arr);
// }
// int main()
// {
// int size;
// printf("Enter the size of the array: ");
// scanf("%d", &size);
// int* arr = allocateArray(size);
// inputArray(arr, size);
// printArray(arr, size);
// performOperations(arr, size);
// freeMemory(arr);
// return 0;
// }

// //Program to create and write data to a file
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
// FILE *file;
// char filename[100], data[1000];
// printf("Enter the filename to create: ");
// scanf("%s", filename);
// file = fopen(filename, "w");
// if (file == NULL) {
// printf("Error! Could not open file.\n");
// exit(1);
// }
// printf("Enter data to write to the file (end with an empty line):\n");
// getchar();
// while (1) {
// fgets(data, sizeof(data), stdin);
// if (data[0] == '\n') {
// break;
// }
// fprintf(file, "%s", data);
// }
// fclose(file);
// printf("Data written to %s successfully.\n", filename);
// return 0;
// }

// //Program to Read data from a file and display it on the screen
// #include <stdio.h>
// #include <stdlib.h>
// int main() {
// FILE *file;
// char filename[100], ch;
// printf("Enter the filename to read: ");
// scanf("%s", filename);
// file = fopen(filename, "r");
// if (file == NULL) {
// printf("Error! Could not open file.\n");
// exit(1);
// }
// printf("\nContents of %s:\n", filename);
// while ((ch = fgetc(file)) != EOF) {
// putchar(ch);
// }
// fclose(file);
// return 0;
// }

//Program to Copy the contents of one file to another file
#include <stdio.h>
#include <stdlib.h>
int main() {
FILE *sourceFile, *destFile;
char sourceFilename[100], destFilename[100];
char ch;
printf("Enter the source filename: ");
scanf("%s", sourceFilename);
printf("Enter the destination filename: ");
scanf("%s", destFilename);
sourceFile = fopen(sourceFilename, "r");
if (sourceFile == NULL) {
printf("Error! Could not open source file.\n");
exit(1);
}
destFile = fopen(destFilename, "w");
if (destFile == NULL) {
printf("Error! Could not open destination file.\n");
fclose(sourceFile);
exit(1);
}
while ((ch = fgetc(sourceFile)) != EOF) {
fputc(ch, destFile);
}
printf("Contents of %s have been copied to %s successfully.\n", sourceFilename,
destFilename);
fclose(sourceFile);
fclose(destFile);
return 0;
}