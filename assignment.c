// #include<stdio.h>
// int main(){
//     printf("Enter a no.: ");
//     int n;
//     scanf("%d",&n);
//     if(n>0)
//         printf("%d is positive",n);
//     else if(n<0)
//         printf("%d is negative",n);
//     else
//         printf("%d is zero",n);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("enter a no. : ");
//     int n,s,b,cn;
//     scanf("%d",&n);
//     cn = n;
//     while(n!=0){
//         b=n%10;
//         n/=10;
//         s= s+b;
//     }
//     printf("%d is the sum of digits of %d",s,cn);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("Enter a no. : ");
//     int n,s=0,cn;
//     scanf("%d",&n);
//     cn=n;
//     for(n;n!=0;n--){
//         if(n%2==0)
//           s=s+n;
//     }
//     printf("%d is the sum of numbers between 1 and %d",s,cn);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     printf("Enter a no. : ");
//     int n,rn=0,cn;
//     scanf("%d",&n);
//     cn =n;
//     while(n!=0){
//         rn = (rn*10) + n%10;
//         n/=10;
//     }
//     printf("The reverse of %d is %d",cn,rn);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int biology,physics,chemistry,mathematics,computer;
//     printf("Enter biology marks : ");
//     scanf("%d",&biology);
//     printf("Enter physics marks : ");
//     scanf("%d",&physics);
//     printf("Enter chemistry marks : ");
//     scanf("%d",&chemistry);
//     printf("Enter mathematics marks : ");
//     scanf("%d",&mathematics);
//     printf("Enter computer marks : ");
//     scanf("%d",&computer);
//     float percentage = (biology+physics+chemistry+mathematics+computer)/(float)5;
//     char grade;
//     if(percentage>=90)
//         grade = 'A';
//     else if(percentage >= 80 && percentage<90)
//         grade = 'B';
//     else if(percentage >= 70 && percentage<80)
//         grade = 'C';
//     else if(percentage >= 60 && percentage<70)
//         grade = 'D';
//     else if(percentage >= 40 && percentage<60)
//         grade = 'E';
//     else
//         grade ='F';
//     printf("Your Percentage is %f, And Grade is %c",percentage,grade);
//     return 0;  
// }

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("Enter a no. : ");
//     scanf("%d",&a);
//     printf("Enter a no. : ");
//     scanf("%d",&b);
//     printf("original values a = %d b = %d",a,b);
//     c = a;
//     a = b;
//     b = c;
//     printf("\nswaped values a =  %d b = %d",a,b);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     printf("Enter a no. : ");
//     int n;
//     scanf("%d",&n);
//     if(n%5==0 && n%11==0)
//         printf("%d is divisible by 5 and 11",n);
//     else
//         printf("%d is not diveible by 5 and 11",n);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int n,s=0,p=0,i,b,cn;
//     printf("Enter a no. :");
//     scanf("%d",&n);
//     cn = n;
//     while(n>0){
//         p++;
//         n/=10;
//     }
//     n = cn;
//     while(n>0){
//         b = n%10;
//         for(i=1;i<p;i++){
//             b = b*(n%10);
//         }
//         s=s+b;
//         n/=10;
//     }
//     if(s==cn)
//         printf("%d is a armstrong no.",cn);
//     else
//         printf("%d is not a armstrong no.",cn);
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, n, isPrime = 1;
//     printf("Enter any number to check prime: ");
//     scanf("%d", &n);
//     for (i = 2; i <= n / 2; i++) {
//         if (n % i == 0) {
//             isPrime = 0;
//             break;
//         }
//     }
//     if (isPrime == 1 && n > 1) {
//         printf("%d is a prime number", n);
//     } else {
//         printf("%d is a composite number", n);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main() {
//     int i, n;
//     unsigned long long fact = 1;
//     printf("Enter any number to find factorial: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     printf("Factorial of %d is %llu", n, fact);
//     return 0;
// }