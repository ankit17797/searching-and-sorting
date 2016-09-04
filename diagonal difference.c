#include<stdio.h>
#define max 500

int diagonal_diff(int a[][max],int n){
    int i,p_sum=0,s_sum=0,diff;
    for(i=0;i<n;i++){
        p_sum+=a[i][i];
        s_dia+=+a[n-i-1][i];
    }
    diff=p_sum-s_sum;
    if(diff<0){
        diff=diff*(-1);
    }
    return diff;
}

int main(){
    int arr[max][max],n,i,j,diff;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    fclose(fp);
    diff=diag_diff(a,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",diff);
    fclose(fp);
    return 0;
}
