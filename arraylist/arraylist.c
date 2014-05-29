#include <stdio.h>

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
typedef int Status;
typedef int ElemType;
typedef struct
{
	ElemType data[MAXSIZE];
	int length;
}SqList;

Status GetElem(SqList L,int i,ElemType *e)
{
	if(L.length==0 || i < 1 || i > L.length)
		return ERROR;
	*e = L.data[i-1];
	return OK;
}

void TestGetElem(){
	SqList sqlist = {
		{1,2,3,4},
		4

	};
	ElemType *e;
	Status status = GetElem(sqlist,3,e);
	if(status == OK && *e==3)
	{
		printf("GetElem SUCCESS\n");
	}
	else
	{
		printf("status:%d,e:%d\n",status,*e);
		printf("GetElem FAILURE\n");
	}


}

int main(){

	TestGetElem();
	return 0;
}
