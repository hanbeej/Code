#include<stdio.h>
#define size 10000
int temp[size];
int count=0;
int merge(int a[],int p,int q,int r)
{
	int i=p;
	int j=q+1;
	int t=1;
	while(i<=q&&j<=r)
	{
		count++;
		if(a[i]<a[j])
		{
			temp[t++]=a[i++];
		}
		else
		{
			temp[t++]=a[j++];
		}
	}
	while(i<=q)
	{
		
		temp[t++]=a[i++];
	}
	while(j<=r)
	{
		temp[t++]=a[j++];
	}
	i=p;
	t=1;
	while(i<=r)
	{
		a[i++]=temp[t++];
	}
}
int mergesort(int a[],int p,int r)
{
	if(p<r)
	{
		int q=(p+r)/2;
	    mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}
int main()
{
	int i;
    scanf("%d",&i);
    int a[i];
    for(int k=0;k<i;k++)
    {
        scanf("%d",&a[k]);
    }
    mergesort(a,0,i-1);
    printf("%d",count);
    return 0;
}


