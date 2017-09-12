/*Remove duplicates from a given string*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>

# define MAX 256

void removeDuplicate(char *a){
    int hash[256] = {0},i,j=0,len = strlen(a);
    
    for(i=0;i<len;i++){
        if(hash[a[i]]==0){
            hash[a[i]]++;
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

int main(){
    char s[40];
    
    printf("Enter string: ");
    gets(s);
    removeDuplicate(s);
    printf("After reomving duplicates :\n");
    puts(s);
    getch();
    return;
}