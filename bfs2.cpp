#include<stdio.h>
int main(){
	static int arr[10][10];
	int start,end;
	int  n,e;
	scanf("%d %d",&n, &e);
	for(int i=1;i<=e;i++){
		scanf("%d %d",&start,&end);
		arr[start][end]=1;
	arr[end][start]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
	printf("%d",arr[i][j]);
	
	}printf("\n");
	}
	
	int bfs[10], status[10],queue[100];
	int w,k=1,s,f,r;

	for(int i=0;i<10;i++){
	status[i]=0;}
	scanf("%d",&s);
	f=r=-1;
	f=r=0;
	status[s]=1;
	queue[f]=s;
	while(f!=-1){
	w=queue[f];
	if(f==r){
		f=r=-1;
	}	
	else{
	f++;}
	status[w]=2;
	bfs[k]=w;
	k++;
	
	for(int i=1;i<=n;i++){
		if(arr[w][i]!=0 && status[i]==0){
			queue[++r]=i;
			if(r==0){
				f=0;
			}
			status[i]=1;
		}
	}
	}
	for(int i=1;i<=k;i++){
		
			printf("%d \n",bfs[i]);
		
	}
}
