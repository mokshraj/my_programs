// #include<stdio.h>
// int main(){
//     //variable declaration with intiliazation
//     int age =30;// integer variable 'age' initiated to 30
//     float height=5.9;// float variable 'height' initiated to 5.9
//     char intial='A';// char variable 'intial' initiated to 'A'
//     double salary = 75000.50;// double variable 'salary' initiated to 75000.50
//     printf("age = %d\n",age);// printing variable 'age'
//     printf("height = %f\n",height);// printing variable 'height'
//     printf("salary = %f\n",salary);// printing variable 'salary'
//     printf("intial = %c\n",intial);// printing variable 'intial'
// }

// #include<stdio.h>
// int main(){
//     //variable declaration with intiliazation
//     int a=1;
//     int b=2;
//     int c=3;
//     // printing avrage output
//     printf("average = %f",(a+b+c)/(float)3);
// }

// #include<stdio.h>
// int main(){
//     //variable declaration with intiliazation
//     float radius = 69.69;// variable for radius
//     float pie = 22/7;// variable storing value of pie
//     printf("Area of crircle = %f",pie*radius*radius);//print Area of circle
// }

// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter a no.: ");
//     scanf("%c",&a);
//     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U'){
//         printf("it is a vowel");
//     }
//     else{
//             printf("it is consonant");
//         }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("program to check largest of three no.s\n");
//     long int a,b,c;
//     printf("enter no. a ");
//     scanf("%d",&a);
//     printf("enter no. b ");
//     scanf("%d",&b);
//     printf("enter no. c ");
//     scanf("%d",&c);
//     if(a>b){
//         if(a>c){
//             printf("a is the greatest no.");
//         }
//         else{
//             printf("c is the greatest no.");
//         }
//     }
//     else{
//         if(b>c){
//             printf("b is the greatest no.");
//         }
//         else{
//             printf("c is the greatest no.");
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,b;
//     printf("enter a year to check leap year: ");
//     scanf("%d",&a);
//     if(a%4 == 0){
//         b =1;
//         if(a%100 == 0){
//             if(a%400==0){
//                 b=1;
//             }
//             else{
//                 b=0;
//             }
//         }
//     }
//     else{
//         b=0;
//     }
//     if(b==1) printf("it is a leap year");
//     else printf("it is not a leap year");
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a = 3;
//     printf("%d",++a);
// }

// #include <stdio.h>
// int main(){
//     int arr[5]={12,44,3,30,11},i,j,temp,min;

//     for(i=0;i<5;i++){
//         min =i;//store every index in a variable
//         for(j=i+1;j<5;j++){
//             if(arr[j]<arr[min])
//                 min=j;
//         }

//         if(min!=i){
//             temp=arr[i];
//             arr[i]=arr[min];
//             arr[min]=temp;
//         }
//     }
//     for(i=0;i<5;i++)
//         printf("%d  ",arr[i]);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[5];
//     char str1[]={"Test"};
//     char str2[]={"Rest"};
//     char str3[5];
//     int len;
//     printf("strcat: %s\n",strcat(str1,str2));
//     return 0;
//     }

// #include<stdio.h>
// int main(){
//     int a =5;
//     int *p;
//     p =&a;
//     printf("Value at P is : %d",*p);
//     printf("\nValue od address : %d",p);
//     int *q,b=10;
//     q=&b;
//     printf("\n\nBefore : value at pointer q : %d",*q);
//     *q=*p;
//     printf("\n\nAfter : value at pointer q : %d",*q);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int a=5,*p;
//     p=&a;
//     printf("\nValue of address %d",p);
//     printf("\nValue of address %d",p+3);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     char name[6]="Chris";
//     char *p;
//     p=name;
//     while(*p!='\0'){
//         printf("%c",*p);
//         p++;
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int arr[5]={1,2,3,4,5},i=0;
//     int *p=&arr[0];
//     while(i<5){
//         printf("%d ",*p);
//         p++;
//         i++;
//     }
//     return 0;
// }

// //Malloc array
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int a,i,*ptr;
//     printf("Enter total no. of values:");
//     scanf("%d",&a);
//     ptr = (int*)malloc(a*sizeof(int));
//     printf("Before : %d\n",ptr);
//     for(i=0;i<a;i++){
//         scanf("%d",ptr+i);
//     }
//     for(i=0;i<a;i++){
//         printf("%d ",*(ptr+i));
//     }
//     free(ptr);
//     return 0;
// }

// //Calloc array
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//     int n,*ptr,i,sum=0;
//     printf("Enter the number of elements: ");
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     printf("Enter %d numbers \n",n);
//     for(i=0;i<n;i++){
//         scanf("%d",ptr+i);
//         sum = sum + *(ptr+i);
//     }
//     printf("\nElements are : ");
//     for(i=0;i<n;i++){
//         printf("%d ",*(ptr+i));
//     }
//     printf("\nThe addition of the elements is : %d",sum);
//     free(ptr);
//     return 0;
// }

// //File open program;
// #include <stdio.h>
// int main(){
//     char ch;
//     FILE *fptr;
//     fptr = fopen("C:\\file.txt","r");
//     while((ch=fgetc(fptr)) !=EOF)
//         printf("%c",ch);
//     fclose(fptr);
//     return 0;
// }