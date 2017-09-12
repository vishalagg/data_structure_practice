/*
Find a pair in an array whose sum is equals to given number
*/
#include<stdio.h>

void findPair(int *a,int size,int k){
    int hash[100] = {0};
    int curr = 0,other;
    char i,j;
    
    for(i=0;i<size;i++){
        if(hash[curr]==1){
            printf("\nThe pair is:%d and %d",curr,other);
        }
        curr = a[i];
        other = k - a[i];
        hash[other]=1;
    }
}

int main(){
    int size;
    int a[10],i,k;
    printf("\nEnter size of array: ");
    scanf("%d",&size);
    printf("\nEnter Elements of array:");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter sum: ");
    scanf("%d",&k);
    findPair(a,size,k);
    return;
}