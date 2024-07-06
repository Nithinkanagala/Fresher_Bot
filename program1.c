#include<stdio.h>
void main(){
	int n,arr[20],i;
	printf("Enter the no.of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	n=n-1;
	for(i=0;i<n && i<n-i;i++){
		arr[i]=arr[i]+arr[n-i];
		arr[n-i]=arr[i]-arr[n-i];
		arr[i]=arr[i]-arr[n-i];
	}
	printf("The Reveres of array:");
	for(i=0;i<n+1;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}
