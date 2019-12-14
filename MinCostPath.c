#include<stdio.h>
int min(int a,int b){
    return a<b?a:b;
}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    int dp[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if(i==0 && j==0){
                dp[i][j]=arr[i][j];
            }
            else if(i==0){
                dp[i][j]=dp[i][j-1]+arr[i][j];
            }
            else if(j==0){
                dp[i][j]=dp[i-1][j]+arr[i][j];
            }
            else{
                dp[i][j]=min(dp[i-1][j],dp[i][j-1])+arr[i][j];
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
}