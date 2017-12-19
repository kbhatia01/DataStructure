//dedicated to comunnity by KARAN BHATIA
#include<stdio.h>
int sa[10];
void mergesort(int a[],int beg,int mid,int end)
{
	int l1=beg,l2=mid+1,i=beg;
while(l1<=mid && l2<=end){
	if(a[l1]<a[l2])
		sa[i++]=a[l1++];
	else
			sa[i++]=a[l2++];
	}
while(l1 <= mid)    
      sa[i++] = a[l1++];
   while(l2 <= end)   
      sa[i++] = a[l2++];
for(int i=beg;i<=end;i++)
a[i]=sa[i];
}
void merge(int arr[],int low,int high){
	if(low<high){
		int mid=(high+low)/2;
		merge(arr,low,mid);
		merge(arr,mid+1,high);
		mergesort(arr,low,mid,high);
}}
int main(){
	int arr[10];
	for (int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	merge(arr,0,9);
	for(int i=0;i<10;i++)
	printf("%d \n",arr[i]);
}
