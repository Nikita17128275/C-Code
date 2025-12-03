#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sum(int *ptr,int n){
    int total=0;
    for(int i=0;i<n;i++){
        total+=ptr[i];
    }
    return total;
}
int main() {
    int n=5;
    int *ptr;
    ptr=(int *)malloc(n*(sizeof(int)));
    for(int i=0;i<n;i++){
        printf("n%d: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("sum is: %d",sum(ptr,n));
    free(ptr);
    return 0;
}
