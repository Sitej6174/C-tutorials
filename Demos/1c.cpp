#include<stdio.h>
int main()
{
    int n;
    printf("enter any number of elements:");
    scanf("%d",&n);

    int arr1[n],arr2[2];
    printf("enter any elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<2;i++){
        arr2[i]=arr1[i];
    }
    printf("copied array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr2[i]);
    }
    printf("\n");
    return 0;
}