#include<stdio.h>
int main(){
	int arr[5];
	int n=5;
	int m;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int target;
	for(int i=1;i<n;i++){
	target =arr[i];
	int j=i-1;
	while((j>=0) && (target<=arr[j])){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=target;
	}

	for(int i=0;i<n;i++)
	printf("%d \n",arr[i]);

}
