//Check number of Vowel from string  using c
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    
    int count=0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'|| str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'|| str[i]=='u'||str[i]=='U')  count++;
    }
    printf("no of vowel: %d",count);
    return 0;
}
