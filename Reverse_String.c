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


//reverse using malloc
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void reverse(char *str){
    char *start = str;
    char *end = str+strlen(str)-1;
    
    if(*end=='\n'){
        *end='\0';
        end--;
    }

    while(start<end){
        char temp=*start;
        *start=*end;
        *end = temp;
        start++;
        end--;
    }
}
int main() {
    char *str=(char *)malloc(50*(sizeof(char)));
    printf("str: ");
    fgets(str,50,stdin);
    printf("Input: %s",str);
    reverse(str);
    printf("Output: %s",str);
    free(str);
    return 0;
}
