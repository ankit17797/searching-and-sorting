#include<stdio.h>

int freq(int a[], int n){
    int i,pos,max,t;
    for(i=0;i<n;i++){
        t=a%n;
        a[t]+=n;
    }
    max=a[0];
    pos=0;
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            pos=i;
        }
    }
    return pos;
}

int main(){
    int n,arr[max],i,res;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    fclose(fp);
    res=freq(arr,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",res);
    fclose(fp);
    return 0;
}
