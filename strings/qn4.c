/*Reverse the words in a given sentence*/
#include<stdio.h>
#include<conio.h>
#include<string.h>

void swap(char *p,char *q){
    char *temp;
    temp = p;
    p = q;
    q = temp;
}

void reverseWord(char *w){
    char *p,*q;
    int len = strlen(w);

    p = w;
    q = w;
    while(!q++);
    while(p<q){
        swap(p,q);
        p++;
        q--;
    }
}

void main(){
    char *a = "cat";

    reverseWord(a);
    printf("String is:");
    puts(a);
    printf("end %s",a);
}
