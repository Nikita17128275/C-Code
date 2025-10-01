//prime number check
#include <stdio.h>
#include <stdbool.h>
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    bool prime=true;
    if(a==0||a==1){
        printf("Not prime");
    }else {
    for(int i=2;i<a/2;i++){
       if (a % i == 0){
          prime = false;
          break;
      }
    }
    }
    if(prime) printf("prime");
    else printf("Not prime");
    return 0;
}
