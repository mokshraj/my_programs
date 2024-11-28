// //palendrome check program
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