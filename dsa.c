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

// //Insert an element in to the array;
// #include <stdio.h>
// int main(){
//     int arr[5] = {1,2};
//     int i = 0;
//     printf("for given array : ");
//     for(i=0;i < sizeof(arr)/4;i++){
//         printf("%d, ",arr[i]);
//     }
//     int insert_num;
//     printf("\nInput a num to be inserted : ");
//     scanf("%d",&insert_num);
//     int pos;
//     printf("Enter the position to be inserted at : ");
//     scanf("%d",&pos);
//     pos--;
//     for(i = sizeof(arr)/4;i > pos;i--){
//         arr[i] = arr[i-1];
//     }
//     arr[pos] = insert_num;
//     printf("\narray after insertion : ");
//     for(i=0;i < sizeof(arr)/4;i++){
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

//find duplicate elements in array
#include <stdio.h>
int main(){
    int arr[] = {1,1,2,2,33,5,6};
    int dp[sizeof(arr)/4];
    int i,j,dpc,dch,dc=0;
    for(i=0;i<sizeof(arr)/4;i++){
        for(j=i+1;j<sizeof(arr)/4;j++){
            if(arr[i]==arr[j]){
                for(dpc=0;dpc<sizeof(dp)/4;dpc++){
                    if(dp[dpc]==arr[i]){
                        dch = 0;
                    }
                    else{
                        dch =1;
                    }
                }
                if(dch==1){
                    dp[dc]=arr[i];
                    dc++;
                }
                
            }
        }
    }
    printf("given array : ");
    for(i=0;i<sizeof(arr)/4;i++){
        printf("%d ,",arr[i]);
    }
    printf("\n");
    for(i=0;i<dc;i++){
        printf("The following indexs :  ");
        for(j=0;j<sizeof(arr)/4;j++){
            if(dp[i]==arr[j]){
                printf("%d ,",j);
            }
        }
        printf(" are duplicates of \"%d\" in the given array.\n");
    }
    return 0;
}