// //Sum of elements
// #include <stdio.h>
// int main(){
//     int arr[4] = {1,2,3,44};
//     int n  = sizeof(arr)/4;
//     int i;
//     printf("for given array : ");
//     for(i=0;i<n;i++){
//         printf("%d, ",arr[i]);
//     }
//     int sum =0;
//     for(i = 0;i < n ;i++){
//         sum = sum + arr[i];
//     }
//     printf("\nsum of array is %d",sum);
//     return 0;
// }

// //search inarray for element
// #include <stdio.h>
// int main(){
//     int arr[]={1,2,2,33,33,44};
//     int i = 0;
//     printf("for given array : ");
//     for(i=0;i < sizeof(arr)/4;i++){
//         printf("%d, ",arr[i]);
//     }
//     int req;
//     printf("\n Enter a number to search : ");
//     scanf("%d",&req);
//     for (i=0;i < sizeof(arr)/4;i++){
//         if(req == arr[i]){
//             printf("\nrequired element found at index %d",i);
//         }
//     }
//     return 0;
// }

//Insert an element in to the array;
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int size = 2;
//     int *arr = (int *)malloc(size*sizeof(int));
//     arr[0] = 1;arr[1] = 2;
//     int i = 0;
//     printf("for given array : ");
//     for(i=0;i < size;i++){
//         printf("%d, ",arr[i]);
//     }
//     int insert_num;
//     printf("\nInput a num to be inserted : ");
//     scanf("%d",&insert_num);
//     int pos;
//     printf("Enter the position to be inserted at : ");
//     scanf("%d",&pos);
//     pos--;
//     size++;
//     arr = (int *)realloc(arr,size * sizeof(int));
//     for(i = size;i > pos;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[pos] = insert_num;
//     printf("\narray after insertion : ");
//     for(i=0;i < size;i++){
//         printf("%d, ",arr[i]);
//     }
//     return 0;
// }

// //delete an element from array
// #include <stdio.h>
// int main(){
//     int arr[]={1,2,3,4,5};
//     int i;
//     printf("for given array : ");
//     for(i=0;i < sizeof(arr)/4;i++){
//         printf("%d, ",arr[i]);
//     }
//     int pos;
//     printf("\nEnter the postion of element you want to delete : ");
//     scanf("%d",&pos);
//     pos--;
//     for(i = pos; i < sizeof(arr)/4; i++){
//         arr[i] = arr[i+1];
//     }
//     printf("\narray after deletion : ");
//     for(i=0;i < sizeof(arr)/4;i++){
//         printf("%d, ",arr[i]);
//     }
//     return 0;
// }

// //Sum of even elements
// #include <stdio.h>
// int main(){
//     int arr[4] = {1,2,3,44};
//     int n  = sizeof(arr)/4;
//     int i;
//     printf("for given array : ");
//     for(i=0;i<n;i++){
//         printf("%d, ",arr[i]);
//     }
//     int sum =0;
//     for(i = 0;i < n ;i++){
//         if(arr[i]%2 == 0){
//         sum = sum + arr[i];}
//     }
//     printf("\nsum even elements of array is %d",sum);
//     return 0;
// }

// //find duplicate elements in array
// #include <stdio.h>
// int main(){
//     int arr[] = {1,1,2,2,33,5,6};
//     int dp[sizeof(arr)/4];
//     int i,j,dpc,dch,dc=0;
//     for(i=0;i<sizeof(arr)/4;i++){
//         for(j=i+1;j<sizeof(arr)/4;j++){
//             if(arr[i]==arr[j]){
//                 for(dpc=0;dpc<sizeof(dp)/4;dpc++){
//                     if(dp[dpc]==arr[i]){
//                         dch = 0;
//                     }
//                     else{
//                         dch =1;
//                     }
//                 }
//                 if(dch==1){
//                     dp[dc]=arr[i];
//                     dc++;
//                 }
                
