#include<stdio.h>

int main(){
	int v,src,dev;
	scanf("%d",&v);
	static int adj[100[100];
	for(int i=1;i<=n;i++){
		scanf("%d %d",&src,&dev);
		adj[src][dev]=1;
	}
	int start,status[100],queue[15];
	scanf("%d",&start);
	int f,r;
	f=r=0;
	queue[f]=start;
status[start]=1;
int w,k=0,bfs[10];
while(f!=-1){
	w=queue[f];
	if(f==r){
		f=r=-1;
		
	}
	else{
		f++;
	}
	status[w]=2;
	bfs[k]=w;
	k++;
	for(int i=1;i<=v;i++){
		if(adj[w][i]!=0 && status[i]==0){
			queue[++r]=i;
			if(r==0)
			f=0;
			status[i]=1;
		}
	}
}

}
