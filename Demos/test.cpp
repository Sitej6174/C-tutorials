#include<stdio.h>

int main()
{
	int n,i,max,min;
	printf(" enter any number: ");
	scanf("%d",&n);
	int arr[n];
	printf("int integers number:.\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	max=min=arr[0];
	for(int i=1;i,n;i++)
	{
		if(arr[i]<max)max=arr[i];
		if(arr[i]>min)min=arr[i];
	}
	printf("max%d\n min %d\n",max,min);
	return 0;


}