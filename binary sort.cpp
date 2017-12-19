#include<stdio.h>
int bsort(int arr[],int n,int m){
	int mid,beg=0,end=n-1;
	for(int i=beg;i<=end;i++){
		mid=(beg+end)/2;
		if(m==arr[mid])
		{
			return mid;
		}
		else if(m>arr[mid]){
			beg=mid+1;
		}
		else{
			end=mid-1;
		}
	}
}
int main(){
	int arr[5];
	int n=5;
	int j;
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

scanf("%d",&j);
	int loc=bsort(arr,n,j);

	printf("%d \n",loc);
}
