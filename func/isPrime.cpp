#include<iostream>
using namespace std;

int isPrime(int n);
void checkOutPrime(int a, int b);

int main(){
	int a = 0, b = 0;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	checkOutPrime(a, b);

	system("pause");
	return 0;
}

int isPrime(int n){
	int i = 0, sta = 1;
	if (n == 1){
		sta = 0;
	}
	else{
		for (i = 2; i <= pow(n, 0.5); i++){
			if (n%i == 0){
				sta = 0;
				break;
			}
		}
	}
	return sta;
}

void checkOutPrime(int a, int b){
	int i = 0;
	for (i = a; i <= b; i++){
		if (isPrime(i)){
			cout << i<<endl;
		}
	}
}