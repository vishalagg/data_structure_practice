/*Check whether given two strings are rotations of each other or not*/
#include<stdio.h>
#include<conio.h>
#include<strings.h>
#include<stdlib.h>

int isRotations(char *a,char *b){
    int len1,len2;
    char *c;
    void *p;
    
    len1 = strlen(a);
    len2 = strlen(b);
    c = malloc(2*len2 + 1);
    c[0] = '\0';
    c = strcat(c,b);
    c = strcat(c,b);
    
    p = strstr(c,a);
    
    return p?1:0 ;
}

int main(){
    char str1[100], str2[100];
    
	printf("Enter string1\n");
	scanf("%s", str1);
	printf("Enter string2\n");
	scanf("%s", str2);
    
	if (isRotations(str1, str2))
		printf("Strings are rotations of each other\n");
	else
		printf("Strings are not rotations to each other");
    getch();
	return 0;
}