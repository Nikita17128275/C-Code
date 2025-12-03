//find vowel and consonants from string
#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 
struct Student{
    int roll;
    char name[200];
    int marks[3];
};
int main() { 
    char str[200];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    char *ptr = str;
    int volwels=0,consonants=0;
    
    while(*ptr!='\0'){
        char ch = *ptr;
        if (ch >= 'A' && ch <= 'Z') ch += 32;
        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') volwels++;
            else consonants++;
        }
        ptr++;
    }
   printf("volwels: %d , consonants: %d",volwels,consonants);
   return 0; 
}


//vowel
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int countVowels(char *str){
    int total=0;
    for(int i=0;str[i] != '\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
        str[i]=='o'||str[i]=='u'||
        str[i]=='A'||str[i]=='E'||str[i]=='I'||
        str[i]=='O'||str[i]=='U') total++;
    }
    return total;
}
int main() {
    char *str;
    str=(char *)malloc(100*(sizeof(char)));
    printf("str : ");
    fgets(str, 100, stdin);
    printf("number of vowels is: %d",countVowels(str));
    free(str);
    return 0;
}


