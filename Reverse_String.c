//reverse string in c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter String : ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str, "\n")] = '\0';
    char rev[200];
    int j=0;
    for(int i=strlen(str)-1;i>=0;i--){
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    printf("rev strr: %s",rev);
    return 0;
}


//another methos
#include <stdio.h>
#include <string.h>
int main() {
    char str[7]="String";
    str[7]='\0';
    int j=strlen(str)-1;
    for(int i=0;i<=j;i++){
        char st=str[j];
        str[j]=str[i];
        str[i]=st;
        j--;
    }
    for(int i=0;i<=strlen(str)-1;i++){
        printf("%c",str[i]);
    }
    return 0;
}
