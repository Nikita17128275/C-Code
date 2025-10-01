//prime number check
#include <stdio.h>
#include <stdbool.h>
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    bool prime=true;
    for(int i=2;i<a;i++){
       if (a % i == 0){
          prime = false;
          break;
      }
    }
    if(prime) printf("prime");
    else printf("Not prime");
    return 0;
}
