#include<stdio.h>
int countingSort(int a[],int b[],int n)
{
	int max=a[1];
	int min=a[1];
	for(int i=2;i<=n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	int k=max-min+1;
	int c[k];
	
	for(int i=1;i<k+1;i++)
	{
		c[i]=0;
	}
	for(int j=1;j<n+1;j++)
	{
		c[a[j]-min+1]++;
	}
	for(int i=2;i<k+1;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(int j=1;j<k+1;j++)
	{
		printf("%d ",c[j]);
	}

	for(int j=n;j>0;j--)
	{
		b[c[a[j]+1-min]]=a[j];
		c[a[j]+1-min]--;
	}	
}
int main()
{
    int i;
    scanf("%d",&i);
    int a[i];
    int b[i];
    for(int k=1;k<=i;k++)
    {
        scanf("%d",&a[k]);
    }
    for(int k=1;k<=i;k++)
    {
        b[k]=0;
    }
    countingSort(a,b,i);
    return 0;
}
