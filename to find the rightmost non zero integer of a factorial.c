#include <stdio.h>

int main() {
    int a,b;
    printf("Enter an integer: ");
    scanf("%d",&a);
    b=fac(a);
    printf("The rightmost non-zero number of %d! is %d",a,func(b));
    return 0;
}
int fac(int n){
    int i,m=1;
    for(i=n;i>0;i--){
        m=m*i;
    }
    return m;
}
int func(int x){
    int y;
    if(x%10==0){
        func(x/10);
    }
    else{
        return x%10;
    }
}
