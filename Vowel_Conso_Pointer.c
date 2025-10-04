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





