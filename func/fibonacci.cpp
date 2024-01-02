#include<iostream>
using namespace std;

int fibo(int n){
	switch (n)
	{
	case 1:
		return 0;
	case 2:
		return 1;
	default:
		return fibo(n - 1) + fibo(n - 2);
	}
}

int main(){
	cout << fibo(5)<<endl;
	system("pause");
	return 0;
}