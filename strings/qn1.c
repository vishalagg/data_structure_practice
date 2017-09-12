/*Find a maximum occurring character in a given string*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>

#define MAX 256

char findMax(char *a,int size){
    int i,hash[MAX] = {0},max=-1;
    int c;
    for(i=0;i<size;i++){
        hash[a[i]] += 1;
    }
    for(i=0;i<size;i++){
        if(max<hash[a[i]])
            max=hash[a[i]];
            c = a[i];
    }
    return c;
}

int main(){
    char s[40];
    int size,n;
    
    printf("Enter string: ");
    gets(s);
    size = strlen(s);
    printf("The max occuring character is : %c",findMax(s,size));
    getch();
    return;
}