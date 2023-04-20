#include <stdio.h>
extern int a=0;
int oddeven(int m);
int main() {
    int n;
    printf("Enter number of integers: ");
    scanf("%d",&n);
    oddeven(n);
    if(a==1){
        printf("The sum of all the numbers is even.");
    }
    else{
        printf("The sum of all the numbers is odd.");
    }
    return 0;
}
int oddeven(int m){
    int s=0,i;
    for(i=0;i<m;i++){
        int b;
        printf("\nEnter integer %d: ",i+1);
        scanf("%d",&b);
        s+=b;
    }
    if(s%2==0){
        a+=1;
    }    
}
