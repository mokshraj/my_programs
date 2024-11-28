// #include <stdio.h>
// #include <string.h>
// int main(){
//     char name[20];
//     printf("Enter a string : ");
//     scanf("%s",&name);
//     int i,a= strlen(name);
//     for(i=0;i<a;i++){
//         printf("%d\n",name[i]);
//     }
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[6],str2[6]="shita";
//     printf("before strcpy str1: %s str2: %s \n",str,str2);
//     strcpy(str,str2);
//     printf("after strcpy str1: %s str2: %s \n",str,str2);
//     printf("No. of characters in the string : %d",strlen(str2));
//     return 0;
// }

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

#include <stdio.h>
#include <string.h>
int main(){
    char str[10],temp1[2],temp2[2];temp2[1]='\0';temp1[1]='\0';
    int j,v=0,i,vowels[]={'a','e','i','o','u'};
    int consonents[]={};
    scanf("%s",&str);
    for(i=0;i<strlen(str);i++){
        for(j=0;j<5;j++){
            temp1[0]=str[i];temp2[0]=vowels[j];
            if(strcmp(temp1,temp2)==0)
                v++;
        }
    }
    printf("%d",v);
    return 0;
}

// float sum(float x,float y){
//     float a;
//     a = x + y;
//     return a;
// }
// #include <stdio.h>
// int main(){
//     float sum(float,float);
//     printf("%.2f",sum(1.0,1.0));
//     return 0;
// }