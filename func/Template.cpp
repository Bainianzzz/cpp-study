#include<iostream>
using namespace std;

template <typename T>void mySwap(T &a,T &b);

int main() {
	int a=1,b=2;
    bool x=true,y=false;

    cout << a << ", "<< b<<endl;
    mySwap(a,b);
    cout << a << ", "<< b<<endl;

    cout << x << ", "<< y<<endl;
    mySwap(x,y);
    cout << x << ", "<< y<<endl;
	
	system("pause");
	return 0;
}

template <typename T>void mySwap(T &a,T &b){
    T t=a;
    a=b;
    b=t;
}