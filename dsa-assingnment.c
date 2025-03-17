// //1. Count Even and Odd Numbers in an Array
// #include <stdio.h>
// int main() {
//     int n, i, even = 0, odd = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }
//     printf("Total Even: %d\nTotal Odd: %d\n", even, odd);
//     return 0;
// }

// //2. Separate Positive, Negative, and Zero Values Without Temp Arrays
// #include <stdio.h>
// int main() {
//     int n, i, pos = 0, neg = 0, zero = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Positive: ");
//     for(i = 0; i < n; i++) {
//         if(arr[i] > 0)
//             printf("%d ", arr[i]);
//     }
//     printf("\nNegative: ");
//     for(i = 0; i < n; i++) {
//         if(arr[i] < 0)
//             printf("%d ", arr[i]);
//     }
//     printf("\nZeros: ");
//     for(i = 0; i < n; i++) {
//         if(arr[i] == 0)
//             printf("%d ", arr[i]);
//     }
//     return 0;
// }

// //3. Swap Array Elements Without Temporary Array
// #include <stdio.h>
// int main() {
//     int n, i;
//     // Input size of array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     // Input elements
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Swap elements without temporary variable
//     for(i = 0; i < n / 2; i++) {
//         arr[i] = arr[i] + arr[n - i - 1];
//         arr[n - i - 1] = arr[i] - arr[n - i - 1];
//         arr[i] = arr[i] - arr[n - i - 1];
//     }
//     // Print swapped array
//     printf("Array after swapping: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// //4. Count Frequency of Each Element Without Temp Array
// #include <stdio.h>
// int main() {
//     int n, i, j, count;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     printf("Element Frequencies:\n");
//     for(i = 0; i < n; i++) {
//         count = 1;
//         if(arr[i] != -1) {
//             for(j = i + 1; j < n; j++) {
//                 if(arr[i] == arr[j]) {
//                     count++;
//                     arr[j] = -1;  // Mark as counted
//                 }
//             }
//             printf("%d occurs %d times\n", arr[i], count);
//         }
//     }
//     return 0;
// }

// //5. Check if Array is in Arithmetic Progression (AP) Without Temp Array
// #include <stdio.h>
// int main() {
//     int n, i, diff, isAP = 1;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     diff = arr[1] - arr[0];
//     for(i = 1; i < n - 1; i++) {
//         if(arr[i + 1] - arr[i] != diff) {
//             isAP = 0;
//             break;
//         }
//     }
//     if(isAP)
//         printf("The sequence is in AP.\n");
//     else
//         printf("The sequence is NOT in AP.\n");
//     return 0;
// }

// //6. Find Missing Term in an AP Without Using a Temporary Array
// #include <stdio.h>
// int main() {
//     int n, i, diff, missing = -1;
//     // Input size of array
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     // Input elements
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     // Calculate the expected common difference (d)
//     diff = (arr[n - 1] - arr[0]) / n;
//     // Find the missing term
//     for(i = 0; i < n - 1; i++) {
//         if(arr[i + 1] - arr[i] != diff) {
//             missing = arr[i] + diff;
//             break;
//         }
//     }
//     // Print the complete AP sequence
//     printf("Complete AP sequence: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//         if(i == missing - arr[0]-1) {
//             printf("%d ", missing); // Insert missing number in the correct position
//         }
//     }
//     printf("\nMissing term: %d\n", missing);
//     return 0;
// }

// //7. Separate Positive & Negative Numbers Without Temp Array (Maintain Order)
// #include <stdio.h>
// int main() {
//     int n, i, j, temp;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         if(arr[i] >= 0) {
//             for(j = i + 1; j < n; j++) {
//                 if(arr[j] < 0) {
//                     temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                     break;
//                 }
//             }
//         }
//     }
//     printf("Rearranged Array: ");
//     for(i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

