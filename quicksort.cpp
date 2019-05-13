#include<stdio.h>
int count=0;
int partition(int a[],int p,int r)
{
	int temp1;
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			temp1=a[++i];
			a[i]=a[j];
			a[j]=temp1;
			count++;
		}
	}
	temp1=a[i+1];
	a[i+1]=a[r];
	a[r]=temp1;
	count++;
	return i+1;
}
int quicksort(int a[],int p,int r)
{
	
	if(p<r)
	{
		int q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
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
    quicksort(a,0,i-1);
    printf("%d",count);
    return 0;
}
