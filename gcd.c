#include<stdio.h>
void main(){
    int a,b,gcd;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);
    int c = (a < b) ? a : b;
    for(int i = 1; i <= c; i++){
        if (a % i == 0 && b % i == 0){
            gcd = i;
        }
    
}
 printf("%d",gcd);
}
