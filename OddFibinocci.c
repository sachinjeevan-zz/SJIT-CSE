#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a=1;
    b=1;
    c=2*b+a;
    d=a+b+c;
    printf("%d %d ",a,b);
    while(1){
        if(c<=n){
            printf("%d ",c);
        }
        else{
            break;
        }
        if(d<=n){
            printf("%d ",d);
        }
        else{
            break;
        }
        a=c;
        b=d;
        c=2*b+a;
        d=a+b+c;
    }
}