//             }
//         }
//     }
//     printf("given array : ");
//     for(i=0;i<sizeof(arr)/4;i++){
//         printf("%d ,",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<dc;i++){
//         printf("The following indexs :  ");
//         for(j=0;j<sizeof(arr)/4;j++){
//             if(dp[i]==arr[j]){
//                 printf("[%d]",j);
//             }
//         }
//         printf(", are duplicates of \"%d\" in the given array.\n");
//     }
//     return 0;
// }

// //Check if array is in Arthematic progression
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the size of array you want to make : ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the values : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     n = arr[1] - arr[0];
//     int apck = 1;
//     printf("For the given array : ");
//     for(i=0;i<sizeof(arr)/4;i++){
//         printf("%d ,",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<(sizeof(arr)/4)-1;i++){
//         if(arr[i+1]-arr[i]!=n){
//             apck=0;
//             break;
//         }
//     }
//     if(apck==1){
//         printf("elements are in AP.\n");
//     }
//     else{
//         printf("elements are not in AP.\n");
//     }
//     return 0;
// }

// //check how many elements are negative and positive
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the size of array you want to make : ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the values : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int arrp[n],arrn[n],arrz[n];
//     int p=0,z=0;
//     n=0;
//     printf("For given array : ");
//     for(i=0;i<sizeof(arr)/4;i++){
//         printf("%d ",arr[i]);
//     }
//     for(i=0;i<sizeof(arr)/4;i++){
//         if(arr[i]>0){
//             arrp[p]=arr[i];
//             p++;
//         }
//         else if(arr[i]<0){
//             arrn[n]=arr[i];
//             n++;
//         }
//         else if(arr[i]==0){
//             arrz[z]=arr[i];
//             z++;
//         }
//     }
//     printf("\n\npositive_array : ");
//     for(i=0;i<p;i++){
//         printf("%d ",arrp[i]);
//     }
//     printf("\n");
//     printf("negative_array : ");
//     for(i=0;i<n;i++){
//         printf("%d ",arrn[i]);
//     }
//     printf("\n");
//     printf("zero_array : ");
//     for(i=0;i<z;i++){
//         printf("%d ",arrz[i]);
//     }
//     return 0;
// }

// //Check if array is in Arthematic progression
// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the size of array you want to make : ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the values : ");
//     for(i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     n = arr[1] / arr[0];
//     int gpck = 1;
//     printf("For the given array : ");
//     for(i=0;i<sizeof(arr)/4;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
//     for(i=0;i<(sizeof(arr)/4)-1;i++){
//         if(arr[i+1]/arr[i]!=n){
//             gpck=0;
//             break;
//         }
//     }
//     if(gpck==1){
//         printf("elements are in GP.\n");
//     }
//     else{
//         printf("elements are not in GP.\n");
//     }
//     return 0;
// }

// //Find and store union of two arrays
// #include<stdio.h>
// int main(){
//     int dpck=0,ind=0,i,j,n,d1[]={1,2,3,4,5},d2[]={1,2,3,6};
//     n = sizeof(d1)/sizeof(d1[0]) + sizeof(d2)/sizeof(d2[0]);
//     int d1Ud2[n];
//     for (i = 0; i < sizeof(d1)/4; i++)
//     {
//         dpck = 1;
//         for (j = 0; j < ind; j++)
//         {
//             if(d1[i]==d1Ud2[j]){
//                 dpck=0;
//                 break;
//             }
//         }
//         if(dpck==1){
//             d1Ud2[ind]=d1[i];
//             ind++;
//         }
//     }
//     for (i = 0; i < sizeof(d2)/4; i++)
//     {
//         for (j = 0; j < ind; j++)
//         {
//             dpck = 1;
//             if(d2[i]==d1Ud2[j]){
//                 dpck=0;
//                 break;
//             }
//         }
//         if(dpck==1){
//             d1Ud2[ind]=d2[i];
//             ind++;
//         }        
//     }
//     printf("for set1  D1 (");
//     for ( i = 0; i < sizeof(d1)/4; i++)
//     {
//         printf("%d,",d1[i]);
//     }
//     printf(") and set D2 (");
//     for ( i = 0; i < sizeof(d2)/4; i++)
//     {
//         printf("%d,",d2[i]);
//     }
//     printf(")\nUnion of D1D2 :");
//     for ( i = 0; i < ind; i++)
//     {
//         printf("%d ",d1Ud2[i]);
//     }
//     return 0;
// }

