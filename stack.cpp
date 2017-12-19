#include<stdio.h>
int top=-1;
int n;

void push(int arr[]){
		top++;
if(top>-1){

		scanf("%d",&arr[top]);
}
	
if(top>=n){
	printf("overflow\n");
}
	
}
void pop(int arr[]){
	if(top>-1){
		top--;
	}
else{
	printf("underflow\n");
}}
void display(int arr[])
{
	for(n=0;n<top;n++){
		printf("%d \n",arr[n]);
	}
	if(top==-1){
		printf("array is empty");
	}
}
main(){
	
	printf("enter elements in array");
	scanf("%d",&n);
	int arr[n];
while(1){
int c;
	printf("enter 1 for push \n 2 for pop \n 3 for display\n");
scanf("%d",&c);
switch(c)	{
case 1:
	push(arr);
	printf("value inserted\n");
	break;
	case 2:
		pop(arr);
		printf("value deleted\n");
		break;
		case 3:
			display(arr);
break;
}}}
