#include<stdio.h>
int count=0;
int insertionSort(int A[],int n)
{
	int loc;
	int newitem;
	for(int i=1;i<n;i++)
	{
		loc=i-1;
		newitem=A[i];
		if(newitem>=A[loc])
		{
			count++;
		}
		while(loc>=0&&newitem<=A[loc])
		{
			A[loc+1]=A[loc];
			loc=loc-1;
			count++;
		}
		A[loc+1]=newitem;
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
	insertionSort(a,i);
	for(int k=0;k<i;k++)
	{
		printf("%d",a[k]);
	}
	printf("\n");
	printf("%d",count);
	return 0;
}
