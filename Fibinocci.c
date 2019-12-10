#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a=1,b=0,c;
    c=a+b;
    while(c<=n){
        printf("%lld ",c);
        a=b;
        b=c;
        c=a+b;
    }
}