// //1. Design a C program and draw a flowchart that creates an array of n integers,accepts elements, and inserts a new element at a given position.
// #include <stdio.h>
// int main(){
//     int i,n,pos,e;
//     printf("Enter a no. : ");
//     scanf("%d",&n);
//     int a[n+1];
//     for(i=0;i<n;i++){
//         printf("Enter element %d : ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("Enter the position you want to enter : ");
//     scanf("%d",&pos);
//     for(i=n;i>pos-1;i--){
//         a[i] = a[i-1];
//     }
//     printf("Enter the element you want to enter : ");
//     scanf("%d",&e);
//     a[pos-1] = e;
//     for(i=0;i<n+1;i++){
//         printf("\nElement %d : ",i+1);
//         printf("%d\n",a[i]);
//     }
//     return 0;
// }

// //2. Check student result
// #include<stdio.h>
// int total(float a[],int s){
//     int i;
//     float sum =0;
//     for(i=0;i<s;i++){
//         sum = sum + a[i];
//     }
//     return sum;
// }
// float percentage(float a[],int s,int tol){
//     return (float)(total(a,s)/(float)(s*tol))*100.0;
// }
// int failcheck(float a[],int s,int tol){
//     int i = 1;
//     for(i=0;i<s;i++){
//         if (a[i] >= (0.4 * tol)){}
//         else{
//             i = 0;
//             break;
//         }
//     }
//     return i;
// }
// int main(){
//     int s,n,i,j,tol;
//     printf("Enter the no. of students : ");
//     scanf("%d",&n);
//     printf("Enter the no. of subjects : ");
//     scanf("%d",&s);
//     printf("Enter the total marks : ");
//     scanf("%d",&tol);
//     float student[n][s];
//     for(i=0;i<n;i++){
//         printf("Enter marks of student %d : \n",i+1);
//         for(j=0;j<s;j++){
//             printf("Enter marks of subject %d : ",j+1);
//             scanf("%f",&student[i][j]);
//         }
//     }
//     printf("\nResult : \n\n");
//     for(i=0;i<n;i++){
//         if(failcheck(student[i],s,tol)){
//         printf("Student %d : PASS : %.2f\n",i+1,percentage(student[i],s,tol));
//         }
//         else{
//             printf("Student %d :FAIL\n",i+1);
//         }
//     }
//     return 0;
// }

// //3. check palindrome sentence
// #include <stdio.h>
// #include <stdlib.h>
// void getsinput(char ** a){
//     *a = NULL;
//     char ch;
//     int size = 0;
//     while((ch=getchar())!='\n' && ch != EOF && ch !='\r'){
//         *a = (char *)realloc(*a,((size+1)*sizeof(char)));
//         (*a)[size]=ch;
//         size++;
//     }
//     *a = (char *)realloc(*a,size+1);
//         (*a)[size]='\0';
//         size++;
// }
// void remove_space(char ** a){
//     char *b=NULL;
//     int i,size=0;
//     for(i=0;(*a)[i]!='\0';i++){
//         if((*a)[i]!=' '){
//             b = (char *)realloc(b,((size+1)*sizeof(char)));
//             b[size]=(*a)[i];
//             size++;
//         }
//     }
//     b = (char *)realloc(b,size+1);
//         b[size]='\0';
//         size++;
//     free(*a);
//     *a = (char *)realloc(b,((size)*sizeof(char)));
// }
// void lowercase(char *a){
//     if((int)(*a)<91 && (int)(*a)>64){
//         *a = *a + 32;
//     }
// }
// int main(){
//     char *a;
//     int i,size;
//     printf("Please Enter a Sentence : ");
//     getsinput(&a);
//     remove_space(&a);
//     for(size=0;a[size]!='\0';size++){}
//     for(i=0;a[i]!='\0';i++){
//         lowercase(&a[i]);
//     }
//     for(i=0;i <(int)size/2;i++){
//         if(a[i]!=a[size-1-i]){
//             printf("This sentence is not plindrome.");
//             free(a);
//             return 0;
//         }
//     }
//     printf("Yes, it is a palindrome");
//     free(a);
//     return 0;
// }

