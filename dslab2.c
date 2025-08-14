// //1.write a program to count the freq of each element
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int arr[n];
//     int ckarr[n];
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("\n\n");
//     int count,cklen=1,ck;
//     for(int i =0 ; i<n;i++){
//         count = 0;
//         ck = 1;
//         for(int j = 0;j<cklen;j++){
//             if(arr[i]==ckarr[j]){
//                 ck = 0;
//                 break;
//             }
//         }
//         if(ck){
//             ckarr[cklen-1] = arr[i];
//         }
//         else{
//             continue;
//         }
//         for(int j = i ; j < n; j++){
//             if(arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         printf("count of %d is : %d\n",arr[i],count);
//     }
//     return 0;
// }

// //2. WAP to remove duplicate elements from the array;
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int arr[n];
//     int ckarr[n];
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     int ck;
//     for(int i =0 ; i<n;i++){
//         for(int j = i+1;j<n;j++){
//             if(arr[i]==arr[j]){
                
//                 for(int k = j; k<n;k++){
//                     arr[k] = arr[k+1];
//                 }
//                 n--;
//                 j--;
//             }
//         }
//     }
//     for(int i =0 ; i<n;i++){
//         printf("Element %d of array : ",i+1);
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// //3. merge two arrays sorted;
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int arr1[n];
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",&arr1[i]);
//     }
//     int m;
//     printf("Enter a no: ");
//     scanf("%d",&m);
//     int arr2[m];
//     for(int i =0 ; i<m;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",&arr2[i]);
//     }
//     int arr3[n+m];
//     for (int i = 0 ; i < n ;i++){
//         arr3[i] = arr1[i];
//     }
//     for (int i = 0 ; i < n+m ;i++){
//         arr3[i+n] = arr2[i];
//     }
//     for(int i = 0;i < n+m-1 ; i++){
//         if(arr3[i] > arr3[i+1]){
//             arr3[i] = arr3[i] + arr3[i+1];
//             arr3[i+1] = arr3[i] - arr3[i+1];
//             arr3[i] = arr3[i] - arr3[i+1];
//             i = 0;
//         }
//     }
//     for(int i =0 ; i<n+m;i++){
//         printf("Element %d of array : ",i+1);
//         printf("%d\n",arr3[i]);
//     }
//     return 0;
// }

// //4, write a program to remove duplicate characters from string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[] = "aaaaaaaddddddddddddeeeeeeeeee";
//     int len = 0;
//     while(a[len] != '\0'){
//         len++;
//     }
//     for(int i = 0;i<len;i++){
//         for(int j = i+1; j < len ; j++){
//             if(a[i] == a[j]){
//                 for(int k = j; k < len ; k++){
//                     a[k] = a[k+1];
//                 }
//                 len--;
//                 j--;
//             }
//         }
//     }
//     printf("%s",a);
//     return 0;
// }

// //5. write a program to count vowels in a string using pointers.
// #include<stdio.h>
// #include<string.h>
// int count(char *a){
//     char v[] = {'a','A','e','E','i','I','o','O','u','U'};
//     int len = 0;
//     int vowels = 0;
//     while(a[len] != '\0'){
//         for(int i = 0;i<11;i++){
//             if(a[len] == v[i]){
//                 vowels++;
//                 break;
//             }
//         }
//         len++;
//     }
//     return vowels;
// }
// int main(){
//     char a[] =  "aeiouAEIOU";
//     printf("%d",count(a));
//     return 0;
// }

// //6. write a program to print sub-string of lenght 5 starting from position 3 string of original.
// #include<stdio.h>
// int main(){
//     char a[] = "programming";
//     int len = 0;
//     while (a[len]!='\0')
//     {
//         len++;
//     }
//     if (len>3)
//     {
//         for(int i = 3;i<len+1;i++){
//             if(i<8){
//                 printf("%c",a[i]);
//             }
//         }
//     }
//     return 0;
// }

// //7. write a program to find length of a string using pointers.
// #include<stdio.h>
// int main(){
//     char *a = "string";
//     int len =0;
//     while (*a != '\0')
//     {
//         len++;
//         a++;
//     }
//     printf("%d",len);
//     return 0;
// }

// //8. print array elements using pointer
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(sizeof(int)*n);
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",(arr+i));
//     }
//     int *arrp;
//     arrp = arr;
//     for(int i = 0;i<sizeof(arr)/sizeof(int);i++){
//         printf("%d ",arrp[i]);
//     }
//     return 0;
// }

// //9. sum of array elements using pointers
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(sizeof(int)*n);
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",(arr+i));
//     }
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//         sum = sum + arr[i];
//     }
//     printf("sum od array is : %d ",sum);
//     return 0;
// }

// //10. copy one array to another using pointer
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int *arr1 = (int *)malloc(sizeof(int)*n);
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d element of array : ",i+1);
//         scanf("%d",(arr1+i));
//     }
//     int *arr2 = (int *)malloc(sizeof(int)*n);
//     for(int i = 0;i<n;i++){
//         arr2[i] = arr1[i];
//     }
//     for(int i = 0;i<n;i++){
//         printf("%d ",arr2[i]);
//     }
//     free(arr1);
//     free(arr2);
//     return 0;
// }

// //11. reverse an array
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int *arr1 = (int *)malloc(sizeof(int)*n);
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",(arr1+i));
//     }
//     int temp;
//     for(int i = 0;i<n/2;i++){
//         temp = arr1[i];
//         arr1[i] = arr1[n-i-1];
//         arr1[n-i-1] = temp;
//     }
//     for(int i = 0;i<n;i++){
//         printf("%d ",arr1[i]);
//     }
//     free(arr1);
//     return 0;
// }

// //12. swap two no.s using pointers
// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("%d %d",a,b);
//     return 0;
// }

// //13. swap two no.s using double pointers
// #include<stdio.h>
// void swap(int **a,int **b){
//     int temp = **a;
//     **a = **b;
//     **b = temp;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     int *ap = &a,*bp = &b;
//     swap(&ap,&bp);
//     printf("%d %d",a,b);
//     return 0;
// }

// //14. sum of array elements using pointers
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n;
//     printf("Enter a no: ");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(sizeof(int)*n);
//     for(int i =0 ; i<n;i++){
//         printf("Enter %d of array : ",i+1);
//         scanf("%d",(arr+i));
//     }
//     int sum = 0;
//     for(int i = 0;i<n;i++){
//         sum = sum + arr[i];
//     }
//     printf("sum of array is : %d ",sum);
//     return 0;
// }

//15. write a c program to add a dynamic 2d array using double pointer
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int  r,c;
	scanf("%d %d",&r,&c);
	int ** arr = (int **)malloc(sizeof(int*)*(r));
	for(int i = 0; i<r; i++) {
		arr[i] = (int *)malloc(sizeof(int)*(c));
	}
	for(int i = 0; i<r; i++) {
		printf("%d row\n",i+1);
		for(int j = 0; j<c; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i = 0; i<r; i++) {
		for(int j = 0; j<c; j++) {
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(int i = 0; i<r; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}