#include<stdio.h>
#include<stdlib.h>
#define max 500

int unpaired(int a[],int n){
    int i,temp=a[0];
    for(i=1;i<n;i++){
        temp=temp^a[i];
    }
    return temp;
}

int main(){
    int n,a[max],i,res;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    res=unpaired(a,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",res);
    fclose(fp);
    return 0;
}
