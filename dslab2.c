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

// //15. write a c program to add a dynamic 2d array using double pointer
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
// 	int  r,c;
// 	scanf("%d %d",&r,&c);
// 	int ** arr = (int **)malloc(sizeof(int*)*(r));
// 	for(int i = 0; i<r; i++) {
// 		arr[i] = (int *)malloc(sizeof(int)*(c));
// 	}
// 	for(int i = 0; i<r; i++) {
// 		printf("%d row\n",i+1);
// 		for(int j = 0; j<c; j++) {
// 			scanf("%d",&arr[i][j]);
// 		}
// 	}
// 	for(int i = 0; i<r; i++) {
// 		for(int j = 0; j<c; j++) {
// 			printf("%d ",arr[i][j]);
// 		}
// 		printf("\n");
// 	}
// 	for(int i = 0; i<r; i++) {
// 		free(arr[i]);
// 	}
// 	free(arr);
// 	return 0;
// }

// //16. write a menu driver program for stack push pop display peek
// #include<stdio.h>
// #include <stdlib.h>
// #define MAX 10
// void PUSH(int *stack, int *top){
// 	if(*top != MAX-1){
// 		int n;
// 		scanf("%d",&n);
// 		stack[++(*top)] = n;
// 	}
// 	else{
// 		perror("\nMAX top size reached\n");
// 	}
// }
// void POP(int *stack,int *top){
// 	if(*top != -1){
// 		(*top)--;
// 	}
// 	else{
// 		perror("\nStack is empty\n");
// 	}
// }
// void display(int stack[] ,int top){
// 	printf("\n");
// 	while(top!=-1){
// 		printf("%d\n",stack[top]);
// 		top--;
// 	}
// 	printf("\n\n");
// }
// void peek(int stack[],int top){
// 	printf("\n%d\n\n",stack[top]);
// }
// int main(){
// 	int top = -1;
// 	char ch;
// 	int stack[MAX];
// 	int choice;
// 	while (1){
// 		printf("1.PUSH\n2.POP\n3.display\n4.peek\n5.exit\n");
// 		printf("Enter a choice : ");
// 		scanf("%d",&choice);
// 		switch (choice)
// 		{
// 		case 1:
// 			PUSH(stack,&top);
// 			break;
// 		case 2:
// 			POP(stack,&top);
// 			break;
// 		case 3:
// 			display(stack,top);
// 			break;
// 		case 4:
// 			peek(stack,top);
// 			break;
// 		case 5:
// 			exit(0);
// 			break;
// 		default:
// 			printf("Invalid input");
// 			break;
// 		}
// 		while (getchar() != '\n') {}
// 		printf("\npress enter to continue.................. ");
// 		while (getchar() != '\n') {}
// 		system("clear");
// 	}
// 	return 0;
// }

