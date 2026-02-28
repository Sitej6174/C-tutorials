#include <stdio.h>
int main() {
    int n, i, j, t, a[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) 
	scanf("%d",&a[i]);
    printf("Unsorted: ");
    for(i=0;i<n;i++); 
	printf("%d ",a[i]);
    for(i=0;i<n-1;i++) 
	for(j=i+1;j<n;j++) if(a[i]>a[j]){t=a[i];a[i]=a[j];a[j]=t;}
    printf("\nSorted: ");
    for(i=0;i<n;i++) 
	printf("%d ",a[i]);
} 

