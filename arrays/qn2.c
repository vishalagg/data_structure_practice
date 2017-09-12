/*find an element in array that occurs more than n/2 times,here n=size of array*/
#include<stdio.h>
#include<conio.h>

int isReallyMaxOccur(int *a,int size,int voter){
    int i,count = 0;
    
    for(i=0;i<size;i++){
        if(a[i] == voter){
            count++;
        }
    }
    if(count > (size/2))
        return voter;
    return -1;
}

int findElement(int *a,int size){
    int i,voter=a[0],votes=0;
    
    for(i=0;i<size;i++){
        if(a[i] == voter){
            votes += 1;
        }
        else{
            votes -= 1;
            if(votes == 0){
                voter = a[i];
                votes = 1;
            }
        }
    }
    if(votes > 0){
        return isReallyMaxOccur(a,size,voter);    
    }
    else
        return -1;
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
    k = findElement(a,size);
    printf("The max occuring integer is : %d",k);
    getch();
}