#include <stdio.h>
int main(){
    int n,l1[30],i,j,a;
    printf("Enter number of integer: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("Enter integer %d: ",i);
        scanf("%d",&l1[i-1]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if (l1[i]>l1[j]){
                a=l1[i];
                l1[i]=l1[j];
                l1[j]=a;
            }
        }
    }
    printf("Sorted array: ");
    for(i=0;i<n;i++){
        printf("%d ",l1[i]);
    }
    return 0;
}
