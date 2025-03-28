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

// #include <stdio.h>
// int main(){
//     int arr[4];
//     int i;
//     for(i=0;i<4;i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// int TR(int);
// int main(){
//     TR(5);
//     return 0;
// }
// int TR(int n){
//     if(n>0){
//         TR(n-1);
//         printf("%d ",n);`
//         TR(n-2);
//     }
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    unsigned char data_type;
    void *value;
}var;
const char* types[] = {
    // Basic types (0-23)
    "char", "signed char", "unsigned char", 
    "short", "signed short", "unsigned short", 
    "short int", "signed short int", "unsigned short int",
    "int", "signed int", "unsigned int",
    "long", "signed long", "unsigned long",
    "long int", "signed long int", "unsigned long int",
    "long long", "signed long long", "unsigned long long",
    "long long int", "signed long long int", "unsigned long long int",
    
    // Microsoft specific types (24-38)
    "__int8", "signed __int8", "unsigned __int8",
    "__int16", "signed __int16", "unsigned __int16",
    "__int24", "signed __int24", "unsigned __int24",
    "__int32", "signed __int32", "unsigned __int32",
    "__int64", "signed __int64", "unsigned __int64",
    
    // 128-bit integers (39-41)
    "__int128", "signed __int128", "unsigned __int128",
    
    // Fixed width integers (42-49)
    "int8_t", "uint8_t", "int16_t", "uint16_t",
    "int32_t", "uint32_t", "int64_t", "uint64_t",
    
    // Least/fast integers (50-65)
    "int_least8_t", "uint_least8_t", "int_least16_t", "uint_least16_t",
    "int_least32_t", "uint_least32_t", "int_least64_t", "uint_least64_t",
    "int_fast8_t", "uint_fast8_t", "int_fast16_t", "uint_fast16_t",
    "int_fast32_t", "uint_fast32_t", "int_fast64_t", "uint_fast64_t",
    
    // Special integer types (66-72)
    "intmax_t", "uintmax_t", "intptr_t", "uintptr_t",
    "size_t", "ssize_t", "ptrdiff_t",
    
    // Character types (73-76)
    "wchar_t", "char8_t", "char16_t", "char32_t",
    
    // Boolean types (77-78)
    "_Bool", "bool",
    
    // Floating point types (79-81)
    "float", "double", "long double",
    
    // Complex types (82-84)
    "float _Complex", "double _Complex", "long double _Complex",
    
    // Imaginary types (85-87)
    "float _Imaginary", "double _Imaginary", "long double _Imaginary",
    
    // Decimal types (88-90)
    "_Decimal32", "_Decimal64", "_Decimal128",
    
    // Extended floating point types (91-100)
    "_Float16", "_Float32", "_Float32x", "_Float64", "_Float64x",
    "_Float128", "__float80", "__float128", "__bf16", "__fp16",
    
    // BitInt types (101-108)
    "_BitInt(8)", "_BitInt(16)", "_BitInt(24)", "_BitInt(32)",
    "_BitInt(64)", "_BitInt(128)", "_BitInt(256)", "_BitInt(512)",
    
    // Atomic types (109-129)
    "_Atomic char", "_Atomic signed char", "_Atomic unsigned char",
    "_Atomic short", "_Atomic unsigned short", "_Atomic int",
    "_Atomic unsigned int", "_Atomic long", "_Atomic unsigned long",
    "_Atomic long long", "_Atomic unsigned long long",
    "_Atomic int8_t", "_Atomic uint8_t", "_Atomic int16_t", "_Atomic uint16_t",
    "_Atomic int32_t", "_Atomic uint32_t", "_Atomic int64_t", "_Atomic uint64_t",
    "_Atomic float", "_Atomic double",
    
    // Thread local types (130-131)
    "_Thread_local int", "_Thread_local double",
    
    // Special types (132-134)
    "void*", "nullptr_t", "max_align_t"
};
const int num_data_types = sizeof(types) / sizeof(types[0]);
int type(char *type){
    for(int i=0;i<num_data_types;i++){
        if(strcmp(type,types[i])==0){
            return i;
        }
    }
    return -1;
}

int main(){
    printf("%d\n",num_data_types);
    unsigned char t = num_data_types;
    printf("%d",(int)t);
    return 0;
}