#include<iostream>
#include<stdlib.h>
#include <cstring>
using namespace std;

void print(int *a, int size);

int main(){
	//使用new和delete申请和释放内存
	int size;
	int *dArray;

	cin >> size;
	dArray = new int[size];

	memset(dArray, 0, size*sizeof(int));
	print(dArray, size);

	delete[] dArray;

	system("pause");
	return 0;
}

void print(int *a, int size){
	for (int i = 0; i < size; i++){
		cout << *(a + i) << ", ";
	}
	cout << endl;
}