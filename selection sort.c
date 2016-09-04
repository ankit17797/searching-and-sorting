#include<stdio.h>
#include<stdlib.h>
#define max 500

void selection(int a[],int n){
    int i,j,temp,pos;
    for(i=0;i<n;i++){
        temp=a[i];
        for(j=i+1;j<n;j++){
            if(temp>a[j]){
                temp=a[j];
                pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=temp;
    }
}

int main(){
    int n,arr[max],i;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fclose(fp);
    selection(arr,n);
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    fclose(fp);
    return 0;
}
