#include<stdio.h>
#include<string.h>
int dp[100][100];

int print(int i,int j,char str1[],char str2[]){
    if(dp[i][j]==0){
        return 0;
    }
    else{
        print(i-1,j-1,str1,str2);
        printf("%c",str1[i-1]);
    }
    
}
int main()
{
    char str1[1000],str2[1000];
    scanf("%s",str1);
    scanf("%s",str2);
    int row = strlen(str1)+1;
    int col = strlen(str2)+1;
    int max=0,a,b;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(str1[i-1]==str2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
                if(dp[i][j]>max){
                    max=dp[i][j];
                    a=i;
                    b=j;
                }

            }
            else{
                dp[i][j]=0;
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
    int i=a;
    int j=b;

   print(i,j,str1,str2);
}