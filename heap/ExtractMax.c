// Delete Max From MaxHeap
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

int ExtractMax(int *a,int *size){
    int max = a[0];
    if(*size<1)
        printf("Underflow");
    a[0] = a[*size-1];
    *size = *size-1;
    MaxHeapify(a,0,*size);
    return max;
}

void main(){
    int *a,i,size,max;
    printf("Enter the size of heap:\n");
    scanf("%d",&size);
    a = (int *) malloc(sizeof(int) * size);
    printf("Enter Elements:\n");
    for(i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    BuildHeap(a,size);
    printf("Heap is:\n");
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    max = ExtractMax(a,&size);
    printf("\nAfter Extracting Max = %d,the heap is:\n",max);
    for(i=0;i<size;i++){
        printf("%d ",a[i]);
    }
    getch();
}