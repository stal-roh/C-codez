#include <stdio.h>

int rev(int n);
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%⁰",&a);
    printf("The reversed integer is  %d",rev(a));
    return 0;
}
int rev(int n){
    int i,r=0;
    for(i=0;n!=0;i++){
        r=r*10;
        r+=n%10;
        n=n/10;
    }
    return r;
}
