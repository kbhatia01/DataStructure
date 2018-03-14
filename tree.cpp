#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	int data;
	struct node *right;
struct node *left;
}*root;
void create(){
	struct node *t;
		struct node *parent;
	struct node *ptr=root;
	t=(struct node *)malloc(sizeof(struct node));
		printf("enter data");
		int m;
		scanf("%d",&m);
t->data=m;
	t->left=NULL;
	t->right=NULL;
	
	if(root==NULL){
	root=t;
	return;
	}
	else{  
	while(ptr!=NULL){
		parent = ptr;
		if(ptr->data>m)
ptr=	ptr->left;
	else if(ptr->data<m)
	ptr= ptr->right;
	else{
	printf("same element");
	return;}}
		if(parent->data>m)
			parent->left=t;
		
		else
			parent->right=t;
		
		
}}
void inorder(struct node *t)
{
    if (t == NULL)
        return;   
	inorder(t->left);
  printf("%d \n",t->data);    
        inorder(t->right);
  
}

int main(){



	int c;
	while(1){
	
	scanf("%d",&c);
		switch(c){
			case 1:
				create();
				printf("value inserted");
				break;
	case 2: inorder(root);
	break;
		}
	}
}
