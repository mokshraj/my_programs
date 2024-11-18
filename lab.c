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

#include <stdio.h>
#include <string.h>
int main(){
    char name[5];
    char str1[]={"Test"};
    char str2[]={"Rest"};
    char str3[5];
    int len;
    printf("strcat: %s\n",strcat(str1,str2));
    
    
    }