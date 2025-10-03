//palindrome string check
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
    
    if(strcmp(rev, str) == 0) printf("\npalindrome number");
    else printf("\nnot palindrome");
    return 0;
}
