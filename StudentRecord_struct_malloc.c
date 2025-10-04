//Student Record using structure
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
struct Student{
    int roll;
    char name[200];
    int marks[3];
};
int main() { 
    int n=0;
    printf("Enter num of student: ");
    scanf("%d",&n);
    
    struct Student *student[n];
    for(int i=0;i<n;i++) {
        student[i]= (struct Student*)malloc(sizeof(struct Student));
    }
    
    printf("\nEnter roll number, name, and marks in 3 subjects for each student:\n");
    
    for(int i=0;i<n;i++){
        scanf("%d %s %d %d %d",&student[i]->roll,student[i]->name,&student[i]->marks[0],&student[i]->marks[1],&student[i]->marks[2]);
         printf("\n");
    }
    int topper=0;
    for(int i=0;i<n;i++){
        int total=student[i]->marks[0]+student[i]->marks[1]      +student[i]->marks[2];
        if(topper<total) topper=i;
        printf("%s - Total: %d, Average: %.2f",student[i]->name,total,(float)total/3);
        printf("\n");
    }
     printf("Topper: %s with %d marks",student[topper]->name,student[topper]->marks[0]+student[topper]->marks[1]+student[topper]->marks[2]);
     
    for(int i = 0; i < n; i++) free(student[i]);
    
   return 0; 
}





