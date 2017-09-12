/*Find the maximum difference between two elements in an array such that larger element appears after the smaller number*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int maxDiff(int *a,int size){
    int diff = a[1] - a[0],i;
    int currSum = diff, maxSum = currSum;
    
    for(i = 1; i < size; i++){
        diff = a[i+1] - a[i];
        currSum = currSum > 0 ? currSum + diff: diff;
        if(currSum > maxSum)
            maxSum = currSum;
        }
    return maxSum;
}

int main(){
    int *a,size,i,k;
    
    printf("Enter size of array:\n");
    scanf("%d",&size);
    
    a = malloc(size*sizeof(int));
    printf("Enter elements: ");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    k = maxDiff(a,size);
    printf("%d",k);
    free(a);
    
    getch();
    return;
}