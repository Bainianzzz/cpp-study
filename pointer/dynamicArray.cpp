#include<iostream>
#include<stdlib.h>
using namespace std;

void print(int *a,int size);

int main(){
	int size;
	int *dArray;

	cin >> size;
	dArray = (int*)malloc(size*sizeof(int));/*申请内存*/
	if (dArray == NULL){
		cout << "内存申请失败\n";
		exit(-1);
	}

	for (int i = 0; i < size; i++){
		dArray[i] = i+1;
	}
	print(dArray, size);
	
	free(dArray);/*及时释放内存*/

	system("pause");
	return 0;
}

//用指针遍历数组
void print(int *a,int size){
	for (int i = 0; i < size; i++){
		cout << *(a + i)<<", ";
	}
	cout << endl;
}