/*Rotate square matrix by 90 degress*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void swap(int *m,int *n){
    int temp;
    temp = *m;
    *m = *n;
    *n = temp;
}

void reverse(int **arr,int row,int col){
    int i,j,k;
    
    for(i=0;i<row;i++){
        for(j=0,k=col-1;j<k;j++,k--){
            swap(&arr[i][j],&arr[i][k]);                                 
        }
    }
}

void transpose(int **arr,int row,int col){
    int i,j;
    
    for(i=0;i<row;i++){
        for(j=i;j<col;j++){
            swap(&arr[i][j],&arr[j][i]);                                 
        }
    }
}

void print(int **arr,int row,int col){
    int i, j;
    for (i = 0; i < row; i++){
        printf("\n");
        for (j = 0; j < col; j++)
            printf(" %d  ",arr[i][j]);
    }
}

int main(){
    int rows, cols, i,j;
    int **x;
    
    printf("Enter no. of rows and columns:\n");
    scanf("%d%d",&rows,&cols);
    x = malloc(rows * sizeof(int));
    for (i=0; i<rows; i++)
    {
        x[i] = malloc(cols * sizeof(int));
    }
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            scanf("%d",&x[i][j]);
        }
    }

    reverse(x,rows,cols);
    transpose(x,rows,cols);
    print(x, rows, cols);

    for (i=0; i<rows; i++)
    {
        free(x[i]);
    }
    free(x);
    getch();
}