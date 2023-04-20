#include <stdio.h>

//function to take matrix input
int matrix(int x, int y, int z[10][10]){
    int i,j;
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            scanf("%d",&z[i][j]);
            printf("\t");
        }
        printf("\n");
    }
}

//function to mutiply given two matrices
int matrix_multiplication(int m,int n,int x[10][10],int y[10][10],int z[10][10]){
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            z[i][j]=0;
            for(k=0;k<n;k++){
                z[i][j]+=x[i][k]*y[k][i];
            }
        }
    }
    
}

int main() {
    
    int a[10][10],b[10][10],ab[10][10],m1,n1,m2,n2,i,j;
    
    printf("Enter order of first matrix in m x n format: ");
    scanf("%dx%d",&m1,&n1);
    printf("\nEnter the matrix:\n");
    matrix(m1,n1,a);
    
    printf("\nEnter order of second matrix in m x n format: ");
    scanf("%dx%d",&m2,&n2);
    printf("\nEnter the matrix:\n");
    matrix(m2,n2,b);
    
    matrix_multiplication(m1,n2,a,b,ab);
    printf("\nOn multiplying these two matrices we get:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n2;j++){
            printf("%d ",ab[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
