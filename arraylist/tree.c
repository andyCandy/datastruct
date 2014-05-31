#include<stdio.h>
typedef char TElemType;

typedef struct 
{
	TElemType data;
	struct BitNode *lchild,*rchild;

}BitNode,*BitTree;


void PreOrderTraverse(BitTree t){
	if(!t)
		return;
	
	printf("%c",t->data);
	PreOrderTraverse(t->lchild);
	PreOrderTraverse(t->rchild);
}

void InOrderTraverse(BitTree t){
	if(!t)
		return;
	InOrderTraverse(t->lchild);
	printf("%c",t->data);
	InOrderTraverse(t->rchild);

}

void TestOrderTraverse(){
	BitNode lchild ={
		'l',
		NULL,NULL
	

	};
	BitNode rchild = {
		'r',
		NULL,NULL

	};
	BitNode root  = {
		'm',
		&lchild,&rchild

	};
	PreOrderTraverse(&root);
	printf("换行\n");
	InOrderTraverse(&root);
	
}


int main(){
	TestOrderTraverse();
	return 0;

}
