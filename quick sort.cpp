#include<stdio.h>
//CREATED BY KARAN BHATIA
int partition(int arr[],int low,int high){
	int temp,j=low-1;
	int pivot=arr[high];
	for(int i=low;i<=high-1;i++){ //running till array size-2 or last(pivot element)-1 
if(arr[i]<=pivot){
	j++;
	 temp=arr[j];
	arr[j]=arr[i];
	arr[i]=temp;
	
}
}

 temp=arr[j+1]; //giving pivot position 
arr[j+1]=arr[high];
arr[high]=temp;
return j+1;
}


void qsort(int arr[],int low,int high){
	if(low<high){
	int ppoint=	partition(arr,low,high);
qsort(arr,low,ppoint-1);
qsort(arr,ppoint+1,high);
}
}


int main(){
	int c;
	
	scanf("%d",&c);
	int arr[c];
for(int i=0;i<c;i++){
	scanf("%d",&arr[i]);
}
qsort(arr,0,c-1);
for(int i=0;i<c;i++){
	printf("%d",arr[i]);
}
}
