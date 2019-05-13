#include<stdio.h>
int count=0;
int heapify(int Arr[], int k, int n)
{
     
    int left, right, temp;
    int bigger;
    left=2*k; right = 2*k+1;
    if(right<=n)
    {
        if(Arr[left]<=Arr[right]) bigger = right;
        else bigger= left;
    }
    else if(left<=n)bigger=left;
    else return 0;
    if(Arr[bigger]>Arr[k]){
        temp = Arr[k];
        Arr[k]=Arr[bigger];
        Arr[bigger]=temp;
        if(k!=n/2)
        {
        	count++;
		}
        heapify(Arr, bigger, n);
    }
  
}
  
int buildHeap(int Arr[], int n)
{
    for(int i=n/2; i>0; i--)
    {   
        heapify(Arr, i ,n);
    }
}
  
int heapSort(int Arr[], int n)
{
    int temp;
    buildHeap(Arr, n);
    for(int i=n; i>1; i--)
    {
        temp= Arr[1];
        Arr[1]=Arr[i];
        Arr[i]=temp;
        heapify(Arr, 1, i-1);
    }
}
int main()
{
    int i;
    scanf("%d",&i);
    int a[i];
    for(int k=1;k<=i;k++)
    {
        scanf("%d",&a[k]);
    }
    heapSort(a,i);
    printf("%d",count);
    return 0;
}
