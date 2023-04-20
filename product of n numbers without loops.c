#include <stdio.h>

extern int p=1;
int product(int m);
int main() {
    int n,a;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    product(n);
    printf("Product of all the numbers is %d",p);
    return 0;
}
int product(int m){
    if(m>0){
        int x;
        printf("Enter integer: ");
        scanf("%d",&x);
        p=p*x;
        return(product(m-1));
    }
    else{
        return 0;
    }
}
