#include <stdio.h>
int main(){
    int a,b,i,j,m[10][10],t[10][10];
    printf("Enter number of rows: ");
    scanf("%d",&a);
    printf("Enter number of coloumns: ");
    scanf("%d",&b);
    printf("Enter a %dx%d matrix: \n",a,b);
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            t[j][i]=m[i][j];
        }
    }
    printf("The transpose is: \n");
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            printf("%d\t",t[i][j]);
        }
        printf("\n");
    }
    return 0;
}
