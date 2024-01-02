#include<iostream>
#include"f1.h"
using namespace std;

int main(){
	int a[10] = { 34,91,83,56,29,93,56,12,88,72 };
	int size = sizeof(a) / sizeof(int);
	print(a, size);

	bubble(a, size);

	system("pause");
	return 0;
}