// //Count and print total palindrome numbers and armstrong numbers in 1d array
// #include<stdio.h>
// int ispalindrome(int n){
//     int dn = n,rev=0;
//     while (n!=0)
//     {
//         rev = (rev*10) + n%10;
//         n = n/10;
//     }
//     if(rev == dn){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int pow(int n,int p){
//     if(p == 0){
//         return 1;
//     }
//     return (n*pow(n,p-1));
// }
// int isarmstrong(int n){
//     int sum = 0,p,dn=n,i;
//     for(i = 0;n!=0;i++){
//         n/=10;
//     }
//     p=i;
//     n=dn;
//     for(i=0;i<p;i++){
//         sum = sum + pow(n%10,p);
//         n/=10;
//     }
//     if(dn == sum){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int i,arr[] = {1,4,4941,44154151,555215,2,66,1661,153};
//     printf(" ");
//     for(i = 0;i<sizeof(arr)/4;i++){
//         if(ispalindrome(arr[i])){
//             printf("\npalindrome no. : %d at arr(%d) ",arr[i],i);
//         }
//     }
//     printf("\n");
//     for(i = 0;i<sizeof(arr)/4;i++){
//         if(isarmstrong(arr[i])){
//             printf("\narmstrong no. :  %d at arr(%d) ",arr[i],i);
//         }
//     }
//     return 0;
// }

// //Dynamic array
// #include<stdio.h> 
// #include<stdlib.h>
// int main(){
//     int *arr;
//     int i,n,m;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);
//     arr = (int *)malloc(n * sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter a element : ");
//         scanf("%d",(arr+i));
//     }
//     printf("\narr : ");
//     for(i=0;i<n;i++){
//         printf("%d ",*(arr + i));
//     }
//     printf("\n");
//     printf("Enter elements to add : ");
//     scanf("%d",&m);
//     arr = (int *)realloc(arr,(n+m)*sizeof(int));
//     for(i=0;i<m;i++){
//         printf("Enter element : ");
//         scanf("%d",(arr+n+i));
//     }
//     printf("\narr : ");
//     for(i=0;i<n+m;i++){
//         printf("%d ",*(arr + i));
//     }
//     return 0;
// }

// //Stack (Push - Pop, Display)
// #include<stdio.h>
// int top=-1,stack[5];
// void push(){
//     int size = sizeof(stack) / sizeof(stack[0]);
//     if(top<size-1){
//         top++;
//         printf("Enter the Element : ");
//         scanf("%d",&stack[top]);
//     }
//     else{
//         printf("Stack overflow\n");
//     }
// }
// void pop(){
//     if(top == -1){
//         printf("Stack underflow\n");
//     }
//     else{
//         printf("pop element = %d\n",stack[top]);
//         top--;
//     }
// }
// //display function // follows push pop rules
// void display(){
//     int i;
//     for(i=top;i>-1;i--){
//         printf("%d\n",stack[i]);
//     }
// }
// int main(){
//     int i;
//     for(i=0;i<sizeof(stack)/sizeof(stack[0]);i++){
//         push();
//     }
//     push();
//     display();
//     pop();
//     display();
//     return 0;
// }

