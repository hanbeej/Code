#include<stdio.h>
int count=0;
int theLargest(int A[],int last)
{
	
	int largest=0;
	for(int i=0;i<=last;i++)
	{
		if(A[i]>A[largest])
		{
			largest=i;
			count++;
		}
	}
	return largest;
}
int counting()
{
	
}
int selectionSort(int A[],int n)
{
	int k;
	int temp=0;
	for(int last=n-1;last>=0;last--)
	{
		k=theLargest(A,last);
		temp=A[k];
		A[k]=A[last];
		A[last]=temp;
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
	selectionSort(a,i);
	
	printf("%d",count);
	return 0;
}
