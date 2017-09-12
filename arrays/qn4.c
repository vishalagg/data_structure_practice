/*Rearrange the array so that a[i] becomes a[a[i]]
Time complexity = o(n) and **space complexity = o(1)*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void rearrange(int *a,int size){
    int n = size+1;
    int i;
    
    for(i=0;i<size;i++){
        a[i] = a[i] + (a[a[i]]%n)*n;
    }
    for(i=0;i<size;i++){
        a[i] /= n;
    }
}
int main(){
    int *a,size,i;
    
    printf("Enter size of array:\n");
    scanf("%d",&size);
    
    a = malloc(size*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    rearrange(a,size);
    for(i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    free(a);
    
    getch();
    return;
}