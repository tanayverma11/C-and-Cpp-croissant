#include<stdio.h>
int main(){
    int m,n,i,max=0,k=0,j;
    scanf("%d%d",&m,&n);
    int arr[m][n],ans[m];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
           scanf("%d",&arr[i][j]);
        }
    }
        for(i=0;i<m;i++)
          {
                int sum=0;
            for( j=0;j<n;j++){
               sum+=arr[i][j];
            }

         if(max<=sum){
             max=sum;  
           } ans[k]=sum;
              k++;
        }
        for(i=0;i<m;i++){
          if(ans[i]==max) printf("%d ",i);}
return 0;
        }
