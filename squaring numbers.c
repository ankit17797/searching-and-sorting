#include<stdio.h>
#include<stdlib.h>
#define max 500

int main(){
    int arr[max],n,i,j,k,count=0;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fclose(fp);
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if((a[i]*a[i])+(a[j]*a[j])==(a[k]*a[k])){
                    printf("%d %d %d",i,j,k);
                    count=1;
                    exit(0);
                }
            }
        }
    }
    if(count==0){
        printf("numbers not found");
    }
    fclose(fp);
    return 0;
}
