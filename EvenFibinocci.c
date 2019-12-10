#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a=2,b=8,c;
    printf("%lld %lld ",a,b);
    c=4*b+a;
    while(c<=n){
        printf("%lld ",c);
        a=b;
        b=c;
        c=4*b+a;
    }
}