// //17.write a menu driven program to implement a simple queue with basic functions
// #include <stdio.h>
// #include <stdlib.h>
// #define MAX 10
// typedef struct {
//     int queue[MAX];
//     int front;
//     int rear;
// } queue;
// int isFULL(queue *Q) {
//     return Q->rear == MAX - 1;
// }
// int isEMPTY(queue *Q) {
//     return Q->front == Q->rear;
// }
// void enqueue(queue *Q, int n) {
//     if (isFULL(Q)) {
//         printf("Queue is full!\n");
//         return;
//     }
//     Q->rear++;
//     Q->queue[Q->rear] = n;
//     printf("%d enqueued to queue\n", n);
// }
// void dequeue(queue *Q) {
//     if (isEMPTY(Q)) {
//         printf("Queue is empty!\n");
//         return;
//     }
//     Q->front++;
//     printf("Dequeued %d from queue\n", Q->queue[Q->front]);
// }
// void peek(queue *Q) {
//     if (isEMPTY(Q)) {
//         printf("Queue is empty!\n");
//         return;
//     }
//     printf("%d is at the front (peek)\n", Q->queue[Q->front + 1]);
// }
// void display(queue *Q) {
//     if (isEMPTY(Q)) {
//         printf("Queue is empty!\n");
//         return;
//     }
//     printf("Queue elements: ");
//     for (int i = Q->front + 1; i <= Q->rear; i++) {
//         printf("%d ", Q->queue[i]);
//     }
//     printf("\n");
// }
// int main() {
//     queue Q;
//     Q.front = -1;
//     Q.rear = -1;
//     int choice, n;
//     while (1) {
//         printf("\n1. Display\n2. Peek\n3. Enqueue\n4. Dequeue\n5. Exit\nEnter your choice: ");
//         scanf("%d", &choice);
//         switch (choice) {
//             case 1:
//                 display(&Q);
//                 break;
//             case 2:
//                 peek(&Q);
//                 break;
//             case 3:
//                 printf("Enter value to enqueue: ");
//                 scanf("%d", &n);
//                 enqueue(&Q, n);
//                 break;
//             case 4:
//                 dequeue(&Q);
//                 break;
//             case 5:
//                 exit(0);
//             default:
//                 printf("Invalid input\n");
//         }
//         while (getchar() != '\n') {}
//         printf("Press enter to continue...");
//         while (getchar() != '\n') {}
//         system("clear");
//     }
//     return 0;
// }


// //18.write a menu driven program to implement a circular queue  basic with basic functions
// #include <stdio.h>
// #define MAX 5
// typedef struct{
//     int queue[MAX];
//     int front;
//     int rear;
//     int current;
// }queue;

// void enqueue(queue *Q, int n) {
//     if (Q->current < MAX) {
//         Q->rear = (Q->rear + 1) % MAX;
//         Q->queue[Q->rear] = n;
//         Q->current++;
//     }
//     else {
//         perror("queue is full");
//     }
// }

// int dequeue(queue *Q) {
//     if (Q->current == 0) {
//         perror("queue is empty");
//         return -1;
//     }
//     else {
//         int temp = Q->queue[Q->front];
//         Q->front = (Q->front + 1) % MAX;
//         Q->current--;
//         return temp;
//     }
// }

// void display(queue Q) {
//     int index = (Q.front + 1) % MAX;
//     for (int i = 0; i < Q.current; i++) {
//         printf("%d\t", Q.queue[index]);
//         index = (index + 1) % MAX;
//     }
//     printf("\n");
// }

// void peek(queue Q) {
//     if (Q.current == 0) {
//         printf("Queue is empty\n");
//         return;
//     }
//     int index = (Q.front + 1) % MAX;
//     printf("%d\n", Q.queue[index]);
// }

// void queinit(queue *Q) {
//     Q->front = -1;
//     Q->rear = -1;
//     Q->current = 0;
// }

// int main()
// {
//     queue Q;
//     queinit(&Q);
//     enqueue(&Q,7);
//     printf("\n");
//     display(Q);
//     return 0;
// }

//19.write infix postfix
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int prec(char c) {
    
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(char* exp) {
    int len = strlen(exp);
    char result[len + 1];
    char stack[len];
    int j = 0;
    int top = -1;

    for (int i = 0; i < len; i++) {
        char c = exp[i];

     
        if (isalnum(c)){
            result[j++] = c;
        }
        else if (c == '(')
            stack[++top] = '(';

        
        else if (c == ')') {
            while (top != -1 && stack[top] != '(') {
                result[j++] = stack[top--];
            }
            top--; 
        }

        
        else {
            while (top != -1 && (prec(c) < prec(stack[top]) ||
                                 prec(c) == prec(stack[top]))) {
                result[j++] = stack[top--];
            }
            stack[++top] = c;
        }
    }

  
    while (top != -1) {
        result[j++] = stack[top--];
    }

    result[j] = '\0';
    printf("%s\n", result);
}

int main() {
    char exp[] = "a+b*c";
    infixToPostfix(exp);
    return 0;
}