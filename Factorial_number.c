//Factorial of number
#include <stdio.h>
#include <stdbool.h> 
#include <string.h> 
long long fact(int i){
    if(i==0||i==1) return 1;
    else return i * fact(i-1); 
}
int main() { 
    int num=0;
    printf("Enter number : ");
    scanf("%d",&num);
    if(num>0){
    long long factorial=fact(num);
    printf("\nfactorial: %d",factorial);
    }else  printf("\nFactorial is not defined for negative numbers.");
   
    return 0; 
}
