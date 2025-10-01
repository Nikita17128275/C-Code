//Reverse Number in C
#include <stdio.h>
int main() {
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int valu=0;
    while(a!=0){
        valu=(valu*10)+(a%10);
        a /= 10;
    }
    printf("valu: %d ",valu);
    return 0;
}