// //4. find the second largest and second smallest element in an unsorted dynamic array without sorting.
// #include <stdio.h>
// #include<stdlib.h>
// int main(){
//     int i,n;
//     printf("Enter the size of array : ");
//     scanf("%d",&n);
//     int * arr = (int*)malloc(n*sizeof(int));
//     for(i=0;i<n;i++){
//         printf("Enter a no. : ");
//         scanf("%d",&arr[i]);
//     }
//     int size,largest=arr[0],secondlargest=arr[0];
//     if(n%2==0){
//         size = n/2;
//     }
//     else{
//         size = (n/2) +1;
//     }
//     for(i=0;i<n;i++){
//         if(largest<arr[i]){
//             largest = arr[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(secondlargest<arr[i]){
//             if(arr[i]!=largest)
//                 secondlargest = arr[i];
//         }
//     }
//     int smallest = largest;
//     int secondsmallest = largest;
//     for(i=0;i<n;i++){
//         if(smallest>arr[i]){
//             smallest = arr[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(secondsmallest>arr[i]){
//             if(arr[i]!=smallest)
//                 secondsmallest = arr[i];
//         }
//     }
//     printf("second largest %d second smallest %d ",secondlargest,secondsmallest);
//     free(arr);
//     return 0;
// }

//5. make student record using struct,find and print marks below 75%
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct{
//     char name[151];
//     int rollno;
//     float marks[3];
// }student;
// int main(){
//     int n,i;
//     printf("Enter the no. of students : ");
//     scanf("%d",&n);
//     student students[n];
//     for (i = 0; i < n; i++){
//         printf("\nEnter the name of student %d :",i+1);
//         scanf("%s",students[i].name);
//         printf("Enter the roll no. : ");
//         scanf("%d",&students[i].rollno);
//         printf("Enter marks of subject 1 : ");
//         scanf("%f",&students[i].marks[0]);
//         printf("Enter marks of subject 2 : ");
//         scanf("%f",&students[i].marks[1]);
//         printf("Enter marks of subject 1 : ");
//         scanf("%f",&students[i].marks[2]);
//     }
//     float percentage;
//     printf("\n");
//     for(i=0;i<n;i++){
//         percentage =  (100*(students[i].marks[0]+students[i].marks[1]+students[i].marks[2]))/300;
//         if(percentage<75){
//             printf("%s -> Avg = %.2f -> Below 75\%\n",students[i].name,percentage);
//         }
//         else{
//             printf("%s -> Avg = %.2f -> Passed\n",students[i].name,percentage);
//         }
//     }
//     return 0;
// }

// //6. calculate attendence
// #include <stdio.h>
// typedef struct{
//     char name[151];
//     int rollno;
//     int presents;
// }student;
// int main(){
//     int i,n,total_class;
//     printf("Enter the no. of students you want to record : ");
//     scanf("%d",&n);
//     printf("Enter the total no. of classes : ");
//     scanf("%d",&total_class);
//     student students[n];
//     for(i=0;i<n;i++){
//         printf("Enter name of the student %d : ",i+1);
//         scanf("%s",students[i].name);
//         printf("Enter roll no. : ");
//         scanf("%d",&students[i].rollno);
//         printf("Enter the no. of days present : ");
//         scanf("%d",&students[i].presents);
//     }
//     printf("\nList of students below 75%% attendence : \n");
//     printf("Roll no.\tAttendence\tName\n");
//     float attendance;
//     for(i=0;i<n;i++){
//         attendance = ((float)students[i].presents / total_class) * 100;
//         if(attendance<75){
//             printf("%d\t\t%.2f%%\t\t%s\n",students[i].rollno,attendance,students[i].name);
//         }
//     }
//     return 0;
// }

// //7. record and display students roll no and name of different campuses 
// #include <stdio.h>
// #include <stdlib.h>
// typedef struct{
//     char name[151];
//     int rollno;
// }student;
// typedef struct {
//     char campus_name[14];
//     student *students;
// }campus;
// int main(){
//     campus geu[4];
//     char ch1;
//     char ch2;
//     int size[4] = {0};
//     int i;
//     for(i = 0; i < 4; i++) {
//         geu[i].students = NULL;
//     }
//     while (1){
//     menu:
//     printf("Select campus : \n");
//     printf("1. GEU Dehradun\n");
//     printf("2. GEHU Dehradun\n");
//     printf("3. GEHU Bhimtal\n");
//     printf("4. GEHU Haldwani\n");
//     printf("0. exit program\n");
//     printf("\nEnter campus no. : ");
//     scanf("%d",&ch1);
//     if(ch1 == 0){
//             break;
//     }
//     printf("\nselect function : \n");
//     printf("1. Add students\n");
//     printf("2. Display students\n");
//     printf("0. exit \n");
//     printf("\nEnter function no. : ");
//     scanf("%d",&ch2);
//         while(ch2==1){
//             geu[ch1-1].students = (student *)realloc(geu[ch1-1].students,(size[ch1-1]+1)*sizeof(student));
//             printf("Enter student roll no. : ");
//             scanf("%d",&(geu[ch1-1].students[size[ch1-1]].rollno));
//             printf("Enter student student name : ");
//             scanf("%s",(geu[ch1-1].students[size[ch1-1]].name));
//             size[ch1-1]++;
//             printf("Enter 0 to exit or press enter to continue.......  ");
//             while(getchar() != '\n');
//             if(getchar()=='0'){
//                 break;
//             }
//         }
//         if(ch2==2){
//             if(size[ch1-1] == 0) {
//                 printf("\nNo students registered for this campus!\n");
//             } else {
//                 printf("\nStudent List for Campus %d:\n", ch1);
//                 printf("Roll No.\tName\n");
//                 printf("------------------------\n");
//                 for(i = 0; i < size[ch1-1]; i++) {
//                     printf("%d\t\t%s\n", 
//                         geu[ch1-1].students[i].rollno,
//                         geu[ch1-1].students[i].name);
//                 }
//                 printf("------------------------\n");
//             }
//         }
//         else if(ch2 == 0){
//             goto menu;
//         }
//     }
//     for(i = 0; i < 4; i++){
//         free(geu[i].students);
//     }
//     return 0;
// }

//8. Write a C program and algorithm to count the number of words, characters,lines and sentences in "essay.txt".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *f;
void readline(char **str, FILE *f) {
    char ch;
    int size = 0;
    if (*str != NULL) {
        free(*str);
        *str = NULL;
    }
    while ((ch = fgetc(f)) != EOF && ch != '\n') {
        *str = (char *)realloc(*str, (size + 1) * sizeof(char));
        if (*str == NULL) {
            printf("Memory allocation failed\n");
            exit(1);
        }
        (*str)[size++] = ch;
    }
    *str = (char *)realloc(*str, (size + 1) * sizeof(char));
    (*str)[size] = '\0';
}
int main() {
    FILE *f = fopen("essay.txt", "r");
    if (f == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    char *str = NULL;
    char *temp = NULL;
    int i, lines = 0, characters = 0, sentences = 0, words = 0;
    while (!feof(f)) {
        readline(&str, f);
        if (str == NULL || strlen(str) == 0) 
            continue;
        characters += strlen(str);
        temp = strdup(str);  // Make a copy for strtok
        char *token = strtok(temp, " \t");
        while (token != NULL) {
            words++;
            token = strtok(NULL, " \t");
        }
        free(temp);
        for (i = 0; str[i] != '\0'; i++) {
            if (str[i] == '.') {
                sentences++;
            }
        }
        lines++;
    }
    printf("Information of essay.txt:\n\n");
    printf("No. of lines: %d\n", lines);
    printf("No. of words: %d\n", words);
    printf("No. of sentences: %d\n", sentences);
    printf("No. of Characters: %d\n", characters);
    free(str);
    fclose(f);
    return 0;
}