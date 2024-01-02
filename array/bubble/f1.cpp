#include<iostream>
#include"f1.h"
using namespace std;

void print(int a[], int size){
	int i = 0;
	for (i = 0; i < size; i++){
		cout << a[i] << "\t";
	}
	cout << endl;
}

void bubble(int a[], int size){
	int i = 0, pass = 0, flag = 1;
	//flag的意义是：仅当某一轮逐个比较大小发生排序时，下一轮排序才会进行下去
	//这样可以减少重复计算
	for (pass = 1; pass < size&&flag == 1; pass++){
		flag = 0;
		for (i = 0; i< size - pass; i++){
			if (a[i]>a[i + 1]){
				char temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
				flag = 1;
			}
		}
		print(a, size);
	}
}