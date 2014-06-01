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

void PostOrderTraverse(BitTree t){
	if(!t)
		return;

	PostOrderTraverse(t->lchild);
	PostOrderTraverse(t->rchild);
	printf("%c",t->data);


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
	BitTree root2 = &root;
	BitTree root3 = &root;
	PreOrderTraverse(&root);
	printf("\n");
	InOrderTraverse(root2);
	printf("\n");
	PostOrderTraverse(root3);
	printf("\n");

}


int main(){
	TestOrderTraverse();
	return 0;

}