// //Stack switch case:(Push - Pop, Display)
// #include<stdio.h>
// int top=-1,stack[5];
// void push(){
//     int size = sizeof(stack) / sizeof(stack[0]);
//     if(top<size-1){
//         top++;
//         printf("Enter the Element : ");
//         scanf("%d",&stack[top]);
//     }
//     else{
//         printf("Stack overflow\n");
//     }
// }
// void pop(){
//     if(top == -1){
//         printf("Stack underflow\n");
//     }
//     else{
//         printf("pop element = %d\n",stack[top]);
//         top--;
//     }
// }
// //display function // follows push pop rules
// void display(){
//     int i;
//     for(i=top;i>-1;i--){
//         printf("%d\n",stack[i]);
//     }
// }
// int main(){
//     int choice;
//     while(1)
//     {
//     printf("Choose option:\n1.For push function\n2.To pop\n3.To Display\n4.To exit\nChoose: ");
//     scanf("%d",&choice);    
//     switch (choice)
//     {
//     case 1:
//         int i;
//         printf("\n");
//         for(i=0;i<sizeof(stack)/sizeof(stack[0]);i++)
//         {
//             push();
//         }
//         printf("\n");
//         break;
//     case 2:
//         printf("\n");
//         pop();
//         printf("\n");
//         break;
//     case 3:
//         printf("\n");
//         display();
//         printf("\n");
//         break;
//     case 4:
//         goto exit;
//     default:
//         printf("\n");
//         printf("Invalid input\n");
//         printf("\n");
//         break;
//     }}
//     exit:
//     return 0;
// }

// //dynamic Stack (Push - Pop, Display)
// #include<stdio.h>
// #include<stdlib.h>
// struct stack
// {
//     int *stack,size,top;
// };
// struct stack a;
// void stack_alloc(struct stack *arr,int size){
//     arr->size = size;
//     arr->stack = (int *)malloc(size*sizeof(int));
//     arr->top = -1;
// }
// void stack_realloc(struct stack *arr,int size){
//     arr->stack = (int *)realloc(arr->stack,(arr->size+size)*sizeof(int));
//     arr->size = arr->size + size;
// }
// void push(struct stack *arr){
//     if(arr->top < (arr->size)-1){
//         arr->top++;
//         printf("Enter the Element : ");
//         scanf("%d",&arr->stack[arr->top]);
//     }
//     else{
//         printf("Stack overflow\n");
//     }
// }
// void pop(struct stack *arr){
//     if(arr->top == -1){
//         printf("Stack underflow\n");
//     }
//     else{
//         printf("pop element = %d\n",arr->stack[arr->top]);
//         arr->top--;
//     }
// }
// void display(struct stack *arr){
//     int i;
//     for(i=arr->top;i>=0;i--){
//         printf("%d\n",*(arr->stack+i));
//     }
// }
// int main(){
//     int i;
//     stack_alloc(&a,5);
//     while(a.top!=a.size-1){
//         push(&a);
//     }
//     push(&a);
//     display(&a);
//     stack_realloc(&a,1);
//     while(a.top!=a.size-1){
//         push(&a);
//     }
//     push(&a);
//     display(&a);
//     return 0;
// }

// //max in array static
// #include<stdio.h>
// int main(){
//     int i,n,max;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     max = arr[0];
//     for(i=0;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     printf("The max is :%d",max);
//     return 0;
// }

// //min in array static
// #include<stdio.h>
// int main(){
//     int i,n,min;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     min = arr[0];
//     for(i=0;i<n;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }
//     printf("The min is :%d",min);
//     return 0;
// }

// //swap min max of array
// #include<stdio.h>
// int main(){
//     int i,n,min,max,indmin,indmax;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int arr[n];
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",&arr[i]);
//     }
//     min = arr[0];
//     indmin = 0;
//     indmax = 0;
//     max = arr[0];
//     for(i=0;i<n;i++){
//         if(min>arr[i]){
//             min = arr[i];
//             indmin = i;
//         }
//         else if(max<arr[i]){
//             max=arr[i];
//             indmax = i;
//         }
//     }
//     printf("Array before swap : ");
//     for(i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nArray after swap : ");
//     arr[indmax]=min;
//     arr[indmin]=max;
//     for(i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// //max in array dynamic
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n,max;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",(arr+i));
//     }
//     max = arr[0];
//     for(i=0;i<n;i++){
//         if(max<*(arr+i)){
//             max = *(arr+i);
//         }
//     }
//     printf("The max is :%d",max);
//     return 0;
// }

