//Change the value of a node in heap then make it heap again.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
void MaxHeapify(int *a,int i,int size){
    int largest,l,r;
    l = 2*i+1;
    r = 2*i+2;
    
    if(size>l && a[i]<a[l])
        largest = l;
    else
        largest = i;
    if(size>r && a[largest]<a[r])
        largest = r;
    if(largest!=i){
        swap(&a[i], &a[largest]);
        MaxHeapify(a,largest,size);   
    }
}

void BuildHeap(int *a,int size){
    int i;
    for(i=(size/2-1);i>=0;i--){
        MaxHeapify(a,i,size);
    }
}

void IncreaseKey(int *a,int j,int m,int size){
    a[j] = m;
    while(j>0 && a[j]>a[(int)(j-1)/2]){
        swap(&a[j],&a[j/2]);
        j = j/2;
    }
}

void DecreaseKey(int *a,int j,int m,int size){
    a[j] = m;
    MaxHeapify(a,j,size);
}

void ModifyHeap(int *a,int j,int m,int size){
    if(j>size-1){
        printf("Enter correct index");
        return;
    }
    if(m>a[j])
        IncreaseKey(a,j,m,size);
    else if(m<a[j])
        DecreaseKey(a,j,m,size);
}

void main(){
    int *a,i,size,m,j;
    printf("Enter the size of heap:\n");
    scanf("%d",&size);
    a = (int *) malloc(sizeof(int) * size);
    printf("Enter Elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    BuildHeap(a,size);
    printf("\nEnter the index and new value at that index:");
    scanf("%d%d",&j,&m);
    ModifyHeap(a,j,m,size);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    getch();
}