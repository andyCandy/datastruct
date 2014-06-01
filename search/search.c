#include<stdio.h>


int BinarySearch(int *a,int length,int key){
	
	int low = 0;
	int high = length;
	int mid ;

	while(low<=high){
		mid = (low + high)/2;
		if(a[mid] == key){
			return a[mid];
		}else if(a[mid]<key){
			low = mid + 1;
		}else{
			high = mid - 1;
		}
	
	}
	return -1;

}

void testBinarySearch(){
	int a[] = {1,2,3,4,5,6};
	printf("%d\n",BinarySearch(a,6,4));

}

int main(){

	testBinarySearch();
	return 0;

}
