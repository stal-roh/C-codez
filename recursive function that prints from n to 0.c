#include <stdio.h>

int rec(int m);

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    rec(n);
    return 0;
}

int rec(int m){
    if(m>0){
        printf("%d",m-1);
        return(rec(m-1));
    }
    else{
        return 0;
    }
}
