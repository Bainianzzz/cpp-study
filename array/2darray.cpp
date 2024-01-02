#include<iostream>
#include<iomanip>
using namespace std;

void myPrint(int a[4][3], int row, int col);

int main(){
	//初始化数组并求长度
	double a[4][5]= { 
		{ 1, 2, 3, 4, 5 }, 
		{ 6, 7, 8, 9, 10 },
		{ 11, 12, 13, 14, 15 },
		{ 16, 17, 18, 19, 20 }
		};
	cout <<"a所占内存大小"<< sizeof(a)<<endl;
	cout <<"a[0]所占内存大小"<< sizeof(a[0]) << endl;
	cout <<"a[0]中元素个数"<< sizeof(a[0]) / sizeof(double) << endl;
	cout <<"a中元素个数"<< sizeof(a) / sizeof(double) << endl;
	cout <<"a的行数"<< sizeof(a) / sizeof(a[0]) << endl;
	cout <<"a的列数"<< sizeof(a[0]) / sizeof(a[0][0]) << endl;
	cout << endl << endl;

	//遍历输出
    cout<<"遍历输出"<<endl;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 5; j++){
			cout<<setw(4) << a[i][j]<<", ";
		}
		cout << endl;
	}
	cout << endl << endl;

	//转置输出
    cout<<"转置输出"<<endl;
	for (int j = 0; j < 5; j++){
		for (int i = 0; i < 4; i++){
			cout << setw(4) << a[i][j] << ", ";
		}
		cout << endl;
	}
	cout << endl << endl;

	//矩阵乘法
	double b[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
	// print(&b[0][0], 5, 3);
	// cout  << "*" << endl;
	// print(&a[0][0], 4, 5);
	// cout  << "=" << endl;
	const int crow=4, ccol=3;
	int c[crow][ccol] = {};
	//这里一般需要检查矩阵乘法的正确性

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 5; k++){
				c[i][j] = a[i][k] * b[k][j];
			}
		}
	}
    
    cout<<"矩阵乘法结果："<<endl;
    myPrint(c,4,3);

	system("pause");
	return 0;
}

//print(&b[0][0], 5, 3);
/*
void print(double* a, int row, int col){
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cout << setw(4) << *(a+i*col+j) << ", ";
		}
		cout << endl;
	}
}
*/

void myPrint(int a[4][3], int row, int col){
    for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			cout << setw(4) << a[i][j] << ", ";
		}
		cout << endl;
	}
}