#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int flag=1;
    if(n==1){
        flag=0;
    }
    if(n>3 && (n%2==0 || n%3==0)){
        flag=0;
    }
    int k=1;
    int a=6*k-1;
    int b=6*k+1;
    while(flag==1 && (a<=sqrt(n)||b<=sqrt(n))){
        if(n%a==0 || n%b==0){
            flag=0;
        }
        k++;
        a=6*k-1;
        b=6*k+1;
    }
    if(flag){
        printf("Prime");
    }
    else{
        printf("Not a Prime");
    }
}