#include<stdio.h>
int top=-1;

int isfull(int size){
    if(top==size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int stack[],int size,int data){
    if(isfull(size)==1){
        printf("Stack is Full");
    }
    else{
        top++;
        stack[top]=data;
    }
}
int pop(int stack[]){
    if(isempty()==1){
        return -1;
    }
    else{
        top--;
        return stack[top+1];
    }
}
int peek(int stack[]){
    if(isempty()==1){
        return -1;
    }
    else{
        return stack[top];
    }
}
int stackempty(int arr[],int tp,int i){
    return arr[tp]*i;
}
int stacknotempty(int arr[],int stack[],int tp,int i){
    return arr[tp]*(i-peek(stack)-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],stack[n],area=0,maxArea=0;
    for(int m=0;m<n;m++){
        scanf("%d",&arr[m]);
    }
    int i=0;
    while(i<n){
        if(isempty()==1){
            push(stack,n,i);
            i++;
        }
        else{
            if(arr[stack[top]]<=arr[i]){
                push(stack,n,i);
                i++;
            }
            else{
                while(arr[peek(stack)]>arr[i] && peek(stack)!=-1 ){
                    int ans= pop(stack);
                    if(isempty()==1){
                        area= stackempty(arr,ans,i);
                    }
                    else{
                        area=stacknotempty(arr,stack,ans,i);
                    }
                    if(area>maxArea){
                        maxArea=area;
                    }
                }
            }
        }
    }
    while(isempty()==0){
        int ans= pop(stack);
                    if(isempty()==1){
                        area= stackempty(arr,ans,i);
                    }
                    else{
                        area=stacknotempty(arr,stack,ans,i);
                    }
                    if(area>maxArea){
                        maxArea=area;
                    }
    }
    printf("%d",maxArea);
}