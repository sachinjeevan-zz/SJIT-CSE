#include<stdio.h>
#include<string.h>
int main()
{
    char str1[1000],str2[1000],str3[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=strlen(str1)-1;
    int j=strlen(str2)-1;
    int k=0;
    int a=i,b=j,c=k;
    for(int i_loop=0;i_loop<=100;i_loop++){
        str3[i_loop]='0';
    }
    int carry1=0,carry2=0;
    while(b>=0){
        a=i;
        carry1=0;
        carry2=0;
        c=k;
        while(a>=0){
        int prod = ((str1[a]-48)*(str2[b]-48)+carry1);
       int num = (prod%10)+carry2+(str3[c]-48);
       str3[c]=(num%10)+48;
       carry2=num/10;
        c++;
        carry1=prod/10;
        a--;
        }
        if(carry1!=0){
            while(carry1!=0){
                int num=(str3[c]-48)+carry1+carry2;
                carry2=0;
                str3[c]= ((num)%10)+48;
                c++;
                carry1=num/10;
            }
        }
        k++;
        b--;
    }
str3[c]='\0';
printf("%s",strrev(str3));
}