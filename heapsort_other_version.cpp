#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 
void buildHeap(int*,int);
void heapify(int*,int,int);
void heapSort(int*,int);
int count=0;
int main(){
    int n,i,j;
    int* a;
     
    scanf("%d",&n);
    a=(int*)malloc(sizeof(int)*(n+1));
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    heapSort(a,n);
    printf("%d",count);
    buildHeap(a,n); 
}
 
void buildHeap(int* a,int n){
    int i;
    for(i=floor(n/2);i>0;i--){
        heapify(a,i,n);
    }
}
 
void heapify(int* a,int k,int n){
    int right= 2*k+1;               
    int left =2*k;
    int bigger=left;
    int tmp;
     
    if(right<=n){                   
        if(a[left]<=a[right])
            bigger=right;
        else
            bigger=left;
    }else if(left>n)return;
     
    if(a[bigger]>a[k]){         
        tmp=a[bigger];
        a[bigger]=a[k];
        a[k]=tmp;
        count++;
        heapify(a,bigger,n); 
    }
}
 
void heapSort(int* a,int n){
    int tmp;
    buildHeap(a,n);
     
    count=0;
    for(int i=n;i>1;i--){
        tmp=a[1];
        a[1]=a[i];
        a[i]=tmp;
        heapify(a,1,i-1);
         
    }
}
