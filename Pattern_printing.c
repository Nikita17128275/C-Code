//pattern printing 
#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 
int main() { 
    int n=0;
    printf("Enter num: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
           printf("%d ",j+1);
        }
        printf("\n");
    }
   return 0; 
}