// //8. Store and Print Union & Intersection of Two Arrays
// #include <stdio.h>
// int main() {
//     int n1, n2, i, j, unionSize = 0, intersectionSize = 0;
//     // Input size of first array
//     printf("Enter size of first array: ");
//     scanf("%d", &n1);
//     int a[n1];
//     printf("Enter %d elements of first array: ", n1);
//     for(i = 0; i < n1; i++)
//         scanf("%d", &a[i]);
//     // Input size of second array
//     printf("Enter size of second array: ");
//     scanf("%d", &n2);
//     int b[n2];
//     printf("Enter %d elements of second array: ", n2);
//     for(i = 0; i < n2; i++)
//         scanf("%d", &b[i]);
//     int unionArray[n1 + n2]; // Maximum possible size
//     int intersectionArray[n1 < n2 ? n1 : n2]; // Maximum size = min(n1, n2)
//     // Storing Union
//     for(i = 0; i < n1; i++) {
//         unionArray[unionSize++] = a[i];
//     }
//     for(i = 0; i < n2; i++) {
//         int found = 0;
//         for(j = 0; j < unionSize; j++) {
//             if(b[i] == unionArray[j]) {
//                 found = 1;
//                 break;
//             }
//         }
//         if(!found) {
//             unionArray[unionSize++] = b[i];
//         }
//     }
//     // Storing Intersection
//     for(i = 0; i < n1; i++) {
//         for(j = 0; j < n2; j++) {
//             if(a[i] == b[j]) {
//                 int alreadyStored = 0;
//                 for(int k = 0; k < intersectionSize; k++) {
//                     if(intersectionArray[k] == a[i]) {
//                         alreadyStored = 1;
//                         break;
//                     }
//                 }
//                 if(!alreadyStored) {
//                     intersectionArray[intersectionSize++] = a[i];
//                 }
//             }
//         }
//     }
//     // Printing Union
//     printf("Union: ");
//     for(i = 0; i < unionSize; i++) {
//         printf("%d ", unionArray[i]);
//     }
//     // Printing Intersection
//     printf("\nIntersection: ");
//     for(i = 0; i < intersectionSize; i++) {
//         printf("%d ", intersectionArray[i]);
//     }
//     return 0;
// }

// //9. Find 4th Non-Repeating Element Without Temp Array
// #include <stdio.h>
// int main() {
//     int n, i, j, count, found = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         count = 0;
//         for(j = 0; j < n; j++) {
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count == 1) {
//             found++;
//             if(found == 4) {
//                 printf("4th Non-Repeating Element: %d\n", arr[i]);
//                 return 0;
//             }
//         }
//     }
//     printf("Less than 4 non-repeating elements found.\n");
//     return 0;
// }

// //10. Find 4th Repeating Element Without Temp Array
// #include <stdio.h>
// int main() {
//     int n, i, j, count, found = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for(i = 0; i < n; i++) {
//         count = 0;
//         for(j = 0; j < i; j++) {
//             if(arr[i] == arr[j])
//                 count++;
//         }
//         if(count == 1) {  // Only count actual repetitions
//             found++;
//             if(found == 4) {
//                 printf("4th Repeating Element: %d\n", arr[i]);
//                 return 0;
//             }
//         }
//     }
//     printf("Less than 4 repeating elements found.\n");
//     return 0;
// }

// //11. Count Palindrome, Prime, Armstrong, and Sum < 10 Numbers
// #include <stdio.h>
// #include <math.h>
// // Function to check palindrome
// int isPalindrome(int num) {
//     int rev = 0, temp = num;
//     while(temp > 0) {
//         rev = rev * 10 + temp % 10;
//         temp /= 10;
//     }
//     return rev == num;
// }
// // Function to check prime number
// int isPrime(int num) {
//     if(num < 2) return 0;
//     for(int i = 2; i * i <= num; i++) {
//         if(num % i == 0)
//             return 0;
//     }
//     return 1;
// }
// // Function to check Armstrong number
// int isArmstrong(int num) {
//     int sum = 0, temp = num, digit, count = 0;
//     int tempCount = num;
//     while (tempCount > 0) {
//         tempCount /= 10;
//         count++;
//     }
//     while (temp > 0) {
//         digit = temp % 10;
//         sum += pow(digit, count);
//         temp /= 10;
//     }
//     return sum == num;
// }
// // Function to check sum of digits < 10
// int sumOfDigitsLessThan10(int num) {
//     int sum = 0;
//     while(num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum < 10;
// }
// int main() {
//     int n, i, pal = 0, prime = 0, arm = 0, sum10 = 0;
//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     printf("Enter %d multi-digit elements: ", n);
//     for(i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//         if(isPalindrome(arr[i])) pal++;
//         if(isPrime(arr[i])) prime++;
//         if(isArmstrong(arr[i])) arm++;
//         if(sumOfDigitsLessThan10(arr[i])) sum10++;
//     }
//     printf("Total Palindromes: %d\n", pal);
//     printf("Total Prime Numbers: %d\n", prime);
//     printf("Total Armstrong Numbers: %d\n", arm);
//     printf("Total Elements with Sum of Digits < 10: %d\n", sum10);
//     return 0;
// }

//12. Merge Two Sorted Arrays Into a Sorted Array
#include <stdio.h>
int main() {
    int n1, n2, i, j, k;
    printf("Enter size of first sorted array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter elements of first sorted array: ");
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    printf("Enter size of second sorted array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter elements of second sorted array: ");
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);
    int c[n1 + n2];
    i = 0, j = 0, k = 0;
    while(i < n1 && j < n2) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i < n1)
        c[k++] = a[i++];
    while(j < n2)
        c[k++] = b[j++];
    printf("Merged Sorted Array: ");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}