#include<iostream>
using namespace std;

void mySwap1(int a,int b);
void mySwap2(int *a,int *b);
void mySwap3(int &a,int &b);

int main() {
	int a=1,b=2;
    cout << a << ", "<< b<<endl;

    // 传值，无法交换
    mySwap1(a,b);
    cout << a << ", "<< b<<endl;

    // 传地址，可交换
    mySwap2(&a,&b);
    cout << a << ", "<< b<<endl;

    // 传引用，可交换
    mySwap3(a,b);
    cout << a << ", "<< b<<endl;
	
	system("pause");
	return 0;
}

void mySwap1(int a,int b){
    int t=a;
    a=b;
    b=t;
}

void mySwap2(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void mySwap3(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}