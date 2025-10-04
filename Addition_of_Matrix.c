//addition of two matrix
#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 
int main() { 
    int row,column;
    printf("Enter rows and columns: ");
    scanf("%d %d",&row,&column);
    int arr1[row][column],arr2[row][column];
    
    printf("\nEnter first matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
          scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("Enter second matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
          scanf("%d",&arr2[i][j]);
        }
    }
    
    int result[row][column];    
    printf("\nResultant Matrix:\n");
    for(int i=0;i<row;i++) {
        for(int j=0;j<column;j++) {
          result[i][j]=arr1[i][j]+arr2[i][j];
           printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
   
    return 0; 
}