// //min in array dynamic
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n,min;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",(arr+i));
//     }
//     min = *arr;
//     for(i=0;i<n;i++){
//         if(min>*(arr+i)){
//             min = *(arr+i);
//         }
//     }
//     printf("The min is :%d",min);
//     return 0;
// }

// //swap min max of array dynamic
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n,min,max,indmin=0,indmax=0;
//     printf("Enter the size of array :");
//     scanf("%d",&n);
//     int *arr = (int *)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter element %d :",i+1);
//         scanf("%d",(arr+i));
//     }
//     min = *arr;
//     max = *arr;
//     for(i=0;i<n;i++){
//         if(min>*(arr+i)){
//             min = *(arr+i);
//             indmin=i;
//         }
//         else if(max<*(arr+i)){
//             max=*(arr+i);
//             indmax=i;
//         }
//     }
//     printf("Array before swap : ");
//     for(i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\nArray after swap : ");
//     arr[indmax]=min;
//     arr[indmin]=max;
//     for(i = 0;i<n;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

// //check wheather a string is palindrome using string.h
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string : ");
//     fgets(str,100,stdin);
//     int i,pal=1;
//     for(i=0;i<strlen(str)-1;i++){
//         if(str[i]!=str[strlen(str)-i-2]){
//             pal = 0;
//             break;
//         }
//     }
//     if(pal){
//         printf("Entered string is a palindrome");
//     }
//     else{
//         printf("Entered string is not a palindrome");
//     }
//     return 0;
// }

// //check wheather a string is palindrome not using string.h
// #include<stdio.h>
// int main(){
//     char str[100];
//     printf("Enter a string : ");
//     fgets(str,100,stdin);
//     int i=0,pal=1,len=0;
//     while(str[len]!='\0'){
//         len++;
//     }
//     for(i=0;i<len-1;i++){
//         if(str[i]!=str[len-i-2]){
//             pal = 0;
//             break;
//         }
//     }
//     if(pal){
//         printf("Entered string is a palindrome");
//     }
//     else{
//         printf("Entered string is not a palindrome");
//     }
//     return 0;
// }

// //sort string
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     printf("Enter a string : ");
//     fgets(str,100,stdin);
//     int i,j=0,len = strlen(str);
//     while(j!=len-2){
//     for(i = 0;i<len-2;i++){
//         if(str[i]>str[i+1]){
//             str[i] = str[i] + str[i+1];
//             str[i+1] = str[i] - str[i+1];
//             str[i] = str[i] - str[i+1];
//         }
//     }
//     j++;
//     }
//     printf("%s",str);
//     return 0;
// }

// //write a c program to reverse a string
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     printf("Enter a string to reverse : ");
//     fgets(str,100,stdin);
//     char revstr[100];
//     int i;
//     for(i=strlen(str)-1;i>-1;i--){
//         revstr[(strlen(str)-1)-i] = str[i];
//     }
//     printf("%s",revstr);
//     return 0;
// }

//write a c program input a string and find a substring "deemed" in it
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char temp[7];
    temp[6] = '\0';
    char temp2[2];
    temp2[1]='\0';
    if(strlen(str)<6){
        printf("\nInvalid input");
        return 0;
    }
    int i,j,found=0;
    for(i =0;i<strlen(str)-7;i++){
        for(j=0;j<7;j++){
            temp2[0]= str[i+j];
            strcat(temp,temp2);
        }
        if(strcmp(temp,"deemed")==0){
            found = 1;
            break;
        }
    }
    if(!found){
        printf("found deemed at index :%d",i);
    }
    return 0;
}